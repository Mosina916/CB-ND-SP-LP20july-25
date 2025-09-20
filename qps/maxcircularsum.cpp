#include<iostream>
#include<climits>
using namespace std;
int main(){
	
	int arr[10000];
	int t;
	cin>>t;//1
	while(t--){

		int n;
	cin>>n;

	int sum=0;
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
		sum=sum+arr[i];//-26
	}

	// linear pe kadene
	int cs=0;
	int msl=INT_MIN;
	for (int i = 0; i <n; i++)
	{
		cs=cs+arr[i];
		msl=max(msl,cs);
		if(cs<0){
			cs=0;
		}
	}
	// msl 29

	if(msl<0){
		cout<<msl<<endl;
		continue;
	}


	// array ko karo negate
	for (int i = 0; i <n; ++i)
	{
		arr[i]=(-1*arr[i]);
		
	}

	// phirse negate wali array pe

	cs=0;
	int a=INT_MIN;
	for (int i = 0; i <n; i++)
	{
		cs=cs+arr[i];
		a=max(a,cs);
		if(cs<0){
			cs=0;
		}
	}


	int msc=sum-(-1*a);

	int fo=max(msl,msc);
	cout<<fo<<endl;

}


	

	return 0;
}