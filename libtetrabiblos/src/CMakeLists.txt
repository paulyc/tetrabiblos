
add_library(
    tetrabiblos
    SHARED
    libmain.cpp
    calendar.hpp
    calendar.cpp
)

target_include_directories(tetrabiblos PUBLIC ../include)

#target_link_libraries(newmoon -lquadmath)
