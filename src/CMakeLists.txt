# Source files
file(GLOB SOURCES_GUMBYS "Gumbys/*.cpp" "Gumbys/*.h")

# Include directories
include_directories(SYSTEM
    ${PROJECT_SOURCE_DIR}/src/Gumbys
    ${PROJECT_SOURCE_DIR}/s2client-api/include
    ${PROJECT_SOURCE_DIR}/s2client-api/contrib/protobuf/src
    ${PROJECT_BINARY_DIR}/s2client-api/generated
)

if (WIN32)
    include_directories(SYSTEM
        ${PROJECT_SOURCE_DIR}/s2client-api/src/sc2utils/
    )
endif ()

# Link directories
link_directories(${PROJECT_BINARY_DIR} ${PROJECT_BINARY_DIR}/s2client-api/bin)


# Create the executable.
add_executable(Gumbys ${SOURCES_GUMBYS})

target_link_libraries(Gumbys
    sc2api sc2lib sc2utils sc2protocol civetweb libprotobuf
)


# Set working directory as the project root
set_target_properties(Gumbys PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}")