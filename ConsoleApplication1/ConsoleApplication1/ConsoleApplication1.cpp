// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <windows.h>
int aaa = 1;
int add(int a, int b) 
{
	return a + b;
}
int main()
{	
	MessageBox(0, NULL, NULL, MB_OK);
	//aaa = 0x889977;		//mov dword ptr [0x013D3018], 0x889977  .data
	//__asm mov dword ptr ds:[0x00213018], 0x889977
	__asm mov aaa, 0x889977;//��ȫ��д�� 
	aaa = add(0x11, 0x88);
	MessageBox(0, NULL, NULL, MB_OK);
	printf("%d", aaa);
     return 0;
}

