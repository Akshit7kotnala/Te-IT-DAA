#include<bits/stdc++.h>
using namespace std;

struct edges
{
	int u;
	int v;
	int w;
};

int main()
{
	int E, V, src;
	cout<<"Enter the number of edges: ";
	cin >> E;
	cout<<endl;
	cout<<"Enter the number of vertices: ";
	cin >> V;
	cout<<endl;
	cout<<"Enter the source node: ";
	cin >> src;
	cout<<endl;
	
	vector<edges> e(E+1);
	vector<int> dist(V+1, INT_MAX);
	
	for(int i=1; i<E+1; i++)
	{
		cout<<"Enter the starting vertex: ";
		cin>>e[i].u;
		cout<<endl;
		cout<<"Enter the ending vertex: ";
		cin>>e[i].v;
		cout<<endl;
		cout<<"Enter the weight of the vertex: ";
		cin>>e[i].w;
		cout<<endl;
	}
	for(int i=1; i<E+1; i++)
	{
		cout<<e[i].u<<"---->"<<e[i].v<<"---->"<<e[i].w<<endl;
	}
	dist[src]=0;
	for(int i=2; i<V+1; i++)
	{
		for(int j=1; j<E+1; j++)
		{
				if(dist[e[j].u]<INT_MAX)
				{
					dist[e[j].v] = min(dist[e[j].v],(dist[e[j].u]+e[j].w));
				
				}
		}
		cout<<"PASS "<<i-1<<endl;
		for(int i=1; i<V+1; i++)
		{
			cout<<i<<"------------->"<<dist[i]<<endl;
		}
	}
	cout<<endl;
	cout<<"ANsWER: "<<endl;
	for(int i=1; i<V+1; i++)
	{
		cout<<i<<"------------->"<<dist[i]<<endl;
	}
	return 0;
}

