cmake_minimum_required(VERSION 3.20.0)

set(ZEPHYR_INCLUDE_DIR "C:/ncs/v2.4.2/zephyr/include/zephyr")
set(LIB_DIR lib)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
include_directories(${ZEPHYR_INCLUDE_DIR} ${LIB_DIR})

project(air_quality)
set(SRC_MAIN src/main.c)

target_sources(app PRIVATE ${SRC_MAIN})
