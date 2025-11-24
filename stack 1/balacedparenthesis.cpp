#include<iostream>
#include<stack>
using namespace std;
bool balancedparenthesis(char arr[]){
	stack<char> s;
	for(int i=0;arr[i]!='\0';i++){
	char ch=arr[i];
	switch(ch){ //')'
		case '[':s.push(ch);
		break;
		case '{':s.push(ch);
		break;
		case '(':s.push(ch);
		break;
		case ')':if(!s.empty() and s.top()=='('){
			s.pop();
		}
		else{
			return false;
		}
		break;

		case ']':if(!s.empty() and s.top()=='['){
			s.pop();
		}
		else{
			return false;
		}
		break;
		case '}':if(!s.empty()  and s.top()=='{'){
			s.pop();
		}
		else{
			return false;
		}
		break;

	}
}

if(!s.empty()){
	return false;

}
return true;
}
int main(){
	char arr[]="[x+([{(a+b)+c]*d]+e)]";

	// {({}})
	cout<<balancedparenthesis(arr)<<endl;


	



	
	

	return 0;
}
