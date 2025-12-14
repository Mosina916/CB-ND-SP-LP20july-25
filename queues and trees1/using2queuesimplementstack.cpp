#include<iostream>
#include<queue>
using namespace std;

class stack{
	queue<int> q1;
	queue<int> q2;

public:
	void push(int d){
		if(q1.empty() and q2.empty()){
			q1.push(d);
		}
		else if(!q1.empty() and q2.empty()){
			q1.push(d);
		}
		else{
			q2.push(d);
		}

	}

	void pop(){
		if(q1.empty() and q2.empty()){
			return;

		}
		else if(!q1.empty() and q2.empty()){
			while(q1.size()>1){
			q2.push(q1.front());
			q1.pop();
		}
		q1.pop();
		}
		else{
			while(q2.size()>1){
			q1.push(q2.front());
			q2.pop();
		}
		q2.pop();



		}

	}

	int top(){
		int top=-1;

		if(q1.empty() and q2.empty()){
			// return top;

		}
		else if(!q1.empty() and q2.empty()){
			while(q1.size()>1){
			q2.push(q1.front());
			q1.pop();
		}
		top=q1.front();
		q2.push(q1.front());
		q1.pop();
		// return top;

		}
		else{
			while(q2.size()>1){
			q1.push(q2.front());
			q2.pop();
		}
		top=q2.front();
		q1.push(q2.front());
		q2.pop();
		// return top;



		}

		return top;

	}

	bool empty(){
		return q1.size()+q2.size()==0;
	}


	int size(){
		return q1.size()+q2.size();
	}

};

int main(){

	stack s;
	s.push(13);
	s.push(23);
	s.push(3);
	s.push(11);
	s.push(16);
	s.pop();
	s.push(8);
	s.pop();

	while(!s.empty()){
	cout<<s.top()<<" ";
	s.pop();
}

	

	return 0;
}
