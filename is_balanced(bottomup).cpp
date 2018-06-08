#include<iostream>   //(Bottom up approach)
#include<queue>
#include<string>
#include<cmath>
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



class Pair{
    public:
int height;
bool value;


};


Pair is_balanced(node *root)
{
Pair p;
if(root==NULL)
{

p.height=p.value=0;
return p;

}

Pair left=is_balanced(root->left);
Pair right=is_balanced(root->right);

p.height= max(left.height,right.height)+1;
 if(abs(left.height - right.height) <= 1)
       p.value=1;


else p.value=0;

return p;
}

int main()
{
    node *root=NULL;
    root=buildTree(root);
    Pair p = is_balanced(root);
    if(p.value!=0)
        cout<<true;
    else cout<<false;
return 0;
}










