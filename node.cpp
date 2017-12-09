// Authors: Jon Sulcer and Adam Chisolm
// Date: 12/8/17
// File: node.cpp
// Description: The implementation of a Node.

#include "node.h"

using namespace std;

Node::Node(string value, int num)
{
    left = NULL;
    right = NULL;
    key  = value;
    data = num;
}

Node::~Node()
{

}
