#include "stdafx.h"
#include "BinaryTree.h"
#include "BinaryTreeNode.h"

int main(void)
{
	BinaryTree* myObject = new BinaryTree;	//creation of dynamic object
	
    ///////////////////////TEST DATA////////////////////////////
	BinaryTreeNode* n0 = new BinaryTreeNode('A', 2, NULL, NULL); //populating nodes
	BinaryTreeNode* n1 = new BinaryTreeNode('B', 4, NULL, NULL);
	BinaryTreeNode* n3 = new BinaryTreeNode('C', 6, NULL, NULL);
	BinaryTreeNode* n4 = new BinaryTreeNode('D', 8, NULL, NULL);
	BinaryTreeNode* n6 = new BinaryTreeNode('E', 10, NULL, NULL);
	BinaryTreeNode* n7 = new BinaryTreeNode('F', 12, NULL, NULL);
	BinaryTreeNode* n9 = new BinaryTreeNode('G', 14, NULL, NULL);
	BinaryTreeNode* n10 = new BinaryTreeNode('H', 16, NULL, NULL);

	

	BinaryTreeNode* n2 = myObject->Merge(n0, n1);		//merging previously created nodes
	BinaryTreeNode* n5 = myObject->Merge(n3, n4);
	BinaryTreeNode* n8 = myObject->Merge(n6, n7);				
	BinaryTreeNode* n11 = myObject->Merge(n9, n10);

	BinaryTreeNode* n12 = myObject->Merge(n2, n5);			
	BinaryTreeNode* n13 = myObject->Merge(n8, n11);
	
	BinaryTreeNode* n14 = myObject->Merge(n12, n13);

	myObject->SetRootNode(n14);	 // setting rootnode

	myObject->PrintTree(); //calling printing function.

	//I was using (myObject->get_root()) and (myObject->get_indentLevel()) which allowed me to get and pass in desired data members	
	//Later on I decided to use function overloading instead
}
								