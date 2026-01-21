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


	// void bfs(t src){

	// 	queue<t> q;
	// 	q.push(src);


	// 	unordered_map<t,bool> visited;
	// 	visited[src]=true;



	// 	while(!q.empty()){
	// 	t x=q.front();//
	// 	q.pop();
	// 	cout<<x<<" ";//0 1 4 3 2

	// 	for(auto g:h[x]){
	// 		if(!visited[g]){
	// 			q.push(g);
	// 			visited[g]=true;


	// 		}

	// 	}
	// }
	// }



	// void mindisttoallnodes(t src){//0

	// 	queue<t> q;
	// 	q.push(src);


	// 	unordered_map<t,bool> visited;
	// 	visited[src]=true;
	// 	unordered_map<t,int> distance;
	// 	distance[src]=0;



	// 	while(!q.empty()){
	// 	t x=q.front();//
	// 	q.pop();
		

	// 	for(auto g:h[x]){
	// 		if(!visited[g]){
	// 			q.push(g);
	// 			visited[g]=true;
	// 			distance[g]=distance[x]+1;


	// 		}

	// 	}
	// }

	// for (auto h: distance)
	// {
	// 	cout<<"distance from "<<src<<" to "<<h.first<< " is "<<h.second<<endl;

	// }

	// }


	int sssp(t src,t dest){//0 3 ka path
// 3<--1<--0
		queue<t> q;
		q.push(src);


		unordered_map<t,bool> visited;
		visited[src]=true;
		unordered_map<t,int> distance;
		distance[src]=0;

		unordered_map<t,t> parent;
		parent[src]=src;

		while(!q.empty()){
		t x=q.front();//
		q.pop();
		

		for(auto g:h[x]){
			if(!visited[g]){
				q.push(g);
				visited[g]=true;
				distance[g]=distance[x]+1;

				parent[g]=x;


			}

		}
	}

	t a= dest;//3

	while(a!=parent[a]){
	cout<<a<<"<--"; //3<<--1<<--;
	a=parent[a];
}

cout<<a;
	
cout<<endl;


return distance[dest];



	
	}


};
int main(){
	Graph<int> g;


	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,3);
	g.addedge(1,2);
	g.addedge(1,4);
	g.addedge(3,2);
	g.addedge(3,4);

	// g.bfs(3);//levelwise

	// g.mindisttoallnodes(0);//levelwise
	// cout<<endl;


	// g.print();


	cout<<g.sssp(2,4)<<endl;


// /singlesource shortest path
	
	
	


	return 0;
}