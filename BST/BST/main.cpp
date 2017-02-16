#include <iostream>
#include <cstdlib>
#include "bst.h"
using namespace std;

int main() {

    BST tree;

    tree.Insert(5);
    tree.Insert(3);
    tree.Insert(8);
    tree.Insert(1);
    tree.Insert(4);
    tree.Insert(7);
    tree.Insert(9);
    tree.PrintInOrder();

    cout << endl;

    //cout << tree.getCount(20, 40) << endl;
	cout << tree.getCommonAncestor(2, 9) << endl;
    system("pause");
    return 0;
}

