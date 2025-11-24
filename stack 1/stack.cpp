#include<iostream>
using namespace std;
class stack{
	vector<int> v;
public:
	

	// push
	void push(int d){
		v.push_back(d);

	}
	// pop
	void pop(){
		v.pop_back();
	}


	// top
	int top(){
			return v[v.size()-1];
		}

	// empty
		bool empty(){
			return v.size()==0;
		}

	// size

		int size(){
			return v.size();
		}



};
int main(){
	stack s;

	s.push(10);
	s.push(20);
	s.push(40);
	s.push(60);
	s.push(30);
	// cout<<s.v[2]<<endl;
	// s.pop();
	// s.pop();

	// cout<<s.top()<<endl;
	// cout<<s.size()<<endl;
// 	while(!s.empty()){

// 	cout<<s.top()<<" ";
// 	s.pop();
// }


	
	

	return 0;
}
