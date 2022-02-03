#include <cstdio>
#include <string.h>
#include <stdlib.h>
#include "global.h"

int main() 
{
    //代码实现不是很好只做范文1
    LogFile gLog("My.Log");
    gLog.Log("test", 4);//记录日志
    int i = 10;
    while (i)
    {
        gLog.Log("你好啊!\r\n");
        i--;
    }
    gLog.Log("系统启动");
    //LogFileEx gLog(".", LogFileEx::YEAR);//一年生成一个日志文件
    //LogFileEx gLog(".\\Log", LogFileEx::MONTH);//一月生成一个日志文件
    LogFileEx gLog1(".\\Log", LogFileEx::DAY);//一天生成一个日志文件

}