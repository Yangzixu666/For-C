#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    int i,j;
    char num[12];
    printf("����������ֻ���:");
    gets(num);
    for(i=0;i<11;i++)
    {
        if(num[i]>'9'||num[i]<'0')
        {
            printf("�ֻ����벻�ܺ��з������ַ������������룡\n");
            system("pause");
        }
        else if(strlen(num)<11)
        {
            printf("�ֻ����볤�Ȳ���С��11λ�����������룡\n");
            system("pause");
        }   
    }
    if(num[0]='1')
    {
        if((num[1]=='3'&&(num[2]=='4'||num[2]=='5'||num[2]=='6'||num[2]=='7'||num[2]=='8'||num[2]=='9'))||(num[1]=='5'&&(num[2]=='8'||num[2]=='2'||num[2]=='7'||num[2]=='8'))||(num[1]=='5'&&(num[2]=='1'||num[2]=='2'||num[2]=='8'||num[2]=='9'))||(num[1]=='4'))
            printf("���õ����ƶ��ֻ�\n");
        else if((num[1]=='3'&&(num[2]=='0'||num[2]=='1'||num[2]=='2'))||(num[1]=='5'&&(num[2]=='5'||num[2]=='6'))||(num[1]=='5'&&(num[2]=='8'||num[2]=='5'||num[2]=='6')))
            printf("���õ�����ͨ�ֻ�\n");
        else if((num[1]=='3'&&(num[2]=='3'))||(num[1]=='5'&&(num[2]=='8'||num[2]=='0'||num[2]=='9'))||(num[1]=='5'&&num[2]=='3'))
            printf("���õ��ǵ����ֻ�\n");
        else
            printf("û�������ĺ��룬���������룡\n");
    }
    return 0;
}