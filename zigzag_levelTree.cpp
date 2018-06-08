#include<iostream>  //O(n^2)
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
int height(node*root){
	if(root==NULL){
		return 0;
	}
	int h1 = height(root->left);
	int h2 = height(root->right);
	return max(h1,h2) + 1;
}
void printGivenLevel(node *root,int level,bool ltr)  //Recursive method
{
if(root==NULL)  return;
if (level == 1)
   cout<<root->data<<" ";
else if (level > 1)
{
    if(ltr)
    {


        printGivenLevel(root->right, level-1, ltr);
        printGivenLevel(root->left, level-1, ltr);
    }
    else
        {

        printGivenLevel(root->left, level-1, ltr);
         printGivenLevel(root->right, level-1, ltr);
         }
}
}

void printSpiral(node *root)
{
  bool ltr = 0;
  for (int d=1;d<=height(root);d++)
  {
     printGivenLevel(root, d, ltr);
     ltr = ~ltr ;/*flip ltr*/
  }

}




int main()
{
node *root=NULL;
root=buildTree(root);
printSpiral(root);



}
