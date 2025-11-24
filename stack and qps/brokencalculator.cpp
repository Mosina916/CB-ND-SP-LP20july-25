#include<iostream>
#include<stack>
using namespace std;
void multiply(int arr[1000],int no,int &noofdigitstoiterate){//4
	int carry=0;
	int i;
	for(i=0;i<noofdigitstoiterate; i++){
	int prod=no*arr[i]+carry;//12

	arr[i]=prod%10;//0
	carry=prod/10;//1
}
	
	while(carry!=0){
	arr[i]=carry%10;
	carry=carry/10;//0
	noofdigitstoiterate++;//4
	i++;
}



}

void factbrokencal(int n){
	int arr[1000];
	arr[0]=1;
	int noofdigitstoiterate=1;

	for(int no=1;no<=n;no++){//7
	multiply(arr,no,noofdigitstoiterate);
}
for(int l=noofdigitstoiterate-1;l>=0;l--){
	cout<<arr[l];
}
cout<<endl;

}

int main(){

	int n;
	cin>>n;//7


	factbrokencal(n);
	
	

	return 0;
}
