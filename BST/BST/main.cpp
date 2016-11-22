#include <iostream>
#include <cstdlib>
#include "bst.h"
using namespace std;

int main() {

    BST tree;

    tree.Insert(10);
    tree.Insert(50);
    tree.Insert(40);
    tree.Insert(100);
    tree.Insert(5);
    tree.Insert(1);
    //tree.Insert(6);
    tree.PrintInOrder();

    cout << endl;

    cout << tree.getCount(20, 40) << endl;
    system("pause");
    return 0;
}

