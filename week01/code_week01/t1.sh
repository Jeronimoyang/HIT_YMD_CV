#!bin/bash   
touch result.txt
top -b -n 1 >>result.txt
:<<!
第一行表示指明用/bin/bash作为shell解析器
第二行表示建立一个新文件
第三行中表示查看后台进程一次并将数据写入文件中。top是实时系统检测工具，-b是直接将结果输出到文件，-n 1是查看后台进程一次
！
