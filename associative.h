#ifndef ASSOCIATIVE_H
#define ASSICIATIVE_H

#include <iostream>
#include <string>
#include "node.h"

class associative
{
 public:
  associative();
  virtual ~associative();
  void insert(std::string key, int data);
  /*
   * Description: 
   *   Inserts new value into the associative array.
   *
   * Inputs:
   *   key:
   *     The key for the new data.
   *   data:
   *     The data to be inserted.
   * 
   */
  
  void find(std::string key);
  /*
   * Description: 
   *   Finds and prints the value for the given key.
   *
   * Inputs:
   *   key:
   *     The key for the value you want to find.
   * 
   */
  
  void print();
  /*
   * Description: 
   *   Prints the contents of the associative array in order (sorted by key) to the user as (key, value) pairs.
   *
   *  
   */
  
  void min();
  /*
   * Description: 
   *   Finds and prints the smallest (leftmost) key in the tree.
   * 
   */
  
  void max();
  /*
   * Description: 
   *   Imports the data from the given file into a database.
   *
   * Inputs:
   *   fileName:
   *     The name of the file with student data.
   * 
   */
  
  void save_file(std::string fileName);
  /*
   * Description: 
   *   Stores the contents of the tree in order in a file.
   *
   * Inputs:
   *   fileName:
   *     The name of the file to store the data in.
   * 
   */
  
  void delete_index(std::string key);
  /*
   * Description: 
   *   Removes the first instance of the value from the associative array.
   *
   * Inputs:
   *   key:
   *     The value you want to delete..
   * 
   */

 private:
  Node *root;
  void insertHelper(Node *current, std::string value);
};

#endif // ASSOCIATIVE_H
