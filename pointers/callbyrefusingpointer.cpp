#include<iostream>
using namespace std;
void abc(int*y){
	*y=*y+10;
	cout<<*y<<endl;

}
int main(){

	int x=30;
	abc(&x);

	cout<<x<<endl;


	


	return 0;
}