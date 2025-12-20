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
node* buidbinarytree(){
	int data;
	cin>>data;;//-10
	if(data==-10){
		return NULL;
	}


	node*n=new node(data);
	n->left=buidbinarytree();
	n->right=buidbinarytree();

	return n;

}
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




int heightoftree(node*root){
	if(root==NULL){
		return 0;
	}

	return max(heightoftree(root->left),heightoftree(root->right))+1;
}

int diameter( node*root){
	if(root==NULL){
		return 0;
	}


	int op1=diameter(root->left);
	int op2=diameter(root->right);
	int op3=heightoftree(root->left)+heightoftree(root->right);
	return max(op1,max(op2,op3));
}


class Q{
	public:
	int h;
	int d;
	Q(){
		h=0;
		d=0;

	}
};

Q fastdiameterinon(node*root){
	Q z;
	if(root==NULL){
		return z;
	}

	Q x=fastdiameterinon(root->left);
	Q y=fastdiameterinon(root->right);

	z.h=max(x.h,y.h)+1;
	int op1=x.d;
	int op2=y.d;
	int op3=x.h+y.h;
	z.d=max(op1,max(op2,op3));
	return z;

}

// 8 10 1 -10 -10 6 4 -10 -10 7 -10 -10 3 -10 14 13 -10 -10 -10
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



node* levelwisebuild(){
	cout<<"take data of root"<<endl;
	int data;
	cin>>data;//8

	node*root=new node(data);
	queue<node*> q;
	q.push(root);

	while(!q.empty()){

	node*x=q.front();//10
	q.pop();

	cout<<"take left and right child of "<<x->d<<endl;
	int lch,rch;
	cin>>lch>>rch;//-1 14

	if(lch!=-1){
	x->left=new node(lch);
	q.push(x->left);
}
	
	if(rch!=-1){

	x->right=new node(rch);
	q.push(x->right);
}


}


return root;




}


int main(){

	node* root=levelwisebuild();


	// node*root=buidbinarytree();//700


	// cout<<fastdiameterinon(root).d<<endl;

	levelwiseprint(root);


	
	
	

	return 0;
}
