#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");//�ػ�����
	//
again:
	printf("��ע�⣬��ĵ�����һ�����ڹػ������������������ȡ���ػ�\n");
	scanf("%s",input);
	if (strcmp(input,"������")== 0) 
	{
		system("shutdown -a ") ;
	} 
	else
	{
		goto again;
	}
	return 0;
 } 
