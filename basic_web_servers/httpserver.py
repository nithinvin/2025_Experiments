from http.server import BaseHTTPRequestHandler, HTTPServer

class SimpleHandler(BaseHTTPRequestHandler):
    def do_GET(self):
        client_ip, client_port = self.client_address
        print(f"Client connected from {client_ip}:{client_port}")
        self.send_response(200)
        self.end_headers()
        self.wfile.write(b"Hello from Nithin's Python Web Server!")

server = HTTPServer(('0.0.0.0', 9090), SimpleHandler)
print("Server started on http://0.0.0.0:9090")
server.serve_forever()
