#include<iostream>

#include<map>
using namespace std;

int main(){
	// unordered_map<string,int> h;
	// unordered_map<string,pair<int,int> > h; //O(1)
	map<string,pair<int,int> > h;//log(n)
	// h.insert({"abc",{50});
	// h.insert({"pqr",50});
	h["lmn"]=make_pair(30,40);
	// h["abc"]=30;
	// h["pqr"]=80;
	h["abc"]=make_pair(89,20);
	// h["lmn"]=make_pair(30,40);




	// h.insert({"shd",90});

	for(auto x:h){
		cout<<x.first<<" : "<<x.second.first<<" "<<x.second.second<<endl;
	}

	cout<<endl;



	

	return 0;
}