# Create a library called "txt_search_lib" (in Linux, this library is created
# with the name of either txt_search_lib.a or txt_search_lib.so).
add_library (pid_lib
  # list of cpp source files:
  pid.cpp
  )

# Indicate what directories should be added to the include file search
# path when using this library.
target_include_directories(pid_lib PUBLIC
  # list of directories:
  .
  )
