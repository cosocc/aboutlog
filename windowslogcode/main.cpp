#include <cstdio>
#include <string.h>
#include <stdlib.h>
#include "global.h"

int main() 
{
    //����ʵ�ֲ��Ǻܺ�ֻ������1
    LogFile gLog("My.Log");
    gLog.Log("test", 4);//��¼��־
    int i = 10;
    while (i)
    {
        gLog.Log("��ð�!\r\n");
        i--;
    }
    gLog.Log("ϵͳ����");
    //LogFileEx gLog(".", LogFileEx::YEAR);//һ������һ����־�ļ�
    //LogFileEx gLog(".\\Log", LogFileEx::MONTH);//һ������һ����־�ļ�
    LogFileEx gLog1(".\\Log", LogFileEx::DAY);//һ������һ����־�ļ�

}