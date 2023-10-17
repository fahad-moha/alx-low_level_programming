A dynamic library, also known as a shared library, is a type of library that contains reusable code and resources that can be used by multiple programs simultaneously. Unlike static libraries, which are linked directly into the executable at compile time, dynamic libraries are loaded and linked at runtime when the program is executed.

Here's an overview of how dynamic libraries work:

1. Creating a Dynamic Library: To create a dynamic library, you typically compile the library's source code into an object file (.o) and then use a linker to create the shared library file (.so on Linux/Unix, .dll on Windows). The linker resolves references to external symbols and generates a library file that can be loaded at runtime.

2. Using a Dynamic Library: To use a dynamic library in your program, you need to link against it during the compilation process. You specify the shared library as a dependency, and the linker records the necessary information to load the library at runtime. When the program is executed, the operating system's dynamic linker/loader resolves the library's symbols and loads the shared library into memory.

The environment variable `$LD_LIBRARY_PATH` is used by the dynamic linker/loader to specify additional directories where shared libraries can be found at runtime. When a program is executed, the dynamic linker/loader searches for shared libraries in the directories listed in `$LD_LIBRARY_PATH`, along with other default locations. You can set the `$LD_LIBRARY_PATH` variable to include directories containing your custom shared libraries.

Differences between static and shared libraries:

1. Static Libraries: Static libraries are linked directly into the executable at compile time. The library code becomes part of the executable, making it self-contained. Static libraries have the advantage of simplicity and can be used on systems without the need for additional library dependencies. However, each executable that uses a static library contains its own copy of the library code, potentially increasing the size of the executable.

2. Shared Libraries: Shared libraries are separate files that are loaded at runtime. Multiple programs can use the same shared library, reducing duplication and saving memory. Shared libraries can be updated or replaced independently without recompiling the programs that depend on them. However, using shared libraries requires the libraries to be present on the system or specified with the appropriate paths.

Basic usage of nm, ldd, and ldconfig:

1. `nm`: The `nm` command is used to list symbols from object files or shared libraries. It can show the names and types of symbols defined or referenced within a library. For example, `nm libexample.so` will display the symbols defined in the `libexample.so` shared library.

2. `ldd`: The `ldd` command is used to display the shared library dependencies of an executable or shared library. It shows which shared libraries an executable or shared library requires to run correctly. For example, `ldd myprogram` will list the shared libraries that `myprogram` depends on.

3. `ldconfig`: The `ldconfig` command is used to configure the runtime linker/loader cache. It updates the cache to include newly installed shared libraries or changes to library paths. This command is typically run with root privileges. For example, `sudo ldconfig` updates the library cache with any changes made to shared libraries on the system.

These commands are commonly used for troubleshooting, diagnosing library dependencies, and examining symbols within libraries.
