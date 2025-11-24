
#include<iostream>
using namespace std;

int main(){
	int arr[100];
	int n;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
	}
	int j;

for (int i = 1; i <=n-1 ;i++)
{

	int x=arr[i];
	for ( j = i-1; j >=0 ; j--)
	{
		if(x<arr[j]){
			arr[j+1]=arr[j];
		}
		else{
			break;
		}
	}
	arr[j+1]=x;

}







	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	return 0;
}