from http.server import BaseHTTPRequestHandler, HTTPServer

class SimpleHandler(BaseHTTPRequestHandler):
    def do_GET(self):
        self.send_response(200)
        self.end_headers()
        self.wfile.write(b"Hello from Nithin's Python Web Server!")

server = HTTPServer(('172.22.91.41', 8080), SimpleHandler)
print("Server started on http://172.22.91.41:8080")
server.serve_forever()
