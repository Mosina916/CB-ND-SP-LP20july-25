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

	
	char arr1[100];
	cin.getline(arr1,100);//ERQWSTTZZ
	char arr2[100];
	cin.getline(arr2,100);//TQTZSWREZ

	int l1=length(arr1);
	int l2=length(arr2);//

	if(l1!=l2){
		cout<<"nott permutation"<<endl;
	}
	else{
		// length same ABC CBQ

	// 	int freq[26]={0};

	// 	// ERQWSTTZZ

	// 	for(int i=0;i<length(arr1);i++){
	// 	char ch=arr1[i];//R
	// 	int indx=ch-'A';
	// 	freq[indx]++;
	// }
	// // TQTZSWREZ
	// for(int i=0;i<length(arr2);i++){
	// 	char ch=arr2[i];//E
	// 	int indx=ch-'A';
	// 	freq[indx]--;
	// }


	// for(int i=0;i<=25;i++){
	// 	if(freq[i]!=0){
	// 		cout<<"not permutation"<<endl;
	// 		return 0;

	// 	}
	// }




		int freq[52]={0};

		// ERQWSTTZZ

		for(int i=0;i<length(arr1);i++){
		char ch=arr1[i];//
		if(isupper(ch)){
			int indx=ch-'A';
		freq[indx]++;

		}
		else{
			int indx=ch-71;
		freq[indx]++;

		}
		
	}
	// TQTZSWREZ
	for(int i=0;i<length(arr2);i++){
		char ch=arr1[i];//
		if(isupper(ch)){
			int indx=ch-'A';
		freq[indx]--;

		}
		else{
			int indx=ch-71;
		freq[indx]--;

		}
	}


	for(int i=0;i<=51;i++){
		if(freq[i]!=0){
			cout<<"not permutation"<<endl;
			return 0;

		}
	}


	cout<<"permutation"<<endl;












	}
	

	return 0;
}