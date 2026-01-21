#include<iostream>
using namespace std;
int rob(int arr[100],int n) {
	if(n==1){
		return arr[0];
	}
	if(n<=0){
		return 0;
	}




        int op1=arr[0]+rob(arr+2,n-2);//2+9+1
        int op2=arr[1]+rob(arr+3,n-3);//7+3+

        return max(op1,op2);

        
    }


 int main(){

 	int arr[]={1,2,3,1};
 	int n=sizeof(arr)/sizeof(int);
 	cout<<rob(arr,n)<<endl;
 	return 0;
 }


