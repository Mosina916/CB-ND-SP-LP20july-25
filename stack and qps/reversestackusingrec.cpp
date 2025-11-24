#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &s,int element){
	if(s.empty()){
		s.push(element);
		return;

	}

	int a=s.top();//3
	s.pop();
	insertatbottom(s,element);
	s.push(a);

}
void reverse(stack<int> &s){
	if(s.empty()){
		return;
	}


	int element=s.top();//6
	s.pop();
	reverse(s);
	insertatbottom(s,element);
}
int main(){
	stack<int> s;
	s.push(3);
	s.push(5);
	s.push(2);
	s.push(6);

	reverse(s);

	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	
	

	return 0;
}
