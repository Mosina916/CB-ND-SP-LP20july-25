#include<iostream>
using namespace std;
class node{
	public:
	int d;
	node*next;

	node(int dat){
		next=NULL;
		d=dat;

	}
};
int main(){
	node x(3);
	node y(7);

	x.next=&y;//link creat x and y ki
	cout<<x.d<<endl;
	cout<<(*x.next).d<<endl;





	return 0;
}
