#pragma once
class BST {

private:

    struct node {
        int value;
        node* left;
        node* right;
    };

    node* root;

    node* CreateNode(int key);
    void InsertPrivate(node* ptr, int key);
    void PrintInOrderPrivate(node* ptr);
    bool getCountUtilPrivate(node* root, int low, int high, int *count);
    int getCountPrivate(node *root, int low, int high);
public:

    BST();
    //void CreateNode();
    void Insert(int key);
    void PrintInOrder();
    void getCountUtil(int low, int high, int *count);
    int getCount(int low, int high);
    bool inRange(node *root, int low, int high);
};