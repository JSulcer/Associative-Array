#ifndef NODE_H
#define NODE_H

#include <string>
#include <iostream>

class Node
{
    friend class associative;

    public:
        Node(std::string value, int num);
        virtual ~Node();

    private:
        Node *left, *right;
        std::string key;
        int data;
};

#endif // NODE_H
