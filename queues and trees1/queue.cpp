#include<iostream>
using namespace std;
class circularqueue{
	int *arr;
	int f;
	int b;
	int cs;
	int ms;

public:
	circularqueue(int n=5){
		arr=new int[n];
		f=0;
		b=-1;
		cs=0;
		ms=n;
	}
	

	// push
	void push(int d){
		if(cs<ms){
			b=(b+1)%ms;
			arr[b]=d;
			cs++;
		}
		else{
			cout<<"overflow"<<endl;
		}

	}
	// pop
	void pop(){  
		if(cs>0){
			f=(f+1)%ms;
			
			cs--;
		}
		else{
			cout<<"underflow"<<endl;
		}
	}


	// top
	int front(){
			return arr[f];
		}

	// empty
		bool empty(){
			return cs==0;
		}

	// size

		int size(){
			return cs;
		}



};
int main(){
	circularqueue q;
	q.push(13);
	q.push(10);
	q.push(12);
	q.push(14);

	q.push(16);
	q.push(17);

	q.pop();
	q.pop();
	q.push(2);

	while(!q.empty()){
	cout<<q.front()<<" ";
	q.pop();
}



	


	
	

	return 0;
}
