#include<iostream>
#include<queue>
using namespace std;
class node{
	public:
	int d;
	node*left;
	node*right;

	node(int data){
		d=data;
		left=NULL;
		right=NULL;
	}

};
// node* buidbinarytree(){
// 	int data;
// 	cin>>data;;//-10
// 	if(data==-10){
// 		return NULL;
// 	}


// 	node*n=new node(data);
// 	n->left=buidbinarytree();
// 	n->right=buidbinarytree();

// 	return n;

// }
void preorderprint(node*root){
	if(root==NULL){
		return;
	}
	cout<<root->d<<" ";
	preorderprint(root->left);
	preorderprint(root->right);

}

void inorderprint(node*root){
	if(root==NULL){
		return;
	}
	
	inorderprint(root->left);
	cout<<root->d<<" ";
	inorderprint(root->right);

}

void postorderprint(node*root){
	if(root==NULL){
		return;
	}
	
	postorderprint(root->left);
	
	postorderprint(root->right);
	cout<<root->d<<" ";

}
node* insertainbst(node*root,int da){//300 3 
	if(root==NULL){
		root=new node(da);
		// return root;
	}
	else if(da<root->d){
		root->left=insertainbst(root->left,da);
		// return root;

	}
	else{
		root->right=insertainbst(root->right,da);
		// return root;

	}
	return root;

}

node* buildbst(){
	node*root=NULL;
	int da;
	cin>>da;
	while(da!=-1){
	
	root=insertainbst(root,da);//300 3
	cin>>da;//14
}
return root;

}


bool searchintree(node*root,int key){
	if(root==NULL){
		return false;
	}

	if(root->d==key ||searchintree(root->left,key)||searchintree(root->right,key)){

		return true;
	}

	return false;


}


void printintreefromk1tok2(node*root,int k1,int k2){
	if(root==NULL){
		return;
	}

	printintreefromk1tok2(root->left,k1,k2);
	if(root->d>=k1 and root->d<=k2){
		cout<<root->d<<" ";
	}
	printintreefromk1tok2(root->right,k1,k2);
}


void levelwiseprint(node*root){

	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
	node*x=q.front();//3
	q.pop();
	if(x==NULL){
		cout<<endl;
		if(!q.empty()){
		q.push(NULL);

	}
	}
	else{



	cout<<x->d<<" ";
	if(x->left!=NULL){
	q.push(x->left);
}
	if(x->right!=NULL){
	q.push(x->right);
}
}
}

}
// o(n*n)
// bool isbalanced(node*root){
// 	if(root==NULL){
// 		return true;
// 	}

// 	int x=height(root->left);
// 	int y=height(root->right);
// 	if(abs(x-y)<=1 and isbalanced(root->left) and isbalanced(root->right)){
// 		return true;
// 	}
// 	return false;
// }

class linkedl{
public:
	node*h;
	node*t;
	linkedl(){
		h=NULL;
		t=NULL;
	}

};

linkedl flattentree(node*root){
	linkedl a;
	if(root==NULL){
		return a;
	}


	// case 1 lst and rst are null
	if(root->left==NULL and root->right==NULL){
		a.h=root;
		a.t=root;
		// return a;
	}

	// case 2 lst and ! rst 
	else if(root->left!=NULL and root->right==NULL){
		
		linkedl x=flattentree(root->left);
		x.t->right=root;//link create
		a.h=x.h;
		a.t=root;
		// return a;

	}
	// case 3 !lst and rst hai
	else if(root->left==NULL and root->right!=NULL){
		
		linkedl y=flattentree(root->right);
		root->right=y.h;//link create
		a.h=root;
		a.t=y.t;
		// return a;


	}
	// case 4 lst and rst are present
	else{
		linkedl x=flattentree(root->left);
		linkedl y=flattentree(root->right);
		x.t->right=root;
		root->right=y.h;
		a.h=x.h;
		a.t=y.t;
		// return a;

	}
	return a;



}

void printll(node*head){

	while(head!=NULL){
	cout<<head->d<<" ";
	head=head->right;
}

}

node* deleteinbst(node*root,int key){
	if(root==NULL){
		return NULL;
	}



	if(root->d==key){
		// case 1 -->!lst !rst
		if(root->left==NULL and root->right==NULL){
			delete root;
			root=NULL;
			return root;

		}
		// case 2 -->lst !rst
		else if(root->left!=NULL and root->right==NULL){
			node*temp=root->left;
			delete root;
			root=temp;
			return root;

		}

		// case =3 -->!lst rst
		else if(root->left==NULL and root->right!=NULL){
			node*temp=root->right;
			delete root;
			root=temp;
			return root;

		}
		// case 4 -->lst rst
		else{
			node*temp=root->left;
			while(temp->right!=NULL){
				temp=temp->right;

			}
			swap(root->d,temp->d);
			root->left=deleteinbst(root->left,key);
			return root;
		}

	}
	else if(key<root->d){
		root->left=deleteinbst(root->left,key);
		return root;

	}
	else{
		root->right=deleteinbst(root->right,key);
		return root;

	}
}

void leftview(node*root,int curr,int &abhitaklevl){
	if(root==NULL){
		return;
	}

	if(curr>abhitaklevl){
		cout<<root->d<<" ";
		abhitaklevl++;
	}
	leftview(root->left,curr+1,abhitaklevl);
	leftview(root->right,curr+1,abhitaklevl);

}
void rightview(node*root,int curr,int &abhitaklevl){
	if(root==NULL){
		return;
	}

	if(curr>abhitaklevl){
		cout<<root->d<<" ";
		abhitaklevl++;
	}
	rightview(root->right,curr+1,abhitaklevl);
	rightview(root->left,curr+1,abhitaklevl);
	

}

int main(){
	node* root=buildbst();
	levelwiseprint(root);
	// linkedl z=flattentree(root);
	// printll(z.h);


	// root=deleteinbst(root,8);
	// levelwiseprint(root);

	int x=0;
	leftview(root,1,x);

	// cout<<isbal(root)<<endl;
	
	

	
	

	return 0;
}
