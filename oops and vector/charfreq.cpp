#include<iostream>
using namespace std;

int main(){
	strig s;
	getline(cin,s);
	int freq[52]={0};//aaabacB
	for(int i=0;s[i]!='\0';i++){
		if(islower(s[i])){
		int indx=s[i]-71;
	}
	else{
		int indx=s[i]-65;
	}

		freq[indx]++;
	
	}

	int ma=INT_MIN;
	for (int i = 0; i <=51; ++i)
	{
		ma=max(freq[i],ma);
	}

	

	return 0;
}