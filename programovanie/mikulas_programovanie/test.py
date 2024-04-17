import select
import socket

# Create a socket object
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Connect to a server
s.connect(('www.python.org', 80))

# Send some data
s.sendall(b'GET / HTTP/1.1\r\nHost: www.python.org\r\n\r\n')

while True:
    # Use select to wait for read readiness
    ready_to_read, ready_to_write, in_error = select.select([s], [], [], 5.0)

    if ready_to_read:
        # If the socket is ready to read, read it and print the data
        data = s.recv(4096)
        print('Received:', data)
    else:
        # If the socket wasn't ready to read within 5 seconds, give up
        print('Timed out')
        break