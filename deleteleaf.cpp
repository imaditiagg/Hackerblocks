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
node* delete_leaf(node *root)
{
    if(root==NULL)
        return NULL;
    if(root->left==NULL && root->right==NULL){
			delete root;
			return NULL;
		}

	root->left=delete_leaf(root->left);
	root->right=delete_leaf(root->right);
return root;
}
void printTree(node *root)
{
	//Preorder
	if(root==NULL)
    {
		return;
	}

	else if(root->left==NULL && root->right==NULL)
	cout<<"END"<<" => "<<root->data<<" <= "<<"END"<<endl;

    else if(root->left!=NULL && root->right==NULL)
	cout<<root->left->data<<" => "<<root->data<<" <= "<<"END"<<endl;

    else if(root->left==NULL && root->right!=NULL)
	cout<<"END"<<" => "<<root->data<<" <= "<<root->right->data<<endl;

    else
    cout<<root->left->data<<" => "<<root->data<<" <= "<<root->right->data<<endl;

	printTree(root->left);
	printTree(root->right);
}
int main(){

	node *root = NULL;
	root=buildTree(root);
	//printTree(root);

	root=delete_leaf(root);
	printTree(root);
	return 0;
}
