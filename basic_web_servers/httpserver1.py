from http.server import BaseHTTPRequestHandler, HTTPServer

class SimpleHandler(BaseHTTPRequestHandler):
    def do_GET(self):
        client_ip, client_port = self.client_address
        print(f"Client connected from {client_ip}:{client_port}")

        try:
            with open("index.html", "rb") as f:
                content = f.read()

            self.send_response(200)
            self.send_header("Content-type", "text/html")
            self.send_header("Content-length", str(len(content)))
            self.end_headers()
            self.wfile.write(content)

        except FileNotFoundError:
            self.send_response(404)
            self.end_headers()
            self.wfile.write(b"404 Not Found: index.html not found")

server = HTTPServer(('0.0.0.0', 8080), SimpleHandler)
print("Server running at http://0.0.0.0:8080")
server.serve_forever()

