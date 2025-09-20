#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[100];
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
	}
	int cs=0;
	int ms=INT_MIN;
	for (int i = 0; i <n; i++)
	{
		cs=cs+arr[i];
		ms=max(ms,cs);
		if(cs<0){
			cs=0;
		}
	}


	cout<<ms<<endl;


	return 0;
}