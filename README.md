# ALPD CMAKE starter
This is a C starter project for the ALDP course which uses OpenMP.
To use the C++ version, `_CMakeLists.txt` is the correct configuration.

On Ubuntu, install `libomp-dev` for OpenMP libs.

To build the project using the default GCC compiler and Make build, do:
```
mkdir build
cd build
cmake ..
make
./hello
```

Tested with Clang & Ninja.