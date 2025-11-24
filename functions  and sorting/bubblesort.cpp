
#include<iostream>
using namespace std;


int main(){

	int arr[100];
	int n;
	cin>>n;//11
	for (int i = 0; i <=n-1; ++i)
	{
		cin>>arr[i];
	}//5 4 3 2 1

// 	for(int i=0;i<=n-2;i++){//3
// 	if(arr[i]>arr[i+1]){
// 		swap(arr[i],arr[i+1]);
// 	}
// }

// // 4 3 2 1 5

// for(int i=0;i<=n-3;i++){//3
// if(arr[i]>arr[i+1]){
// 		swap(arr[i],arr[i+1]);
// 	}
// }
// // 3 2 1 4 5
// for(int i=0;i<=n-4;i++){//3
// if(arr[i]>arr[i+1]){
// 		swap(arr[i],arr[i+1]);
// 	}
// }


// // 2 1 3 4 5


// for(int i=0;i<=n-5;i++){//3
// if(arr[i]>arr[i+1]){
// 		swap(arr[i],arr[i+1]);
// 	}
// }

// 1 2 3 4 5


for(int times=1;times<=n-1;times++){

for(int i=0;i<=n-1-times;i++){//3
if(arr[i]>arr[i+1]){
	// inbuild swap
		// swap(arr[i],arr[i+1]);


	// extra variable 
	// int c=arr[i];
	// arr[i]=arr[i+1];
	// arr[i+1]=c;

		// without extra variable 

	// arr[i]=arr[i]+arr[i+1];
	// arr[i+1]=arr[i]-arr[i+1];
	// arr[i]=arr[i]-arr[i+1];


	arr[i]=((arr[i]+arr[i+1])-(arr[i+1]=arr[i]));



	}
}

}






for(int i=0;i<=n-1;i++){
	cout<<arr[i]<<" ";
}


cout<<endl;

	

	return 0;
}