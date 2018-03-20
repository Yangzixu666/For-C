#include<bits/stdc++.h>
#define pi 3.1415926 
using namespace std;
const int INF = 0x3f3f3f3f;  
int d[100];
bool used[100];
int V=7;
int cost[7][7]=
{
	0,2,5,INF,INF,INF,INF,
	2,0,4,6,10,INF,INF,
	5,4,0,2,INF,INF,INF,
	INF,6,2,0,INF,1,INF,
	INF,10,INF,INF,0,3,5,
	INF,INF,INF,INF,5,9,0
};


void dijkstra(int s)
{
	fill(d,d+V,INF);
	fill(used,used+V,false);
	d[s]=0;
	while(true)
	{
		int v=-1;
		for(int u=0;u<V;u++)
		{
			if(!used[u]&&(v==-1||d[u]<d[v]))
				v=u;
		}
		
		if(v==-1)
			break;
		else
			used[v]=true;
		for(int u=0;u<V;u++)
		{
			d[u]=min(d[u],d[v]+cost[v][u]);  //起点到u点最小值，等于此时v点（此时最短路径的点）+到u的距离（存在前提）的最小值。
		}
	}
	
	
	
}

int main(void){  

	dijkstra(0);
  cout<<d[5]<<endl;
  return 0;
}
