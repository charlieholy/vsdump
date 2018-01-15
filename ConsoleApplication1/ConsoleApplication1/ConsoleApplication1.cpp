// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>
int aaa = 1;
int main()
{	
	MessageBox(0, NULL, NULL, MB_OK);
	aaa = 0x889977;
	MessageBox(0, NULL, NULL, MB_OK);
	printf("%d", aaa);
    return 0;
}

