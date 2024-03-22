## 调试工具
### 1、GDB
参阅LinuxGDB第一章、第三章，第二章可以跳过。
### 2、backward-cpp查找段错误
Backward is a beautiful stack trace pretty printer for C++
Backward是一个堆栈跟踪打印器，是一个开源的C++项目。与使用GDB不同，backward是一个
C++库，使用时只需添加头文件并增加几行代码即可。项目使用步骤如下：
#### 2.1、backward-cpp安装
```shell
sudo apt-get install binutils-dev
sudo apt-get install libdw-dev
```
然后进入backward-cpp使用cmake安装
```shell
mkdir build && cd build
cmake .. && make
sudo make install
```
针对CMakeLists的修改有两种方式：
方法一：将backward-cpp复制到项目目录下，与主程序一起编译，生成静态库
例程见backwaed_example
```Cmake
add_subdirectory(/path/to/backward-cpp)
# This will add backward.cpp to your target
add_executable(mytarget mysource.cpp ${BACKWARD_ENABLE})
# This will add libraries, definitions and include directories needed by
backward
# by setting each property on the target.
add_backward(mytarget)
```
方法二：find_package()找到backward位置，动态链接到项目中
此方法更推荐，但是在我的设备上没有跑通，仅做参考
```Cmake
list(APPEND CMAKE_MODULE_PATH /path/to/backward-cpp)
find_package(Backward)
# This will add libraries, definitions and include directories needed by
backward
# through an IMPORTED target.
target_link_libraries(mytarget PUBLIC Backward::Backward)
```
不增加以上内容直接编译，输出只有segment fault，增加以后则可以输出问题代码行号。