#include&lt;stdio.h&gt;
#include&lt;stdlib.h&gt;
int i,j,k,a,b,u,v,n,ne=1;
int min,mincost=0,cost[9][9],parent[9];
int find(int);
int uni(int,int);
void main()
{
printf(&quot;\nImplementation of Kruskal&#39;s algorithm\n&quot;);
printf(&quot;\nEnter the no. of vertices:&quot;);
scanf(&quot;%d&quot;,&amp;n);
printf(&quot;\nEnter the cost adjacency matrix:\n&quot;);
for(i=1;i&lt;=n;i++)
{
for(j=1;j&lt;=n;j++)
{
scanf(&quot;%d&quot;,&amp;cost[i][j]);
if(cost[i][j]==0)
cost[i][j]=999;

}
}
printf(&quot;The edges of Minimum Cost Spanning Tree are\n&quot;);
while(ne &lt; n)
{
for(i=1,min=999;i&lt;=n;i++)
{
for(j=1;j &lt;= n;j++)

{
if(cost[i][j] &lt; min)
{
min=cost[i][j];
a=u=i;
b=v=j;
}
}
}
u=find(u);
v=find(v);
if(uni(u,v))
{
printf(&quot;%d edge (%d,%d) =%d\n&quot;,ne++,a,b,min);
mincost +=min;
}
cost[a][b]=cost[b][a]=999;
}
printf(&quot;\nMinimum cost = %d\n&quot;,mincost);
}
int find(int i)
{
while(parent[i])
i=parent[i];
return i;
}
int uni(int i,int j)
{

if(i!=j)
{
parent[j]=i;
return 1;
}
return 0;
}
