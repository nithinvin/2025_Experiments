#!/bin/bash
cd /var/www/my-web/server_8000 || exit 1
exec /usr/bin/python3 -m http.server 8000 --bind 0.0.0.0

