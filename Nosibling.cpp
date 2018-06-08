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


void Nosibling(node *root)
{
    if(root->left==NULL && root->right==NULL)
        return;
    if(root->left!=NULL && root->right==NULL)
        cout<<root->left->data;
    if(root->right!=NULL && root->left==NULL)
        cout<<root->right->data;

    Nosibling(root->left);
    Nosibling(root->right);
}


int main()
{
node *root=NULL;
root=buildTree(root);

Nosibling(root);
return 0;



}
