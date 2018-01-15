// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>
int aaa = 1;
//013B1000 | 55 | push ebp | consoleapplication1.cpp:8
//013B1001 | 8B EC | mov ebp, esp |
//013B1003 | 8B 45 08 | mov eax, dword ptr ss : [ebp + 8] | consoleapplication1.cpp : 9
//013B1006 | 03 45 0C | add eax, dword ptr ss : [ebp + C] | [ebp + C] : &"G:\\vc\\vsdump\\ConsoleApplication1\\Release\\ConsoleApplication1.exe"
//013B1009 | 5D | pop ebp | consoleapplication1.cpp : 10
int add(int a, int b) 
{
	return a + b;
}
int a[0x10] = { 0,1,2,3,4,5,6,7,8,9,0xa,0xb,0xc,0xd,0xe };
int main()
{	
	MessageBox(0, NULL, NULL, MB_OK);
	//aaa = 0x889977;		//mov dword ptr [0x013D3018], 0x889977  .data
	//__asm mov dword ptr ds:[0x00213018], 0x889977
	__asm mov aaa, 0x889977;//安全的写法 
	aaa = add(0x11, 0x88);
	int *da = a; 
	__asm 
	{
		mov eax,0x1111
		mov ebx,eax
			mov ebx,aaa
			mov ebx,da
			mov eax,[da+4]
			mov eax,[ebx+4]
	}
	MessageBox(0, NULL, NULL, MB_OK);
     return 0;
}

