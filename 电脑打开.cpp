#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");//关机程序
	//
again:
	printf("请注意，你的电脑在一分钟内关机，如果输入我是猪，就取消关机\n");
	scanf("%s",input);
	if (strcmp(input,"我是猪")== 0) 
	{
		system("shutdown -a ") ;
	} 
	else
	{
		goto again;
	}
	return 0;
 } 
