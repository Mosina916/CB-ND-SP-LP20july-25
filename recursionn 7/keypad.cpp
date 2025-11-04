#include<iostream>
#include<cmath>
using namespace std;

// char arr[6]={"'D','E','F','\0'"}

char arr[10][100]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void keypad(char inp[100],int i,char out[100],int j){
	// base case
	if(inp[i]=='\0'){
		out[j]='\0';
		cout<<out<<" ";
		return;
	}

	if(inp[i]=='1'||inp[i]=='0'){
		keypad(inp,i+1,out,j);
	}


	// rec case
	int indx=inp[i]-'0';//1
	for(int k=0;arr[indx][k]!='\0';k++){

	out[j]=arr[indx][k];
	keypad(inp,i+1,out,j+1);
}

	


}

int main(){

	char inp[100];
	cin.getline(inp,100);//"23"
	char oup[100];


	keypad(inp,0,oup,0);
	



	return 0;
}