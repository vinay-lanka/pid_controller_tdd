# Executable for the pid-app from the main.cpp source file.
add_executable(pid-app main.cpp)

# Any dependent libraires needed to build this target.
target_link_libraries(pid-app PUBLIC
  # list of libraries
  pidLib
  )

target_link_options(pid-app PUBLIC
  --static
  )
  
