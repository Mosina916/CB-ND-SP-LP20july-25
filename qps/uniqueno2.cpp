#include<iostream>
#include<climits>
using namespace std;
int main(){
	
	int arr[10000];

		int n;
	cin>>n;
	int x=0;
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
		x=x^arr[i];

		
	}

	// cout<<x<<endl;//1011
	int y=x;//8
	int pos=0;
	
	while((x&1)!=1){
		pos++;
		x=x>>1;
	}


	int mask=(1<<pos);

	int x1=0;
	int x2=0;

	for(int i=0;i<n;i++){
		if((arr[i]&mask)!=0){
			x1=x1^arr[i];

		}
		else{
			x2=x2^arr[i];

		}
	}

	cout<<min(x1,x2)<<" ";
	cout<<max(x1,x2)<<endl;





	

	return 0;
}