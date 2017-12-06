#include "associative.h"

using namespace std;

associative::associative()
{
  root = NULL;
}

associative::~associative()
{

}

void associative::insert(string key, int data)
{
  if(root == NULL)
    root = new Node(value);
  else
    insertHelper(root, value);
}

void associative::insertHelper(Node *current, string value)
{
  if(value < current -> data)
    {
      if(current -> left == NULL)
	current -> left = new Node(value);
      else
	insertHelper(current -> left, value);
    }

  else
    {
      if(current -> right == NULL)
	current -> right = new Node(value);
      else
	insertHelper(current -> right, value);
    }
}
