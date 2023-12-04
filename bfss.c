//BFS
#include<stdio.h>

void main()
{
    int source,n,adj[10][10],visited[10]={0},i,j;
    int queue[10],r=-1,f=-1;
    printf("enter the number of vertices:");
    scanf("%d",&n);
    printf("enter the adjacency matrix:");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&adj[i][j]);
        }
    }
    printf("enter the starting vertex:");
    scanf("%d",&source);
    queue[++r]=source;
    ++f;
    visited[source]=1;
    while(r>=f)
    {
        source=queue[f++];
        printf("%d\t",source);
        for(i=1;i<=n;i++)
        {
            if(adj[source][i]==1 && visited[i]==0)
            {
                queue[++r]=i;
                visited[i]=1;
            }
        }
    }

}
