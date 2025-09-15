#include<iostream>
using namespace std;
int length(char arr[100]){
	int count=0;
	int i=0;
	while(arr[i]!= NULL){
	
	count++;
	i++;
}

return count;


}


bool palindrome(char arr[]){
	int i=0;
	int j=length(arr)-1;
	while(i<j){
	if(arr[i]==arr[j]){
		i++;
		j--;

	}
	else{
		return false;
	}
}


return true;


}

// void funct(int arr[100]){
// 	v"hello"

// }


void appendbtoa(char arr1[100],char arr2[100]){

	int i=0;
	int j=length(arr1);//3

	while(i<=length(arr2)){
	arr1[j]=arr2[i];
	i++;
	j++;
}




}

void copy(char arr[100], char b[100]){
	int i=0;
	int j=0;
// 	while(i<=length(arr)){
// 	b[j]=arr[i];
// 	i++;
// 	j++;
// }


	while(arr[i]!='\0'){
	b[j]=arr[i];
	i++;
	j++;
}
b[j]='\0';

}

int main(){


	// char arr[100];
	// cin.getline(arr,100);//"help"

	// char b[100];


	// copy(arr,b);

	// cout<<arr<<endl;

	// cout<<b<<endl;



	// int n;
	// cin>>n;//4
	// cin.ignore();

	// char arr[100];
	// cin.getline(arr,100);//help

	

     



	
	return 0;
}