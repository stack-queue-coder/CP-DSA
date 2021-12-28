#include<bits/stdc++.h>
using namespace std;
//T denotes any general type ...exp int ,float etc
template<typename T>
class Graph{
	public:
		unordered_map<T,unordered_map<T,int>>adj;
		Graph() {}
		void addEdge(T u, T v, int wt, bool bidir =true ){
			adj[u][v]= wt; // i have added and edge fron u to v 
		    if(bidir){
		    	adj[v][u]=wt;
			}
		}
		void printAdj(){
			for(auto row : adj){
				cout<<row.first<<" -> ";
				for(auto neighbour : row.second){
					cout<<neighbour.first<<","<<neighbour.second<<" -> ";
				}
				cout<<endl;                                 
				}
			}
		};
int main(){
	Graph<String> g;
	g.addEdge("Delhi", "Mumbai", 350);
	g.addEdge("Delhi", "chennai", 350);
	g.addEdge("Delhi", "patna", 350);
	g.addEdge("Delhi", "goa", 350);
	g.addEdge("Delhi", "M", 350);
	g.addEdge("Delhi", "Mumbai", 350);
	g.printAdj();
	return 0;
}
