#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int transfer(int a);
    int a;
    printf("������һ��ʮ��������:");
    scanf("%d",&a);
    transfer(a);

}
int transfer(int a)
{
    int i,j;
    for(i=31,j=0;i>=0;i--)
    {
        printf("%d",a>>i&1);
        j++;
        if(j%4==0)
            printf(" ");
    }
    system("pause");

}