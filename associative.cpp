#include "associative.h"

using namespace std;

associative::associative()
{
    root = NULL;
}

associative::~associative()
{

}

void associative::insert(string value, int num)
{
    if(root == NULL)
        root = new Node(value, num);
    else
        insertHelper(root, value, num);
}

void associative::insertHelper(Node *current, string value, int num)
{
    if(value < current -> key)
    {
        if(current -> left == NULL)
            current -> left = new Node(value, num);
    else
        insertHelper(current -> left, value, num);
    }

    else
    {
        if(current -> right == NULL)
            current -> right = new Node(value, num);
        else
            insertHelper(current -> right, value, num);
    }
}

void associative::print()
{
    printHelper(root);
    cout << endl;
}

void associative::printHelper(Node *current)
{
    if(current != NULL)
    {
        printHelper(current -> left);
        cout << current -> key << " " << current -> data << ", ";
        printHelper(current -> right);
    }
}
