#include<iostream>
using namespace std;
int cost[10][10],i,j,k,n,m,queue[10],front,rare,v,visit[10],visited[10];
int main()
{
	
	cout <<"Enter the no of vertices : ";
	cin >> n;
	cout <<"\nEnter the no of edges";
	cin >> m;
	cout <<"\nEDGES \n";
	for(k=1;k<=m;k++)
	{
		cin>>i>>j;
		cost[i][j]=1;
	}
	cout <<"Enter the initial vertices : ";
	cin >>v;
	cout <<"Visitied vertices : "<<v;
	visited[v]=1;
	k=1;
	while(k<n)
	{
		for(j=1;j<=n;j++)	
			if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
			{
				visit[j]=1;
				queue[rare++]=j;
			}
				v=queue[front++];
				cout<<v<< " ";
				k++;
				visit[v]=0; visited[v]=1;
	}
	return 0;
}
