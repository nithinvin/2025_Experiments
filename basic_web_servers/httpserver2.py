from http.server import BaseHTTPRequestHandler, HTTPServer

# Load the file once when the script starts
try:
    with open("index.html", "rb") as f:
        INDEX_HTML_CONTENT = f.read()
    INDEX_HTML_OK = True
except FileNotFoundError:
    INDEX_HTML_CONTENT = b"404 Not Found: index.html not found"
    INDEX_HTML_OK = False

class SimpleHandler(BaseHTTPRequestHandler):
    def do_GET(self):
        client_ip, client_port = self.client_address
        print(f"Client connected from {client_ip}:{client_port}")

        if INDEX_HTML_OK:
            self.send_response(200)
            self.send_header("Content-type", "text/html")
            self.send_header("Content-length", str(len(INDEX_HTML_CONTENT)))
            self.end_headers()
            self.wfile.write(INDEX_HTML_CONTENT)
        else:
            self.send_response(404)
            self.end_headers()
            self.wfile.write(INDEX_HTML_CONTENT)

server = HTTPServer(('0.0.0.0', 8080), SimpleHandler)
print("Server running at http://0.0.0.0:8080")
server.serve_forever()

