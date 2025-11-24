#include<iostream>
using namespace std;
class node{
	public:
	int d;
	node*prev;
	node*next;

	node(int dat){
		prev=NULL;
		next=NULL;
		d=dat;

	}
};


void insertatdllfront(node*&head,node*&tail,int data){
	if(head==NULL and tail==NULL){
		node*n=new node(data);
		head=n;
		tail=n;

	}
	else{
		node*n=new node(data);
		n->next=head;
		head->prev=n;
		head=n;
	}


}


void printll(node*head){
	
	while(head!=NULL){
	cout<<head->d<<" ";
	head=head->next;
}

cout<<endl;

}


bool cyclepresentornot(node*head){
	node*slow=head;
	node*fast=head;

	while(fast!=NULL and fast->next!=NULL){
	slow=slow->next;
	fast=fast->next->next;
	if(fast==slow){
		return true;
	}
}
return false;
}


void cyclecreate(node*head,int pos){//3
	node*temp=head;
	while(temp->next!=NULL){
	temp=temp->next;
}

	node*x=head;
	for (int i = 1; i <=pos-1 ; ++i)
	{
		x=x->next;
	}
	temp->next=x;
}


void breakcycle(node*head){
	node*slow=head;
	node*fast=head;
	bool kyacyclemila=false;
	while(fast!=NULL and fast->next!=NULL){
	slow=slow->next;
	fast=fast->next->next;
	if(fast==slow){
		kyacyclemila=true;
		break;
	}
}
if(kyacyclemila==true){
	// todo cycle
	slow=head;
	while(slow->next!=fast->next){
	slow=slow->next;
	fast=fast->next;
}
fast->next=NULL;



}



}

int main(){
	// using rec
	// head1-->2 4 6 8 10 13 15 
	// head2-->0 1 3 4 5 7

	node*head1=NULL;
	node*tail1=NULL;



	int n;
	cin>>n;//7
	for (int i = 0; i <n; ++i)
	{
	
		int k;
		cin>>k;//2 4 6 8 10 13 15 
	insertatdllfront(head1,tail1,k);
}


	// if(cyclepresentornot(head1)==true){
	// 	cout<<"cycle is present"<<endl;
	// }
	// else{
	// 	cout<<"cycle is not present"<<endl;

	// }


cyclecreate(head1,3);
breakcycle(head1);

printll(head1);






	

	return 0;
}
