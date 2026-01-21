#include<iostream>
#include<list>
#include<queue>
using namespace std;
class node{
public:
	char ch;
	bool isterminal;
	unordered_map<char,node*> h;
	node(char c){
		ch=c;
		isterminal=false;
	}
};

class trie{

	node*root;
public:

	trie(){
		root=new node('\0');
	}


	void insert(string s){//"coding"

		node*temp=root;

		for(int i=0;s[i]!='\0';i++){
		char ch=s[i];//c
		if(!temp->h.count(ch)){
			temp->h[ch]=new node(ch);
			temp=temp->h[ch];
		}
		else{
			temp=temp->h[ch];

		}
	}
	temp->isterminal=true;

	}

	bool search(string s){//code

			node*temp=root;

		for(int i=0;s[i]!='\0';i++){
		char ch=s[i];//c
		if(temp->h.count(ch)){
			temp=temp->h[ch];

			
		}
		else{
			return false;
		

		}
	}
	return temp->isterminal;



	}






};
int main(){


	trie t;
	t.insert("coder");
	t.insert("coding");
	t.insert("codpr");
	t.insert("dog");

	t.insert("doggy");
	t.insert("mad");


	cout<<t.search("coder")<<endl;



	return 0;
}