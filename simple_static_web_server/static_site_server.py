from http.server import BaseHTTPRequestHandler, HTTPServer
import os
import mimetypes

# Get the directory where the script is running
print("abs path of __file__ is", os.path.abspath(__file__))
BASE_DIR = os.path.dirname(os.path.abspath(__file__))

class StaticSiteHandler(BaseHTTPRequestHandler):
    def do_GET(self):
        # Default to index.html
        print("initial path is ", self.path)
        path = self.path.strip("/")
        print("path is ", path)
        if path == "":
            path = "index.html"
        
        file_path = os.path.join(BASE_DIR, path)
        print("full file_path is", file_path)

        if os.path.isfile(file_path):
            mime_type, _ = mimetypes.guess_type(file_path)
            print("mime_type is", mime_type)
            try:
                with open(file_path, "rb") as f:
                    content = f.read()
                self.send_response(200)
                self.send_header("Content-type", mime_type or "application/octet-stream")
                self.send_header("Content-length", str(len(content)))
                self.end_headers()
                self.wfile.write(content)
                print(f"Served {file_path} to {self.client_address}")
            except Exception as e:
                self.send_response(500)
                self.end_headers()
                self.wfile.write(b"500 Internal Server Error")
                print(f"Error serving {file_path}: {e}")
        else:
            self.send_response(404)
            self.end_headers()
            self.wfile.write(b"404 Not Found")
            print(f"404 Not Found: {file_path}")

def run(server_class=HTTPServer, handler_class=StaticSiteHandler, port=8080):
    server_address = ('0.0.0.0', port)
    httpd = server_class(server_address, handler_class)
    print(f"Serving static site at http://0.0.0.0:{port}")
    httpd.serve_forever()

if __name__ == "__main__":
    run()
