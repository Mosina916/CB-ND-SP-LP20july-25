#include<iostream>
using namespace std;
class node{
public:
	int d;
	node*next;
	node(int data){
		d=data;
		next=NULL;
	}
};
class stack{
	node*head;
	int l;

public:
	stack(){
		head=NULL;
		l=0;
	}
	

	// push
	void push(int d){
		node*n=new node(d);
		n->next=head;
		head=n;
		l++;

		
	}
	// pop
	void pop(){
		if(head==NULL ){
			return;
		}
		node*temp=head;
		head=head->next;
		delete temp;
		temp=NULL;
		l--;
		
	}


	// top
	int top(){
		return head->d;
			
		}

	// empty
		bool empty(){
			return l==0;
			
		}

	// size

		int size(){
			return l;
		}



};
int main(){
	stack s;
	// s.pop();

	s.push(10);
	s.push(20);
	s.push(40);
	s.pop();
	s.push(60);
	s.push(30);
	

	
	while(!s.empty()){

	cout<<s.top()<<" ";
	s.pop();
}


	
	

	return 0;
}
