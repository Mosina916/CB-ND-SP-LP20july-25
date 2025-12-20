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
bool isbalanced(node*root){
	if(root==NULL){
		return true;
	}

	int x=height(root->left);
	int y=height(root->right);
	if(abs(x-y)<=1 and isbalanced(root->left) and isbalanced(root->right)){
		return true;
	}
	return false;
}

class Q{
public:
	int h;
	bool isbal;
	Q(){
		h=0;
		isbal=true;
	}
};

Q isbalon(node*root){
	Q z;
	if(root==NULL){
		return z;
	}

	Q x=isbalon(root->left);
	Q y=isbalon(root->right);
	z.h=max(x.h,y.h)+1;

	if(abs(x.h-y.h)<=1 and x.isbal and y.isbal){
		z.isbal=true;
	}
	else{
	
		z.isbal=false;
	}
	

	return z;


}

int main(){
	node* root=buildbst();
	levelwiseprint(root);
	cout<<isbal(root)<<endl;
	// int key;
	// cin>>key;
	// cout<<searchintree(root,key)<<endl;

	// int k1,k2;
	// cin>>k1>>k2;
	// printintreefromk1tok2(root,k1,k2);


	

	
	

	return 0;
}
