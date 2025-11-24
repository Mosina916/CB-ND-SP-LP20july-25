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

// int lengthofll(node*head){
// 	node*temp=head;
// 	int co=0;
// 	while(temp!=NULL){
// 	temp=temp->next;
// 	co++;
// }

// return co;
// }


int lengthofll(node*head){
	node*temp=head;
	int co=0;
	while(temp!=NULL){
	temp=temp->next;
	co++;
}

return co;
}


int lenusingrec(node*head){
	if(head==NULL){
		return 0;
	}


	return 1+lenusingrec(head->next);
}
void insertinllatanyposinbetween(node*head,node*tail,int data,int pos){
	if(pos==0){
		insertinllatfront(head,tail,data);
	}
	else if(pos>=lengthofll(head)){
		insertinllattail(head,tail,data);
	}
	else{
		node*n=new node(data);
		node*temp=head;
		for (int jump = 1; jump <=pos-1;jump++)
		{
			temp=temp->next;
		}
		n->next=temp->next;
		temp->next=n;
	}
}

void deleteatanyposinbetween(node*head,node*tail,int pos){
	if(pos==0){
		deleteatfront(head,tail);
	}
	else if(pos-1>=lengthofll(head)){
		deleteattail(head,tail);
	}
	else{
		
		node*temp=head;
		for (int jump = 1; jump <=pos-1;jump++)
		{
			temp=temp->next;
		}
		node*x=temp->next;
		temp->next=temp->next->next;
		delete x;
		x=NULL;
	}
}


// bool searchinll(node*head,int key){


// 	while(head!=NULL){
// 	if(head->d==key){
// 		return true;

// 	}
// 	head=head->next;
// }

// return false;

// }


bool searchinllrec(node*head,int key){
	if(head==NULL){
		return false;
	}

	if(head->d==key){
		return true;

	}
	return searchinllrec(head->next,key);
}


void bubblesort(node*head){
	for(int j=1;j<=lengthofll(head)-1;j++){


	for(node*temp=head;temp->next!=NULL;temp=temp->next){
		if(temp->d>temp->next->d){
			swap(temp->d,temp->next->d);
			
		}
	}
	
}
}

// mid point runner technique
node* midpointll(node*head){
	node*sp=head;
	// node*fp=head;

	node*fp=head->next;



	while(fp!=NULL and fp->next!=NULL){
	sp=sp->next;
	fp=fp->next->next;
}

// 		while(fp->next!=NULL and   fp->next->next!=NULL ){
// 	sp=sp->next;
// 	fp=fp->next->next;
// }

return sp;


}


node* reverse(node*head){


	node*curr=head;
	node*prev=NULL;

	while(curr!=NULL){
	node*aagewalaptr=curr->next;
	curr->next=prev;
	prev=curr;
	curr=aagewalaptr;
}

return prev;
}


node* kthfromend(node*head,int k){

	node*x=head;
	node*y=head;

	for (int i = 1; i <=k; ++i)
	{
		x=x->next;
	}

	while(x!=NULL){
	x=x->next;
	y=y->next;
}
return y;

}

node* mergetwosortedllusingrec(node*head1,node*head2){
	if(head2==NULL){
		return head1;
	}
	if(head1==NULL){
		return head2;
	}

	if(head1->d<head2->d){
		node*newhead=head1;
		node*x=mergetwosortedllusingrec(head1->next,head2);
		newhead->next=x;
		return newhead;

	}
	else{
		node*newhead=head2;
		node*x=mergetwosortedllusingrec(head1,head2->next);
		newhead->next=x;
		return newhead;
	}
}

node* mergesort(node*head){
	if(head==NULL ||head->next==NULL){
		return head;
	}


	node*x=midpointll(head);
	node*temp=x->next;
	x->next=NULL;
	head=mergesort(head);
	temp=mergesort(temp);
	return mergetwosortedllusingrec(head,temp);

}



int main(){
	// using rec
	// head1-->2 4 6 8 10 13 15 
	// head2-->0 1 3 4 5 7

	node*head1=NULL;
	node*tail1=NULL;



	node*head2=NULL;
	node*tail2=NULL;
	int n;
	cin>>n;//7
	for (int i = 0; i <n; ++i)
	{
	
		int k;
		cin>>k;//2 4 6 8 10 13 15 
	insertinllattail(head1,tail1,k);
}


// 	int m;
// 	cin>>m;//6
// 	for (int i = 0; i <m; ++i)
// 	{
	
// 		int k;
// 		cin>>k;//0 1 3 4 5 7
// 	insertinllattail(head2,tail2,k);
// }






// node*h=mergetwosortedllusingrec(head1,head2);
node*h=mergesort(head1);
printll(h);
	


	

	return 0;
}
