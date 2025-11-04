#include<iostream>
using namespace std;
class amaan{
public:
	string name;
	char colour;
	float price;
	int seats;
// default cns
	amaan(){

	}

	// amaan(){

	// 	cout<<"hello"<<endl;

	// }


	amaan(string name,char colour,float p,int s){
		this->name=name;
		this->colour=colour;
		price=p;
		seats=s;


	}




	void getter(){
			cout<<"name --> "<<name<<endl;
	cout<<"colour --> "<<colour<<endl;
	cout<<"price --> "<<price<<endl;
	cout<<"seats --> "<<seats<<endl;

	}


	void setter(){
		cin>>name;
		cin>>colour;
		cin>>price;
		cin>>seats;
	}


};
int main(){
	amaan q[10];
	q[0].getter();
	q[0].setter();


	q[1].getter();
	q[1].setter();
	q[2].getter();
	q[2].setter();
	q[3].getter();
	q[3].setter();
	q[4].getter();
	q[4].setter();


	

	return 0;
}