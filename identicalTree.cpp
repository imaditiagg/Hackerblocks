#include<iostream>

using namespace std;
//static int count=0;

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
void  buildTree(node *&root){
	int data;
	string left,right;
	cin>>data;
    root = new node(data);
    cin>>left;
    if(left=="true")
    {
        buildTree(root->left);
	}
	else
    {
		root->left= NULL;
	}
	cin>>right;
	if(right=="true")
        buildTree(root->right);
    else
        root->right=NULL;
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


bool identical(node *root1,node *root2) //check whether two tree are identical
{
    if(root1==NULL && root2==NULL)
        return true ;
    if(root1!=NULL && root2!=NULL)
    return((root1->data==root2->data) && identical(root1->left,root2->left) && identical(root1->right,root2->right));

    return false;

}



int main()
{

node *root1=NULL;
buildTree(root1);
printTree(root1);
node *root2=NULL;
buildTree(root2);
printTree(root2);

int i=identical(root1,root2);
if(i!=0)
    cout<<"true";
else cout<<"false";
return 0;
}





