
#include<iostream>
using namespace std;
int co=0;
void subsequence(char in[1000],char op[1000],int i,int j){
	// base case//1
	if(in[i]=='\0'){
		op[j]='\0';
		cout<<op<<endl;
		co++;
		return;
	}
	// rec case
	subsequence(in,op,i+1,j);//without a //2
	// with a 

	op[j]=in[i];//3
	subsequence(in,op,i+1,j+1); //4

}

int main(){
	char in[1000];
	cin.getline(in,100);//abc
	char op[1000];
	subsequence(in,op,0,0);
	cout<<co<<endl;

	return 0;
}