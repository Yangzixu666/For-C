#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    int i,j;
    char num[12];
    printf("请输入你的手机号:");
    gets(num);
    for(i=0;i<11;i++)
    {
        if(num[i]>'9'||num[i]<'0')
        {
            printf("手机号码不能含有非数字字符，请重新输入！\n");
            system("pause");
        }
        else if(strlen(num)<11)
        {
            printf("手机号码长度不能小于11位，请重新输入！\n");
            system("pause");
        }   
    }
    if(num[0]='1')
    {
        if((num[1]=='3'&&(num[2]=='4'||num[2]=='5'||num[2]=='6'||num[2]=='7'||num[2]=='8'||num[2]=='9'))||(num[1]=='5'&&(num[2]=='8'||num[2]=='2'||num[2]=='7'||num[2]=='8'))||(num[1]=='5'&&(num[2]=='1'||num[2]=='2'||num[2]=='8'||num[2]=='9'))||(num[1]=='4'))
            printf("你用的是移动手机\n");
        else if((num[1]=='3'&&(num[2]=='0'||num[2]=='1'||num[2]=='2'))||(num[1]=='5'&&(num[2]=='5'||num[2]=='6'))||(num[1]=='5'&&(num[2]=='8'||num[2]=='5'||num[2]=='6')))
            printf("你用的是联通手机\n");
        else if((num[1]=='3'&&(num[2]=='3'))||(num[1]=='5'&&(num[2]=='8'||num[2]=='0'||num[2]=='9'))||(num[1]=='5'&&num[2]=='3'))
            printf("你用的是电信手机\n");
        else
            printf("没有这样的号码，请重新输入！\n");
    }
    return 0;
}