#include<iostream>
#include<list>
using namespace std;
class Graph{

	list<int>* arr;
	int n;
public:
	Graph(int size=5){
		arr=new list<int>[size];
		n=size;
	}


	void addedge(int x,int y,bool birdir=true){
		arr[x].push_back(y);
		if(birdir){
		arr[y].push_back(x);
	}


	}


	void print(){
		for (int i = 0; i <n; ++i)
		{
			cout<<i<<" :--> ";
			for(auto x:arr[i]){
				cout<<x<<" ";
			}
			cout<<endl;

		}
	}

	void neigh(int s){
		for (auto k:arr[s])
		{
			cout<<k<<" ";
		}
		cout<<endl;

	}

};
int main(){
	Graph g;

	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(1,3);
	g.addedge(1,2);
	g.addedge(3,4);
	g.addedge(3,2);


	g.print();

	g.neigh(1);
	

	
	


	return 0;
}