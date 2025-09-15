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

	int n;
	cin>>n;//4
	cin.ignore();
	char arr[100];
	cin.getline(arr,100);//cat
	char largetarr[100];
	copy(arr,largetarr);//
	int maxlen=length(arr);//4

	for(int i=1;i<=n-1;i++){
	cin.getline(arr,100);//rat
	if(length(arr)>maxlen){//3>8
		copy(arr,largetarr);
		maxlen=length(arr);//8

	}
}

cout<<maxlen<<endl;
cout<<largetarr<<endl;






	return 0;
}