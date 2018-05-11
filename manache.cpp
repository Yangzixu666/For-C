#include <vector>
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;


string Manacher(string s)
{
    /*预处理*/
    string t="$#";

    for(int i=0;i<s.size();i++)
    {
        t+=s[i];
        t+="#";
    }
   

    vector<int> p(t.size(),0);

    /*mx是回文串能延伸到的最右端的位置，
        id为最大回文子串中心的位置，
        p[i]表示以i为中心最大回文子串的半径
    */

    int mx=0,id=0,resLen=0,resCenter=0;

    for(int i=1;i<t.size();i++)
    {
        p[i]=mx>i?min(p[2*id-i],mx-i):1;
        while(t[i+p[i]]==t[i-p[i]])
            ++p[i];
        if(mx<i+p[i])  //替换此时最大的mx和id
        {
            mx=i+p[i];
            id=i;
        }
        if(resLen<p[i])  //
        {
            resLen=p[i];
            resCenter=i;
        }

    }
    return s.substr((resCenter-resLen)/2,resLen-1);

}


int main(void) {
    string s;
    int num=0;
  while(cin>>s&&s!="END")
  {


      string s1=Manacher(s);

      cout<<"Case "<<++num<<": "<<s1.size()<<endl;

  }


  return 0;
}

