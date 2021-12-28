#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 100000;
vector<int> adj[N]; 
bool  vis ited[N];
int dis[N];
int cnt =0;

int dfs(int node){
	visited[node] = true;
	cnt++;
	for(int x : adj[node]){
		if(visited[node]){
			continue;
		}	
		dfs(x);
	}
}

int main(){

int n;
cin >> n; 
int m; 
cin >> m ;

// 2 4
for(int i=0;i<m;i++){
	int x,y;
	cin >> x >> y;
	adj[x].push_back(x);
	adj[y].push_back(y);	
}
queue<int> q;
q.push(1);
dis[1]=0;
while(!q.empty()){
	int node = q.front();
	visited[node] = true;
	q.pop();
	
	for(int x: adj[node]){
		if(visited[x] == true){
			continue;
		}
		q.push(x);
		dis[x] = dis[node] +1 ;
		visited[x]	 = true;
		
	}
}
return 0;
}

