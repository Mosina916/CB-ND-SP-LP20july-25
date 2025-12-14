#include<iostream>
#include<queue>
using namespace std;

int main(){
	// queue<datatype> q;
	queue<int>q;
	q.push(13);
	q.push(10);
	q.push(12);
	q.push(14);

	q.push(16);
	q.push(17);

	q.pop();



	while(!q.empty()){
	cout<<q.front()<<" ";
	q.pop();
}



	

	return 0;
}
