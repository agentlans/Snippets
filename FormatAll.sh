#!/usr/bin/bash
# To reformat the C++ source files in this directory
find -iname "*.cpp" -exec clang-format -i {} \;
