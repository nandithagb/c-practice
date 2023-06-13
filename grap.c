#include<stdio.h>
int a[20][20],q[20],visited[20],reach[10];
int n,i,j,count,f=0,r=-1;

void bfs(int v) // Reachability using Breadth First Search
{
	for(i=1;i<=n;i++)
		if(a[v][i] && !reach[i]) // check weather node is reached
	q[++r]=i; // if not add it Queue
	if(f<=r) // check for non empty Queue
	{
		reach[q[f]]=1; // set reached status for front node of Queue
		bfs(q[f++]); // recursive call BSF
	}
}// end of BSF

void dfs(int v) //Connectivity using Depth First Search
{
	int i;
	visited[v]=1; // set source is visited
	for(i=1;i<=n;i++)
	{
		if(a[v][i] && !visited[i]) // check weather node is visited
		{
			printf("\n %d->%d",v,i); // if not print
			count++; // updated visited count
			dfs(i); // recursive call DFS
		}
	}
} // end of DFS

void main()
{
	int v, choice;
	printf("\n Enter the number of cities: ");
	scanf("%d",&n);
	printf("\n Enter graph data in matrix form:\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]); // read adjacency matrix
	while(1)
	{
		printf("\n1. Test for reachability") ;
		printf("\n2. Test for connectivity") ;
		printf("\n3. Exit");
		printf("\n Enter Your Choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter the source vertex: ");
			       scanf("%d",&v);
			       if((v<1)||(v>n)) // check for valid source entry
			       		printf("\nEnter a valid source vertex");
			       else // if valid begin test for reachability
				{
					for(i=1;i<=n;i++) // begin with assuming all cities are not reached
						reach[i]=0;
					reach[v]=1; // source is reached
					bfs(v); // cal BFS to check reachability
					printf("The reachable nodes from node %d:\n",v);
					for(i=1;i<=n;i++) // display reachable cities from the source city
						if(reach[i] && i !=v)
							printf("node %d\n",i);
				}	
				break;
			case 2: for(i=1;i<=n;i++) // begin with assuming all cities are not connected
					visited[i]=0;
				printf("ENTER the source vertex");
				count=0;
				scanf("%d",&v); // read source city
				dfs(v); // cal DFS to check connectivity
				if(count==n-1)
					printf("\nGraph is connected\n");
				else
					printf("\n Graph is not connected");
				break;
			case 3:return;
			default:printf("\nEnter proper Choice");
		} // end of switch
		}}