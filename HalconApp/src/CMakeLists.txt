set (HALCONROOT $ENV{HALCONROOT})
set (HALCONARCH $ENV{HALCONARCH})

#注意:include_directories和link_directories会对目录进行判断，如果不存在则会自行设定为相对目录
#所以上面用ENV读取Halcon的环境变量

include_directories("${HALCONROOT}/include")
include_directories("${HALCONROOT}/include/halconcpp")


link_directories("${HALCONROOT}/lib/${HALCONARCH}")

#重要：add_executable必须在link_directories之后设置，否则link_directories的设置无效
#so 约定：add_executable 一定在target_link_libraries的上一行
add_executable(hello main.cpp)

#在link -> input -> Additional Dependencies 加入halconcpp.lib
target_link_libraries(hello "halconcpp.lib")


