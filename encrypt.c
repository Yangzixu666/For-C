#include <stdio.h>
int main(void)
{
    char arr1[200];
    char arr2[200];
    int key,i,m;
    key=6;
    printf("Input the text:\n");
    gets(arr1);
    for(i=0;arr1[i]!='\0';i++)
    {
        arr2[i]=(arr1[i]-'a'+key)%26+'a';
    }
    arr2[i]='\0';
    printf("The Ciphertext is:\n%s\n",arr2);

    return 0;
}