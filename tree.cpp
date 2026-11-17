#include <iostream>
using namespace std;
// struct Node {
//     char data;
//     Node* left;
//     Node* right;
// };
// Node* makeNode(char data) {
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->left = nullptr;
//     newNode->right = nullptr;
//     return newNode;
// }
// void preorder(Node* root) {
//     if(root==nullptr)
//     return;
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void inorder(Node*root) {
//     if (root==nullptr)
//         return;
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }
// void postorder(Node* root) {
//     if (root == nullptr)
//         return;
//     postorder(root->left);
//     postorder(root->right);
//     cout << root->data << " ";
// }
// int main() {
//     Node* root = makeNode('A');
//     root->left = makeNode('B');
//     root->right = makeNode('C');
//     root->left->left = makeNode('D');
//     root->left->right = makeNode('E');
//     root->right->left = makeNode('F');
//     root->right->right = makeNode('G');
//     cout << "Preorder traversal: ";
//     preorder(root);
//     cout << endl;
//     cout << "Inorder traversal: ";
//     inorder(root);
//     cout << endl;
//     cout << "Postorder traversal: ";
//     postorder(root);
//     cout << endl;
//     return 0;
// }










//     int countnodes(Node* tree) {         //countofnodes
//     if (tree == nullptr)
//         return 0;
//     return 1 + countnodes(tree->left) + countnodes(tree->right);
// }
// int main() {
//     Node* root = makeNode('A');
//     root->left = makeNode('B');
//     root->right = makeNode('C');
//     root->left->left = makeNode('D');
//     root->left->right = makeNode('E');
//     root->right->left = makeNode('F');
//     root->right->right = makeNode('G');
//     cout << "Number of nodes in the tree: " << countnodes(root) << endl;

//     return 0;
// }








// int countleaf(Node*tree)             //countofleaf
// {
//     if(tree==NULL)
//     return 0;
//     if(tree->left==NULL && tree->right==NULL)
//     return 1;
//     return countleaf(tree->left)+countleaf(tree->right);
// }
// int main() {
//     Node* root = makeNode('A');
//     root->left = makeNode('B');
//     root->right = makeNode('C');
//     root->left->left = makeNode('D');
//     root->left->right = makeNode('E');
//     root->right->left = makeNode('F');
//     root->right->right = makeNode('G');
//     cout << "Number of leaf in the tree: " << countleaf(root) << endl;
//     return 0;
// }










// int countN2(Node*tree)
// {
//     if(tree==NULL)
//     return 0;
//     if(tree->left==NULL && tree->right==NULL)
//     return 0;
//     if(tree->left!=NULL && tree->right!=NULL)
//     return 1+countN2(tree->left)+countN2(tree->right);

//     return countN2(tree->left)+countN2(tree->right);
// }
// int main() {
//     Node* root = makeNode('A');
//     root->left = makeNode('B');
//     root->right = makeNode('C');
//     root->left->left = makeNode('D');
//     root->left->right = makeNode('E');
//     root->right->left = makeNode('F');
//     root->right->right = makeNode('G');
//     cout << "Number of Node in the tree: " << countN2(root) << endl;
//     return 0;
// }









// int countN1(Node*tree)
// {
//     if(tree==NULL)
//     return 0;
//     if(tree->left==NULL && tree->right==NULL)
//     return 0;
//     if(tree->left!=NULL && tree->right!=NULL)
//     return countN1(tree->left)+countN1(tree->right);

//     return 1+countN1(tree->left)+countN1(tree->right);
// }
// int main() {
//     Node* root = makeNode('A');
//     root->left = makeNode('B');
//     root->right = makeNode('C');
//     root->left->left = makeNode('D');
//     root->left->right = makeNode('E');
//     root->right->left = makeNode('F');
//     root->right->right = makeNode('G');
//     cout << "Number of Node in the tree: " << countN1(root) << endl;
//     return 0;
// }







// int completenode(Node* tree) {
//     if (tree == nullptr)
//         return 0;
//     if (tree->left != nullptr && tree->right != nullptr)
//         return 1 + completenode(tree->left) + completenode(tree->right);
//     return completenode(tree->left) + completenode(tree->right);
// }
// int main() {
//     Node* root = makeNode('A');
//     root->left = makeNode('B');
//     root->right = makeNode('C');
//     root->left->left = makeNode('D');
//     root->left->right = makeNode('E');
//     root->right->left = makeNode('F');
//     root->right->right = makeNode('G');
//     cout << "Number of complete nodes in the tree: " << completenode(root) << endl;
//     return 0;
// }



