#pragma once
#include "stdafx.h"

using namespace std;

struct BinaryTreeNode
{
public:

	BinaryTreeNode(char key, int freq, BinaryTreeNode* left, BinaryTreeNode* right); //creating constructor for a node
	~BinaryTreeNode();
	//functions declarations
	char get_key(void);
	int get_freq(void);
	BinaryTreeNode* get_left(void);
	BinaryTreeNode* get_right(void);
	
	//private data members declararions
private:
	char key;
	int freq;
	BinaryTreeNode* left;
	BinaryTreeNode* right;

};