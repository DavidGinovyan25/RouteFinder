add_executable(main
    main.cpp
)

find_package(cpr REQUIRED)

target_link_libraries(main PRIVATE
    cpr::cpr
    RouteClasses
    HttpErrorHandler
    YandexScheduleManager
    CacheManager
)

target_include_directories(main PRIVATE
    ${CMAKE_SOURCE_DIR}/lib/RouteClasses    
    ${CMAKE_SOURCE_DIR}/lib/HttpErrorHandler
    ${CMAKE_SOURCE_DIR}/lib/YandexScheduleManager
    ${CMAKE_SOURCE_DIR}/lib/CacheManager
)