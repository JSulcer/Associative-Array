#ifndef NODE_H
#define NODE_H

#include <string>
#include <iostream>

class Node
{
 public:
  Node(std::string value);
  virtual ~node();

 private:
  Node *left, *right;
  std::string key;
  int data;
};

#endif // NODE_H
