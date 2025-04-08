# CMake generated Testfile for 
# Source directory: C:/vs code/Stack
# Build directory: C:/vs code/Stack/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(StackTest "C:/vs code/Stack/build/Debug/StackTest.exe")
  set_tests_properties(StackTest PROPERTIES  _BACKTRACE_TRIPLES "C:/vs code/Stack/CMakeLists.txt;32;add_test;C:/vs code/Stack/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(StackTest "C:/vs code/Stack/build/Release/StackTest.exe")
  set_tests_properties(StackTest PROPERTIES  _BACKTRACE_TRIPLES "C:/vs code/Stack/CMakeLists.txt;32;add_test;C:/vs code/Stack/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(StackTest "C:/vs code/Stack/build/MinSizeRel/StackTest.exe")
  set_tests_properties(StackTest PROPERTIES  _BACKTRACE_TRIPLES "C:/vs code/Stack/CMakeLists.txt;32;add_test;C:/vs code/Stack/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(StackTest "C:/vs code/Stack/build/RelWithDebInfo/StackTest.exe")
  set_tests_properties(StackTest PROPERTIES  _BACKTRACE_TRIPLES "C:/vs code/Stack/CMakeLists.txt;32;add_test;C:/vs code/Stack/CMakeLists.txt;0;")
else()
  add_test(StackTest NOT_AVAILABLE)
endif()
subdirs("externals/googletest")
