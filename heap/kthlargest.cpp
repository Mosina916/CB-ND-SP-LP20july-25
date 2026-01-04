#include<iostream>
#include<queue>
using namespace std;

int main(){
	priority_queue<int,vector<int>,greater<int> > h;//

	int n;
	cin>>n;//100
	int k;
	cin>>k;//3rd largest
	int counter=1;
	for(int i=1;i<=n;i++){
	int data;
	cin>>data;//3 13 2 4

	if(counter<=k){
	h.push(data);
	counter++;//3
}
else{
	if(h.top()<data){
		h.pop();
		h.push(data);
	}
}
}

while(!h.empty()){
cout<<h.top()<<endl;
h.pop();
}










	






	return 0;
}