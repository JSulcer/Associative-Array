#include "node.h"

using namespace std;

node::node(string value)
{
  left = NULL;
  right = NULL;
  key  = value;
  data = 0;
}

node::~node()
{

}
