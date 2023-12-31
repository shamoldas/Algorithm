#include<stdio.h>
int a[23][22],q[22],visited[22],n,i,k,f=0,r=-1;
void bfs(int v)
{
	for (i=1;i<=n;i++)
	if(a[v][i]&& !visited[i])
	q[++r]=i;
	if(f<=r)
	{
	visited[q[f]]=1;
	bfs(q[f++]);
	}
}
int main()
{
	int v;
	printf("enter the number of vertices.\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		q[i]=0;
		visited[i]=0;
	}
	printf("\n enter the graph data of matrix form.\n");
	for(i=1;i<=n;i++)
	for(k=1;k<=n;k++)

	scanf("%d",&a[i][k]);
	printf("\n enter the starting vertex.\n");
	scanf("%d",&v);
	bfs(v);
	printf("\n this node which are reachable are : \n ");
	for(i=1;i<=n;i++)
	if(visited[i])
	printf("%d\t",i);
	else
	printf("BFS is not possible.\n");
	return 0;

}

