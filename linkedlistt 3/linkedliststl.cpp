#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int> l;
	// s.pop();

	l.push_front(10);
	l.push_front(20);
	l.push_front(40);

	l.push_back(60);
	l.push_back(30);

	for(int x:l){
		cout<<x<<" ";
	}
	cout<<endl;
	

	
	
	
	

	return 0;
}
