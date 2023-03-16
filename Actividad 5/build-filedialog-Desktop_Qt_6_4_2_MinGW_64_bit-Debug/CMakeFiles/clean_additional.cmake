# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\filedialog_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\filedialog_autogen.dir\\ParseCache.txt"
  "filedialog_autogen"
  )
endif()
