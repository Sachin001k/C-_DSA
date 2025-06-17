#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    //constructor
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};


Node* insertIntoBST(Node* &root, int d){
    //base case
    if(root == NULL){
        root = new Node(d);
        return root;
    }
    //left insertion
    if(root->data > d){
        root->left = insertIntoBST(root->left,d);
    }
    else{
        root->right = insertIntoBST(root->right,d);
    }
    return root;

}
void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data == -1){
        root = insertIntoBST(root,data);
        cin>>data;
    }
}
void levelOrderTraversal(Node* &root){
    //store in quwuw
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* front = q.front();
        q.pop();
        //printing
        if(front == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{

            cout<<front->data<<" ";

            if(root->left){
                q.push(root->left);
            }
            //right traversal
            if(root->right){
                q.push(root->right);
            }
        }
    }

}

int main(){
    //object creating
    Node* root = NULL;
    cout<<"enter data in BST:" <<endl;
    takeInput(root);
    //printing data using level order traversal
    cout<<"level order traversal: "<<endl;
    levelOrderTraversal(root);
}