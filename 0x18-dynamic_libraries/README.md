Learning Objectives
	At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
	What is a dynamic library, how does it work, how to create one, and how to use it
	What is the environment variable $LD_LIBRARY_PATH and how to use it
	What are the differences between static and shared libraries
	Basic usage nm, ldd, ldconfig
notes
MAN PAGES
man ld.so
man dlopen
man dlsym
man ldd
man ldconfig
man nm
1. creating dynamic library in linux
	gcc -fPIC -shared -o libexample.so example.c

-fPIC: Position Independent Code, necessary for shared libraries.
-shared: Specifies the creation of a shared object.
-o libexample.so: Sets the output file name.
example.c - file containing the functions to store to library
2. set library paths
	export LD_LIBRARY_PATH=/path/to/directory:$LD_LIBRARY_PATH

	LD_LIBRARY_PATH=: Initializes or resets the LD_LIBRARY_PATH environment variable.

	/path/to/directory: Specifies the directory where your dynamic library (libexample.so, for example) is located. This is the directory that you want the system to search for dynamic libraries.

	:$LD_LIBRARY_PATH: Appends the current value of LD_LIBRARY_PATH to the end of the new path. The colon (:) is used as a separator between multiple paths in the LD_LIBRARY_PATH variable.

	If LD_LIBRARY_PATH was already set before, this ensures that the new directory is added to the existing list of directories rather than overwriting it.

3. compiling with the dynamic library
	gcc -o main main.c -ldl

Declaring FUNCTION POINTERS -->
	return_type (*pointer_name)(parameter_types);
	void (*myFunctionPointer)(int, char);
asiggning function to pointer --->
	myFunctionPointer = myFunction;
calling function through pointer:
	(*myFunctionPointer)(42, 'A'); or myFunctionPointer(42, 'A');

	
