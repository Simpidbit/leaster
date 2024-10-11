# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\leaster_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\leaster_autogen.dir\\ParseCache.txt"
  "leaster_autogen"
  )
endif()
