#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int wro=0,rig=0;
int main()
{
    int sum,language,i,swit;
	printf("��ӭʹ������������ϰ����\n");
	printf("Welcome to the program of operation practice!\n");
	printf("******************************************************************************\n\n");
	printf("��ѡ������ʹ�õ����ԣ�����������1��Ӣ��������0��\n");
	printf("please choose the language your use:input '1' for the Chinese,input '0' for the English.\n");
	scanf("%d",&language);
	if(language==1)
		printf("������������Ҫ����Ŀ����");
	else
		printf("Please input the number you need:");
	scanf("%d",&sum);
	for(i=1;i<=sum;i++)
	{
		swit=rand()%1+10;
		switch(swit)
		{
		   case'1':   ;break;
		}
	}
	if(language==1)
	{
		printf("������ȷ����Ϊ��%4d\n",rig);
		printf("���Ĵ�������Ϊ��%4d\n",wro);
		printf("��ӭ�ٴ�ʹ�ã�\n");
	}
	else
	{
		printf("The number of questions you did right is:%4d\n",rig);
		printf("The number of questions you did wrong is:%4d\n",wro);
		printf("Welcome to use again!\n");
	}
	return 0;
}