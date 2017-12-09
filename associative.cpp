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
    string testValue = value;
    string testKey = current -> key;
    for(unsigned int i = 0; i < value.length(); i++)
      tolower(testValue[i]);
    for(unsigned int i = 0; i < testKey.length(); i++)
      tolower(testKey[i]);
      
    if(testValue < testKey)
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

void associative::delete_index(string value)
{
    deleteHelper(root, value);
}

void associative::deleteHelper(Node *&current, string value)
{
  if(current == NULL)
    return;

  else if(value < current -> key)
    deleteHelper(current -> left, value);

  else if (current -> key < value)
    deleteHelper(current -> right, value);

    else
      {
	Node *temp;

	if(current -> left == NULL)
	  {
	    temp = current -> right;
	    delete current;
	    current = temp;
	  }

	else if(current -> right == NULL)
	  {
	    temp = current -> left;
	    delete current;
	    current = temp;
	  }

	else
	  {
	    temp = current -> right;
	    Node *parent = NULL;

	    while(temp -> left != NULL)
	      {
		parent = temp;
		temp = temp -> left;
	      }

	    current -> key = temp -> key;
	    current -> data = temp -> data;

	    if(parent != NULL)
	      deleteHelper(parent -> left, parent -> left -> key);
	    else
	      deleteHelper(current -> right, current -> right -> key);
	  
	  }
      }
}

void associative::min()
{
    minHelper(root);
}

void associative::minHelper(Node* current)
{
    if (current -> left != NULL)
    {
        minHelper(current -> left);
    }
    else
    {
        cout << "Min: " << current -> key << endl;
    }
}

void associative::max()
{
    maxHelper(root);
}

void associative::maxHelper(Node* current)
{
    if (current -> right != NULL)
    {
        maxHelper(current -> right);
    }
    else
    {
        cout << "Max: " << current -> key << endl;
    }
}

void associative::save_file(string fileName)
{
    ofstream saveFile;
    saveFile.open(fileName.c_str());
    
    saveHelper(root, saveFile);
    
    saveFile.close();
}

void associative::saveHelper(Node *current, ofstream& saveFile)
{
    if(current != NULL)
    {
        saveHelper(current -> left, saveFile);
        saveFile << current -> key << " " << current -> data << "\n";
        saveHelper(current -> right, saveFile);
    }
}

void associative::find(string value)
{
    findHelper(root, value);
}

void associative::findHelper(Node *current, string value)
{
    if(current -> key > value && current -> left != NULL)
    {
        findHelper(current -> left, value);
    }
    else if (current -> key < value && current -> right != NULL)
    {
        findHelper(current -> right, value);
    }
    else if (value.compare(current->key) == 0)
    {
        cout << current -> data << endl;
    }
}

void associative::import(string fileName)
{
    string word;
    ifstream readFile;
    readFile.open(fileName.c_str());
    
    readFile >> word;
    
    while (readFile)
    {
        importInsert(word);
        readFile >> word;
    }
    
    readFile.close();
}
void associative::importInsert(string value)
{
    if(root == NULL)
        root = new Node(value, 1);
    else
        importInsertHelper(root, value);
}

void associative::importInsertHelper(Node *current, string value)
{
    string testValue = value;
    string testKey = current -> key;
    for(unsigned int i = 0; i < value.length(); i++)
    {
      tolower(testValue[i]);
      if(testValue < a || testValue > z)
        testValue.erase(i);
    }
    for(unsigned int i = 0; i < testKey.length(); i++)
    {
      tolower(testKey[i]);
      if(testKey < a || testKey > z)
      	testKey.erase(i);
    }
    
    if (testValue.compare(testKey) == 0)
    {
        current->data += 1;
    }  
    else if(testValue < testKey)
    {
        if(current -> left == NULL)
            current -> left = new Node(value, 1);
    else
      importInsertHelper(current -> left, value);
    }

    else
    {
        if(current -> right == NULL)
            current -> right = new Node(value, 1);
        else
            importInsertHelper(current -> right, value);
    }
}
