# ALPD CMake starter
This is a C starter project for the ALDP course which uses OpenMP.
To use the C++ version, `_CMakeLists.txt` is the correct configuration.

Install Cmake. On most Linux distributions, the package should be named `cmake`.
On Ubuntu, install `libomp-dev` for OpenMP libs.

To build the project using the default GCC compiler and Make build, do:
```
mkdir build
cd build
cmake ..
make
./hello
```

## Other details
To check on which cores the threads are running, determine the process id and then:
```
ps -mo pid,tid,%cpu,psr -p <PID>
```

Example output on my 14-core CPU:
```
    PID     TID %CPU PSR
 729401       -  0.0   -
      -  729401  0.0   4
      -  729402  0.0   3
      -  729403  0.0   5
      -  729404  0.0  11
      -  729405  0.0   4
      -  729406  0.0  11
      -  729407  0.0   0
      -  729408  0.0  11
      -  729409  0.0  10
      -  729410  0.0  10
      -  729411  0.0   4
      -  729412  0.0  10
      -  729413  0.0   0
      -  729414  0.0   1
```

Tested with Clang & Ninja.
