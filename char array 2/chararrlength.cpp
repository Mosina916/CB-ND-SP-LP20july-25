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

int main(){

	// arr1-->"hel"   arr1-->helqwerty
	// arr2-->"qwerty" 


	char arr1[100];
	char arr2[100];




cin.getline(arr1,100);
cin.getline(arr2,100);


appendbtoa(arr1,arr2);

cout<<arr1<<endl;
cout<<arr2<<endl;
	// int arr[100]={3,4,2,2,2};
	// intt n=sizeof(arr)/sizeof(int);

	// int arr[100];
	// funct(arr);

	// char arr[100];
	// // char arr[6]={'A','R','Q','U','I','\0'};

	// cin.getline(arr,100);//"hell"
	// // cout<<length(arr)<<endl;

	// cout<<palindrome(arr)<<endl;


	
	return 0;
}