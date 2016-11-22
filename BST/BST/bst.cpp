#include <iostream>
#include <cstdlib>
#include "bst.h"
using namespace std;

BST::BST() {
    root = NULL;
}

BST::node* BST::CreateNode(int key) {
    node* temp = new node();
    temp->value = key;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void BST::Insert(int key) {
    InsertPrivate(root, key);
}

void BST::PrintInOrder() {
    PrintInOrderPrivate(root);
}

void BST::InsertPrivate(node* ptr, int key) {
    if (root == NULL) {
        root = CreateNode(key);
    }
    else if(ptr->value > key){
        if (ptr->left != NULL) {
            InsertPrivate(ptr->left, key);
        }
        else {
            ptr->left = CreateNode(key);
        }
    }
    else if (ptr->value < key) {
        if (ptr->right != NULL) {
            InsertPrivate(ptr->right, key);
        }
        else {
            ptr->right = CreateNode(key);
        }
    }
    else {
        cout << key << " already added." << endl;
    }

}

void BST::PrintInOrderPrivate(node* ptr) {
    if (root == NULL) {
        cout << "Empty tree." << endl;
    }
    else {
        if (ptr->left != NULL) {
            PrintInOrderPrivate(ptr->left);
        }
        cout << ptr->value << " ";
        if (ptr->right != NULL) {
            PrintInOrderPrivate(ptr->right);
        }
    }
    
}

bool BST::getCountUtilPrivate(node* root, int low, int high, int *count)
{
    // Base case
    if (root == NULL)
        return true;

    // Recur for left and right subtrees
    bool l = (root->left != NULL) ? getCountUtilPrivate(root->left, low, high, count) : true;
    bool r = (root->right != NULL) ? getCountUtilPrivate(root->right, low, high, count) : true;


    // If both left and right subtrees are in range and current node
    // is also in range, then increment count and return true
    if (l && r && root->value >= low && root->value <= high)
    {
        *count += 1;
        return true;
    }

    return false;
}

void BST::getCountUtil(int low, int high, int *count) {
    getCountUtilPrivate(root, low, high, count);
}

int BST::getCountPrivate(node *root, int low, int high)
{
    int count = 0;
    getCountUtilPrivate(root, low, high, &count);
    return count;
}

int BST::getCount(int low, int high) {
    return getCountPrivate(root, low, high);
}

bool BST::inRange(node *root, int low, int high)
{
    return root->value >= low && root->value <= high;
}