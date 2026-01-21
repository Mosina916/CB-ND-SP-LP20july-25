#include<iostream>
#include<list>
#include<queue>
using namespace std;
template<typename t> 
class Graph{

	unordered_map<t,list<t> > h;

public:

	
	void addedge(t x,t y,bool birdir=false){
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


	int board[50]={0};
	board[2]=13;
	board[5]=2;
	board[9]=18;
	board[17]=-13;
	board[18]=11;
	board[20]=-14;
	board[24]=-8;
	board[25]=10;
	board[32]=-2;
	board[34]=-22;

	for(int src=0;src<=35;src++){
	for (int dice = 1;dice<=6; dice++)
	{
		int dest=src+dice+board[src+dice];
		g.addedge(src,dest);
		
	}
}

cout<<g.sssp(0,36)<<endl;


int p1=0;
int p2=0;
int d;
	while(true){
	cout<<" throw dice for person 1 "<<endl;
	cin>>d;//2
	if(p1+d+board[p1+d]<36){

		p1=p1+d+board[p1+d];//29
		cout<<"now person 1 is at "<<p1<<endl;
	}
	else if(p1+d+board[p2+d]==36){
		cout<<"p1 win the game "<<endl;
		break;
	}
	
	cout<<" throw dice for person 2 "<<endl;
	cin>>d;//2
	if(p2+d+board[p2+d]<36){
		p2=p2+d+board[p2+d];//35
		cout<<"now person 2 is at "<<p2<<endl;
	}
	else if(p2+d+board[p2+d]==36){
		cout<<"p2 win the game "<<endl;
		break;
	}
}



	












	


	
	
	


	return 0;
}