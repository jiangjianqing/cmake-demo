# first we add the executable that generates the table
# add the binary tree directory to the search path for include files
#注意：加入${PROJECT_BINARY_DIR}是为了mysqrt.cxx能够引入TutorialConfig.h
include_directories( ${CMAKE_CURRENT_BINARY_DIR} ${PROJECT_BINARY_DIR})

add_executable(MakeTable MakeTable.cxx )

# add the command to generate the source code
add_custom_command (
  OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/Table.h
  COMMAND MakeTable ${CMAKE_CURRENT_BINARY_DIR}/Table.h
  DEPENDS MakeTable
  )

# add the main library
add_library(MathFunctions mysqrt.cxx ${CMAKE_CURRENT_BINARY_DIR}/Table.h  )




install (TARGETS MathFunctions DESTINATION bin)
install (FILES MathFunctions.h DESTINATION include)