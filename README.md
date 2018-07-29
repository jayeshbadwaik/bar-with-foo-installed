The above library contains only two files:
1. `include/example/example.hpp`
2. `lib/example/example.cpp`

The objective of the assignment is to write a CMake configuration for the above
minimal library which satisfies the following properties:
1. A sequence of

```shell
cmake -DCMAKE_INSTALL_PREFIX=$LOC ../src
make
make install
```

should install correct files in $LOC so that whenever `$LOC/share/cmake` is in
`CMAKE_MODULE_PATH` one can do
```cmake
find_package(example)
target_link_libraries(target Example::Example)
```

and be able to write the following code

```c++
auto object = example::Example();
object.write()
```

2. One should be able to do in the top level of one's project

```shell
git submodule add git@github.com/sutarwadi/example.git example
```

write
```cmake
add_subdirectory(example)
target_link_libraries(target Example::Example)
```

and be able to write the same code as in 1.
```c++
auto object = example::Example();
object.write()
```

