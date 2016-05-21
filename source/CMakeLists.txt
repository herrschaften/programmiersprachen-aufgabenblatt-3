

# Build tests
add_executable(tests
  vec2.cpp
  circle.cpp
  tests.cpp)

target_link_libraries(tests 
  m)

add_executable(3.1 3.1.cpp)

add_executable(aufgabe2bis4 aufgabe2bis4.cpp)

add_executable(aufgabe5 aufgabe5.cpp)

add_executable(aufgabe37 aufgabe37.cpp 
circle.cpp)

add_executable(aufgabe8 aufgabe8.cpp)

add_executable(aufgabe9 aufgabe9.cpp 
circle.cpp)

add_executable(aufgabe10 aufgabe10.cpp)

add_executable(aufgabe11 aufgabe11.cpp)