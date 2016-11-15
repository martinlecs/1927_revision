// Implementation of a function that computes the maximum branch length
// of a tree ie. width of the tree.
// The branch length of a BSTree is defined as the number of links (edges) on the longest path from the root to a leaf.

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Tree.h"

int BSTreeMaxBranchLen(BSTree t)
{
	if (t == NULL) return 0;
	else if (t->left == NULL && t->right == NULL) {
		return 0;
	}	
	else {
	int l, r;
	l = return 1 + BSTreeMaxBranchLen(t->left);
	r = return 1 + BSTreeMaxBranchLen(t->right);
	}
	return cmp(l,r) ? l : r;
}
