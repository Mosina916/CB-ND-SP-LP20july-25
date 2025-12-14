#include<iostream>
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


int countnodes(node*root){
	if(root==NULL){
		return 0;
	}

	return countnodes(root->left)+countnodes(root->right)+1;
}

int sumnodes(node*root){
	if(root==NULL){
		return 0;
	}

	return sumnodes(root->left)+sumnodes(root->right)+root->d;
}


int heightoftree(node*root){
	if(root==NULL){
		return 0;
	}

	return max(heightoftree(root->left),heightoftree(root->right))+1;
}


void mirror(node*root){
	if(root==NULL){
		return;
	}

	swap(root->left,root->right);
	mirror(root->left);
	mirror(root->right);

}



int main(){


	node*root=buidbinarytree();//700


	preorderprint(root);
	cout<<endl;
	inorderprint(root);
	cout<<endl;
	postorderprint(root);

	cout<<countnodes(root)<<endl;
	cout<<sumnodes(root)<<endl;
	cout<<heightoftree(root)<<endl;



	
	

	return 0;
}
