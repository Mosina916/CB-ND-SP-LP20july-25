#include<iostream>
#include<queue>
using namespace std;
#define pq priority_queue<int,vector<int>,greater<int> > 

void printheap(pq h){
	while(!h.empty()){
	cout<<h.top()<<endl;
	h.pop();
	}
}
int main(){
	pq h;//
	 // k=4

	// 3 5 4 1 2 1 -3 2 6 8 9 3 -1 12 3 4 15 6 -1 30 1 2 3 1 -1 3 2 
	// 						9 8 6 5        15 12 9 8      30 15 12 9
	int counter=1;
	int k;
	cin>>k;//4
		
	while(1){
	int data;
	cin>>data;
	if(counter<=k){
		h.push(data);
		counter++;
	}
	else{
		if(data==-1){
			printheap(h);
		}
		else{
			if(h.top()<data){
				h.pop();
				h.push(data);
			}

		}

	}

}





	return 0;
}