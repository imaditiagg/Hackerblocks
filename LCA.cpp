#include<iostream>

using namespace std;
static int count=0;

class node{
public:
	int data;
	node*left;
	node*right;

	node(int d){
		data = d;
		left = right = NULL;
	}
};
node* buildTree(node *root){
	int data;
	string value="true";
	if(count>0)
    cin>>value;

    count++;
    if(value=="true")
    {
        cin>>data;
		root = new node(data);
		root->left = buildTree(root->left);
		root->right = buildTree(root->right);
		return root;
	}
	else
    {
		return NULL;
	}
}
void printTree(node *root){
	//Preorder
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	printTree(root->left);
	printTree(root->right);
}

node* LCA(node *root,int a,int b)
{
    if(root==NULL)
        return NULL;
    if(root->data==a||root->data==b)
        return root;

    node *left=LCA(root->left,a,b);
    node *right=LCA(root->right,a,b);

    if(left && right)
        return root;

    if(left)
        return left;

    return right;
}


int main(){

	node *root = NULL;
	root=buildTree(root);
	printTree(root);

	int a,b;
	cin>>a;
	cin>>b;

	node* l=LCA(root,a,b);
	cout<<l->data;

	return 0;
}
