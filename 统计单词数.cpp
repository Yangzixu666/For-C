#include <iostream>
using namespace std;

string upper(string str){
for(int i=0;i<str.size();i++)
 {
     if(str[i]>='a'&&str[i]<='z')
     {
         str[i]+='A'-'a';
     }
 }
 return str;

}

int main(void)
{
    int sum=0,j=0,pos;
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    s1=upper(s1);
    s2=upper(s2);
    for(int i=0;i<=s2.size();i++)
    {
        int num=0;

        if(s2[i]>='A'&&s2[i]<='Z')
        {
            j++;
        }
        else if(s2[i]==' '||s2[i]=='\0')
        {
          if(j!=s1.size())
          {
              j=0;
              continue;
          }

          else
          {
              for(int k=0;k<s1.size();k++)
              {
                  if(s1[k]==s2[i-j+k])
                    {
                        num++;
                    }
                    else
                    {
                        continue;
                    }

              }
              if(num==s1.size())
                {
                    sum++;
                    if(sum==1)
                    {
                        pos=i - num;
                    }
                    j=0;


                }
              else
              {
                 j=0;
                 continue;
              }
          }
        }

    }
    if(sum)
        cout<<sum<<" "<<pos<<endl;
    else
        cout<<sum-1<<endl;

    return 0;

}




