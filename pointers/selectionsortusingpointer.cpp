#include<iostream>
using namespace std;


int main(){


	int arr[100];

	int n;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		cin>>*(arr+i);
	}


	// selection sort
	


	for(int pos=0;pos<=n-2;pos++){
		int minind=pos;
		for(int j=pos+1;j<=n-1;j++){
			if(*(arr+minind)>*(arr+j)){
				minind=j;
			}
		}
		swap(*(arr+pos),*(arr+minind));
	}


	for (int i = 0; i <n; ++i)
	{
		cout<<*(arr+i)<<" ";
	}

	cout<<endl;




	return 0;
}