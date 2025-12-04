add_library(HttpErrorHandler
    HttpErrorHandler.hpp
    HttpErrorHandler.cpp
)

target_include_directories(HttpErrorHandler PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

