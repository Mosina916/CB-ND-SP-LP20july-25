#include<iostream>
using namespace std;
class node{
	public:
	int d;
	node*next;

	node(int dat){
		next=NULL;
		d=dat;

	}
};


void insertinllatfront(node*&head,node*&tail,int data){

	if(head==NULL and tail==NULL){

	node*n=new node(data);//
	head=n;
	tail=n;
}

else{
	node*n=new node(data);//
	// (*n).next=head;
	n->next=head;
	head=n;

}
}


// void printll(node*head){
// 	node*temp=head;
// 	while(temp!=NULL){
// 	cout<<temp->d<<" ";
// 	temp=temp->next;
// }

// }


void printll(node*head){
	
	while(head!=NULL){
	cout<<head->d<<" ";
	head=head->next;
}

cout<<endl;

}


// void f(int a,int b){
// 	a=a+90;
// 	b=b+80;
// 	cout<<a<<endl;
// 	cout<<b<<endl;
// }

void insertinllattail(node*&head,node*&tail,int data){

	if(head==NULL and tail==NULL){

	node*n=new node(data);//
	head=n;
	tail=n;
}

else{
	node*n=new node(data);
	tail->next=n;
	tail=n;


}
}


void deleteatfront(node*&head,node*&tail){
	// ll is empty
	if(head==NULL){
		return;
	}
	else if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;

	}
	else{
		// multiple nodes
		node*temp=head;
		head=head->next;
		delete temp;
		temp=NULL;


	}
}


void deleteattail(node*&head,node*&tail){
	// ll is empty
	if(head==NULL){
		return;
	}
	else if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;

	}
	else{
		// multiple nodes
		node*temp=head;
		while(temp->next!=tail){
		temp=temp->next;//100
	}

	delete tail;
	tail=temp;
	tail->next=NULL;


	}
}

int main(){

	node*head=NULL;
	node*tail=NULL;

	insertinllatfront(head,tail,40);
	insertinllatfront(head,tail,50);
	insertinllatfront(head,tail,90);
	insertinllatfront(head,tail,60);


	insertinllattail(head,tail,45);
	insertinllattail(head,tail,95);
	deleteatfront(head,tail);
	deleteattail(head,tail);
	deleteattail(head,tail);

	printll(head);
	// printll(head);



	// int a=10;
	// int b=40;
	// f(a,b);

	// cout<<a<<endl
	// cout<<b<<endl;

	

	return 0;
}
