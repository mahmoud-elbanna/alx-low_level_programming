C - Dynamic libraries
=============================
TASK 0 : Compile each of the C files into object files using the following command:
"gcc -c -fPIC * .C"
Create the dynamic library libdynamic.so by linking the object files:
"gcc -shared -o libdynamic.so * .so"
=============================
TASK 1 : To create a dynamic library called liball.so from all the .c files in the current directory,
used the bash script and made chmod +x 
=============================
TASK 2 : Create a dynamic library that contains C functions that can be called from Python
by Compile the C code into a shared object library using the following command
"gcc -shared -o 100-operations.so 100-operations.c"
In Python script (100-tests.py), load the dynamic library using the ctypes module and call the C functions.
=============================
