#include<iostream>
using namespace std;


int main(){


	int x=0;
	int y=0;


	char ch;
	ch=cin.get();//s
	while(ch!='\n'){
	

	if(ch=='S'){
		y=y-1;//
	}
	else if(ch=='N'){
		y=y+1; //
	}
	else if(ch=='E'){
		x=x+1; //
	}
	else{
		x=x-1;//2 -2
	}

	ch=cin.get();


}

// cout<<x<<" "<<y<<endl;


// ist 

if(x>=0 and y>=0){
	// ist quade

	for(int i=1;i<=x;i++){
		cout<<'E';
	}
	for(int i=1;i<=y;i++){
		cout<<'N';
	}
	cout<<endl;
}
else if(x<=0 and y>=0){
	// 2nd 
	for(int i=1;i<=y;i++){
		cout<<'N';
	}
	for(int i=1;i<=abs(x);i++){
		cout<<'W';
	}
	cout<<endl;
}
else if(x<=0 and y<=0){
	// 3nd 
	for(int i=1;i<=abs(y);i++){
		cout<<'S';
	}
	for(int i=1;i<=abs(x);i++){
		cout<<'W';
	}
	cout<<endl;
}
else{
	// 4th
	for(int i=1;i<=x;i++){
		cout<<'E';
	}
	for(int i=1;i<=abs(y);i++){
		cout<<'S';
	}
	cout<<endl;
}






	return 0;
}