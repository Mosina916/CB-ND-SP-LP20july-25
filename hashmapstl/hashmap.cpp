#include<iostream>
using namespace std;
class node{
public:
	string fn;
	int fc;
	node*next;
	node(string frn,int frc){

		fn=frn;
		fc=frc;
		next=NULL;
	}
};

class hashmap{

	node**arr;
	int ts;
	int cs;
public:
	hashmap(int size=7){
		arr=new node*[size];
		for (int i = 0; i <size; ++i)
		{
			arr[i]=NULL;
		}
		ts=size;
		cs=0;
	}

	int hashfunction(string s){
		int ans=0;
		int mult=1;
		for (int i = 0; i <s.length(); ++i)
		{
			ans=((ans%ts)+(s[i]%ts*mult%ts)%ts)%ts;
			mult=(mult*37)%ts;
		}
		return ans%ts;
	}
	void rehashing(){
		node**oldarr=arr;
		int oldts=ts;
		arr=new node*[2*ts];
		ts=2*ts;
		cs=0;
		// shifting
		for (int i = 0; i < oldts; ++i)
		{
			node*temp=oldarr[i];
			while(temp!=NULL){
				insert(temp->fn,temp->fc);
				temp=temp->next;
			}

		}
		delete []oldarr;
		oldarr=NULL;

	}

	void insert(string fna,int fco){
		int index=hashfunction(fna);
		node*n=new node(fna,fco);
		n->next=arr[index];
		arr[index]=n;
		cs++;
		if((cs/(1.0*ts))>0.4){
			rehashing();
		}
	}


	void printhm(){
		for(int i=0;i<ts;i++){
		node*temp=arr[i];

		cout<<i<<" : ";
		while(temp!=NULL){
			cout<<"( "<<temp->fn<<", "<<temp->fc<<"),";
			temp=temp->next;
		}
		cout<<endl;
	}
	}

	search(string fname ){
		int index=hashfunction(fn);//3
		node*temp=arr[index];

		while(temp!=NULL){
		if(temp->fn==fname){
			return true;
		}
		temp=temp->next
	}
	return false;

	}

};
int main(){
	hashmap h;
	h.insert("abc",50);
	h.insert("bac",70);
	h.insert("gsaf",80);

	h.insert("hsf",60);

	h.insert("lmn",60);
	 h.printhm();


	 h.search("lmn");



	return 0;
}