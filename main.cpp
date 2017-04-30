#include "Node.h"
#include "Stack.h"
#include "Queue.h"
#include "Tree.h"

int main() {

  Tree t;
  t.insert(8);
  t.insert(9);
  t.insert(5);
  t.insert(11);
  t.insert(3);
  t.insert(7);
  t.insert(10);
  
  t.display();

  if (t.isBST()) std::cout << "Tree is BST" << std::endl;
  	else std::cout << "Tree is not BST" << std::endl;
  
  if (t.isBalanced()) std::cout << "Tree is balanced" << std::endl;
	else std::cout << "Tree is not balanced" << std::endl;

}
