cmake_minimum_required(VERSION 2.8)
enable_language(C)
add_executable( avg-sfile avg-sfile.c)
add_executable( avg-mfile avg-mfile.c avg.c)

add_executable( avg-mfile-basic-test avg-mfile-basic-test.c avg.c)
add_executable( avg-mfile-directed-test avg-mfile-directed-test.c avg.c)
add_test( avg-mfile-basic-test avg-mfile-basic-test)
add_test( avg-mfile-directed-test avg-mfile-directed-test)
