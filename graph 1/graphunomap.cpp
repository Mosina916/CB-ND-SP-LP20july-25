#include<iostream>
#include<list>
using namespace std;
template<typename t> 
class Graph{

	// unordered_map<string,list<string> > h;

	unordered_map<t,list<t> > h;

public:

	// void addedge(string x,string y,bool birdir=false){
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


};
int main(){
	// Graph<int> g;
	Graph<string> g;

		g.addedge("modi","trump",true);
		g.addedge("putin","trump");
		g.addedge("putin","modi");
		g.addedge("putin","pope");
		g.addedge("yogi","prabhu");
		g.addedge("yogi","modi",true);
		g.addedge("prabhu","modi");
		g.addedge("pope","");

	// g.addedge(0,4);
	// g.addedge(1,4);
	// g.addedge(1,3);
	// g.addedge(1,2);
	// g.addedge(3,4);
	// g.addedge(3,2);


	g.print();

	// g.neigh(1);


	// h["abc"]="red";
	

	
	


	return 0;
}