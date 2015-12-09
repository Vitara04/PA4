//Author: Alexis Spahn
//Date: 12/04/15

#include <string>
#include <cstdlib>
#include <vector>
using namespace std;
#ifndef TREENODE_H
#define TREENODE_H


class TreeNode {
private:
	string value;	//may change type
	TreeNode* left;	//point to left, NULL if no left
	TreeNode* right; //same, NULL if no right
	
	public:
	//member functions
	friend class Tree;

};


//cla


#endif
