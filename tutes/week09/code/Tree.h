typedef struct BSTNode *Link;
 
typedef struct BSTNode {
   int  value;
   Link left, right;
} BSTNode;

typedef struct BSTNode *BSTree;
 
BSTree newBSTree();               // create an empty BSTree
void dropBSTree(BSTree);          // free memory associated with BSTree
void showBSTree(BSTree);          // display a BSTree
void showBSTreeNode(BSTree);      // display BSTree root node
 
void BSTreeInfix(BSTree);         // print values in infix order
void BSTreePrefix(BSTree);        // print values in prefix order
void BSTreePostfix(BSTree);       // print values in postfix order
void BSTreeLevelOrder(BSTree);    // print values in level-order
 
int BSTreeDepth(BSTree);          // #nodes in longest branch
int BSTreeNumNodes(BSTree);       // count #nodes in BSTree
int BSTreeNumLeaves(BSTree);      // count #leaves in BSTree
 
BSTree BSTreeInsert(BSTree, int); // insert a new value into a BSTree
int BSTreeFind(BSTree, int);      // check whether a value is in a BSTree
BSTree BSTreeDelete(BSTree, int); // delete a value from a BSTree

int BSTreeMaxBranchLen(BSTree t);

#define cmp(x,y) (x < y)
