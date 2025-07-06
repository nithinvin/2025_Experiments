Steps to create a static web server:
1) Create a directory to host some static web pages using a web server. Example: /var/www/my-web/server_8000
2) Copy the static-web-server_8000.sh to /usr/local/bin. Change the port number as needed.
3) Copy the static-web_8000.service to /usr/lib/systemd/system. Change the script name and working directory as needed
4) Use "sudo systemctl start static-web_8000.service" to start the service. Use "sudo systemctl status static-web_8000.service" to check the status
5) Use "sudo systemctl enable static-web_8000.service" to enable the service to start when the machine starts
