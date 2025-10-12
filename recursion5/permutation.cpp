#include <iostream>
using namespace std;
void permutationrec(char ip[1000],int i){
	// base acse
	if(ip[i]=='\0'){
		cout<<ip<<endl;
		return;
	}

	// rec case
	for(int j=i;ip[j]!='\0';j++){//0 2
	swap(ip[i],ip[j]);
	permutationrec(ip,i+1);//abc acb
	swap(ip[i],ip[j]);//backtracking
}


}
int main(){
	char ip[1000];
	cin.getline(ip,100);
	permutationrec(ip,0);


	return 0;
}