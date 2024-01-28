#include&lt;stdio.h&gt;
int a,b,u,v,n,i,j,ne=1;
int visited[10]={0},min,mincost=0,cost[10][10];
void main()
{
printf(&quot;\nEnter the number of nodes:&quot;);
scanf(&quot;%d&quot;,&amp;n);
printf(&quot;\nEnter the adjacency matrix:\n&quot;);
for(i=1;i&lt;=n;i++)
for(j=1;j&lt;=n;j++)
{
scanf(&quot;%d&quot;,&amp;cost[i][j]);
if(cost[i][j]==0)
cost[i][j]=999;
}
visited[1]=1;
printf(&quot;\n&quot;);
while(ne &lt; n)

{
for(i=1,min=999;i&lt;=n;i++)
for(j=1;j&lt;=n;j++)
if(cost[i][j]&lt; min)
if(visited[i]!=0)
{
min=cost[i][j];
a=u=i;

b=v=j;
}
if(visited[u]==0 || visited[v]==0)
{
printf(&quot;\n Edge %d:(%d %d) cost:%d&quot;,ne++,a,b,min);
mincost+=min;
visited[b]=1;
}
cost[a][b]=cost[b][a]=999;
}
printf(&quot;\n Minimun cost=%d&quot;,mincost);
}
