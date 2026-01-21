#include<iostream>
#include<list>
#include<queue>
using namespace std;
template<typename t> 
class Graph{

	unordered_map<t,list<t> > h;

public:

	
	void addedge(t x,t y,bool birdir=true){
		h[x].push_back(y);
		if(birdir){
		h[y].push_back(x);
		}


	}


	void print(){
		for (auto p:h)
		{
			cout<<p.first<<" :--> ";
			for(auto x:p.second){
				cout<<x<<" ";
			}
			cout<<endl;

		}
	}
	void dfs(t src,unordered_map<int,bool>&visited){

		// cout<<src<<" ";
		visited[src]=true;
		for(auto w:h[src]){
			if(!visited[w]){
				dfs(w,visited);

			}

		}

	}


	int totalcomponents(t src,unordered_map<int,bool>&visited){
		int compcount=1;
		dfs(src,visited);

		for(auto d:h){
			if(!visited[d.first]){
				compcount++;
				dfs(d.first,visited);
			}

		}

		return compcount;

	}



};
int main(){

	Graph<int> g;

	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(1,3);
	g.addedge(1,2);
	g.addedge(3,4);
	g.addedge(3,2);


	g.addedge(100,101);
	g.addedge(101,102);
	g.addedge(100,102);


	g.addedge(700,800);
	g.addedge(700,900);
	g.addedge(700,180);

	g.print();

	unordered_map<int,bool>visited;
	cout<<g.totalcomponents(0,visited)<<endl;
	// g.dfs(0,visited);


	return 0;
}