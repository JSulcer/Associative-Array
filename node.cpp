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
