// ====== this is a sample main program
#include <stdio.h>
#include "bst.h"
int main(void) {
BStree bst;
bst = bstree_ini(1000);
4
bstree_insert(bst, 6, "correct");
bstree_insert(bst, 3, "is");
bstree_insert(bst, 9, "output");
bstree_insert(bst, 4, "the");
bstree_insert(bst, 6, "incorrect");
bstree_insert(bst, 20, "!");
bstree_insert(bst, 1, "This");
bstree_traversal(bst);
bstree_free(bst);
}