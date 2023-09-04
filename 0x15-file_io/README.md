# FILE I/O

1. **How to create, open, close, read, and write files:**
To create a file, you can use the `fopen` function with the "w" mode. To open an existing file, you can use the `fopen` function with modes like "r" for reading or "w" for writing. To close a file, use the `fclose` function. To read from a file, use the `fread` or `fgets` function, and to write to a file, use the `fwrite` or `fprintf` function.

2. **What are file descriptors:**
In C programming, a file descriptor is an integer value that represents a file opened by the process. It's a small non-negative integer that the operating system assigns to each open file. The file descriptor is used to perform various operations on the file, such as reading, writing, or closing it.

3. **What are the 3 standard file descriptors, their purpose, and POSIX names:**
The three standard file descriptors are:
   - **Standard Input (stdin)**: It represents the input stream from which a program reads data. The POSIX name for this file descriptor is `STDIN_FILENO` (integer value: 0).
   - **Standard Output (stdout)**: It represents the output stream to which a program writes its normal output. The POSIX name for this file descriptor is `STDOUT_FILENO` (integer value: 1).
   - **Standard Error (stderr)**: It represents the output stream to which a program writes error messages. The POSIX name for this file descriptor is `STDERR_FILENO` (integer value: 2).

4. **How to use the I/O system calls open, close, read, and write:**
   - `open`: The `open` system call is used to open a file and obtain a file descriptor. It takes a filename and various flags as arguments and returns a file descriptor.
   - `close`: The `close` system call is used to close a file descriptor. It takes the file descriptor as an argument and releases the resources associated with it.
   - `read`: The `read` system call is used to read data from a file descriptor into a buffer. It takes the file descriptor, buffer, and the number of bytes to read as arguments and returns the number of bytes read.
   - `write`: The `write` system call is used to write data from a buffer to a file descriptor. It takes the file descriptor, buffer, and the number of bytes to write as arguments and returns the number of bytes written.

5. **Flags O_RDONLY, O_WRONLY, O_RDWR:**
   - `O_RDONLY`: Open the file in read-only mode.
   - `O_WRONLY`: Open the file in write-only mode.
   - `O_RDWR`: Open the file in read-write mode.

6. **File permissions and setting them when creating a file with the open system call:**
File permissions determine the access rights for a file. When creating a file using the `open` system call, you can specify the file permissions using the third argument. The permissions are specified using octal values, such as `0644` or `0777`. The permissions determine who can read, write, or execute the file.

7. **What is a system call:**
A system call is a mechanism provided by the operating system that allows a program to request services from the kernel. It provides an interface between the user-level application and the kernel. Examples of system calls include opening and closing files, creating processes, allocating memory, and more.

8. **Difference between a function and a system call:**
A function is a block of code that performs a specific task and can be called from different parts of a program. Functions are generally implemented in user-space and execute within the process's address space. On the other hand, a system call is a request made by a program to the operating system for a specific service or resource. System calls involve a transition from user-space to kernel-space, where the operating system performs the requested operation on behalf of the program. System calls are typically used for low-level operations that require privileged access or interaction with the hardware.

