cmake_minimum_required(VERSION 3.22)
project(TP04 C)

set(CMAKE_C_STANDARD 99)

add_executable(TP04 main.c UseHugeNumber/Operator/HugeFloatOperator.c UseHugeNumber/Operator/HugeFloatOperator.h UseHugeNumber/Operator/HugeIntOperator.c UseHugeNumber/Operator/HugeIntOperator.h UseHugeNumber/Operator/HugeUnsignedIntOperator.c UseHugeNumber/Operator/HugeUnsignedIntOperator.h scanhugenumbers/ShowHugeNumber.c)
