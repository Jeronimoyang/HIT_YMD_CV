#!/bin/bash
./helloworld 2>&1 > out &
echo "杀死前："
ps
echo "要杀死的进程号为："
ps | grep hello |awk '{print $1}'
ps | grep hello |awk '{print $1}' | xargs -I \{\} kill -9 \{\}
echo "杀死后："
ps
:<<!
第一行指明用/bin/bash作为shell解析器
第二行表示将标准错误输出重新定向到标准输出，然后写入wenben中，&表示在后台运行
第三行打印杀死前
第四行ps查看后台进程
第五行打印要杀死的进程号
第六行查看进程名是helloworld的进程号，awk按行读取数据，$2为该变量包含第二个字段的文本内容
第七行杀死对应进程号的进程，-I 指定每一项命令行参数的替代字符串，即进程号，kill杀死
第八行打印杀死后
第九行查看杀死后的后台进程
!
