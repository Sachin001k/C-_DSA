#include<iostream>
#include<vector>
#include<string>
using namespace std;
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};


class Solution {
  public:
    void traverseLeft(Node* root, vector<int> &ans){
        //base case
        if(root == NULL ||(root->left == NULL && root->right ==NULL)){
            return;
        }
        
        ans.push_back(root->data);
        if(root->left){
            traverseLeft(root->left,ans);
        }
        else{
            traverseLeft(root->right,ans);
        }
    }
    
    void traverseLeaf(Node* root, vector<int> &ans){
        //base cae
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            ans.push_back(root->data);
            return;
        }
        //left and right travel
        traverseLeaf(root->left,ans);
        traverseLeaf(root->right,ans);
        
    }
    
    //traverse right
    void traverseRight(Node* root, vector<int> &ans){
        //base case
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            return;
        }
        if(root->right){
            traverseRight(root->right,ans);
        }
        else{
            traverseRight(root->left,ans);
        }
        ans.push_back(root->data);
    }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        if(root ==NULL){
            return {};
        }
        vector<int> ans;
        ans.push_back(root->data);
        
        //left traverse
        traverseLeft(root,ans);
        
        //leaf data of left
        traverseLeaf(root->left,ans);
        
        //leaf data of right
        traverseLeaf(root->right,ans);
        
        //right traverse in reverse direction
        traverseRight(root,ans);
        
        return ans;
    }
};


int main(){

    
}