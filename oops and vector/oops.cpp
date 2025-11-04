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
	// int x=10;
	amaan q;
	q.setter();
	q.getter();
	// amaan x;
	// x.name="BMw";
	// x.colour='w';
	// x.price=90.32;
	// x.seats=4;


	// cout<<"name --> "<<x.name<<endl;
	// cout<<"colour --> "<<x.colour<<endl;
	// cout<<"price --> "<<x.price<<endl;
	// cout<<"seats --> "<<x.seats<<endl;


	// amaan y;
	// y.name="verna";
	// y.colour='B';
	// y.price=70.32;
	// y.seats=5;


	// cout<<"name --> "<<y.name<<endl;
	// cout<<"colour --> "<<y.colour<<endl;
	// cout<<"price --> "<<y.price<<endl;
	// cout<<"seats --> "<<y.seats<<endl;


	amaan z("abc",'R',65.54,5);
	// z.print();



	// amaan p("lmn",'q',65.54,5);

	

	return 0;
}