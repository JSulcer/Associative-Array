#inndef ASSOCIATIVE_H
#define ASSICIATIVE_H

#include <iostream>
#include <string>
#include "node.h"

class associative;
{
 public:
  associative();
  virtual associative();
  void insert(std::string key, int data);
  void find(std::string key);
  void print();
  void min();
  void max();
  void save_file();
  void delete(std::string key);

 private:
  Node *root;
  void insertHelper(Node *current, std::string value);
};

#endif // ASSOCIATIVE_H
