#include "node.h"

using namespace std;

Node::Node(string value)
{
  left = NULL;
  right = NULL;
  key  = value;
  data = 0;
}

Node::~Node()
{

}
