0x06-log_parsing
This script reads stdin line by line and computes metrics

Input format:
<IP Address> - [<date>] "GET /projects/260 HTTP/1.1" <status code> <file size>
After every 10 lines and/or a keyboard interruption (CTRL + C), print.
Total file size: File size: <total size>
format: <status code>: <number>

Ex:
75.19.22.171 - [2021-01-27 06:08:07.269753]...
... "GET /projects/260 HTTP/1.1" 500 844