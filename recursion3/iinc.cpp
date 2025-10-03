
#include<iostream>
using namespace std;
void f(int &i){
	if(i==6){
		return;
	}


	cout<<i<<" ";
	
	f(i++);
	
	// f(i+1);
	// f(++i);

}

int main(){
	int i=1;
	f(i);

	return 0;
}