add_library(CacheManager
    CacheManager.hpp
    CacheManager.cpp
)

target_include_directories(CacheManager PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
