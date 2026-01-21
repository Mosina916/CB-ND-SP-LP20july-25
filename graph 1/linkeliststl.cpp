#include<iostream>
#include<list>
using namespace std;

int main(){
	list<int> l;
	l.push_back(4);
	l.push_back(6);
	l.push_back(9);
	l.push_back(2);


	for(auto x:l){
		cout<<x<<"-->";
	}
	cout<<endl;




	return 0;
}