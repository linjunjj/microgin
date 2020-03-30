add_definitions(-DRESTPP_DLL_EXPORTS)


SET(CMAKE_INSTALL_PREFIX  ${PROJECT_SOURCE_DIR}/install)

#
#target_include_directories(micro PUBLIC
#        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
#        $<INSTALL_INTERFACE:include>)
#
#install(TARGETS micro
#        LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)
#
#message(STATUS "current source dir: ${CMAKE_CURRENT_SOURCE_DIR}")
#install(TARGETS micro
#        EXPORT micro-targets
#        ARCHIVE DESTINATION lib
#        LIBRARY DESTINATION lib
#        RUNTIME DESTINATION bin)
#install(EXPORT restpp-targets
#        NAMESPACE micro::
#        FILE micro-config.cmake
#        DESTINATION lib/cmake/restpp)
