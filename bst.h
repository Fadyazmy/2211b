// ====== this is in bst.h
#include "data.h"
typedef struct { Node *tree_nodes; unsigned char *is_free; int size } BStree_struct;
typedef BStree_struct* BStree;
BStree bstree_ini(int size);
void bstree_insert(BStree bst, int key, char *data);
void bstree_traversal(BStree bst);
void bstree_free(BStree bst);