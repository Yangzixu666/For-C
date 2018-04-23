#include <bits/stdc++.h>

using namespace std;

double pi=3.1415926512;
double pie[10010];
double sum,maxn;
int main(void)
{
    int t;
    cin>>t;
    while(t)
    {
      int n,f;
      cin>>n>>f;
      f++;
      maxn=sum=0;
      for(int i=0;i<n;i++)
      {
         int c;
         cin>>c;
         pie[i]=pi*c*c;
         maxn=max(pie[i],maxn);
         sum+=pie[i];
      }

      double l=maxn/f;
      double r=sum/f;


      while(0.00001<r-l)
      {

        double m=(l+r)/2;
        int cnt=0;
        for(int i=0;i<n;i++)
          cnt+=(int)floor(pie[i]/m);
        if(cnt<f)
            r=m;
        else
            l=m;
      }
      cout<<fixed<<setprecision(4)<<l<<endl;
      t--;
    }
    return 0;
}
