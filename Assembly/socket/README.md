# Sockets (7 points)

## Instructions
Complete `create_socket` in `socket.S` to create a TCP socket. You must use x86 assembly to complete this.

`create_socket` should follow the following C function prototype:

```c
int create_socket();
```

It should return the file descriptor corresponding to the created TCP socket.

*Hint:* Sockets can be created in assembly via a system call.

## Testing
Successful creation of a socket can be tested with netcat.

Running `nc -l 4000` and then the socket program should result in netcat printing `Hello world!`.

## Note
You will need to use either your own linux computer or the provided VM to do this problem.