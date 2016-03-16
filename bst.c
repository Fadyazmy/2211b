// ====== this is in bst.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bst.h"
// Input: ’size’: size of an array
// Output: a pointer of type BStree,
// i.e. a pointer to an allocated memory of BStree_struct type
// Effect: dynamically allocate memory of type BStree_struct - DONE
// allocate memory for a Node array of size+1 for member tree_nodes - DONE
// allocate memory for an unsigned char array of size+1 for member is_free - DONE
// set all entries of is_free to 1 - DONE
// set member size to ’size’; - DONE
BStree bstree_ini(int size) {
BStree bst = (BStree_struct) malloc( sizeof(BStree_struct));
bst ->tree_node = (Node*) malloc( sizeof(Node)*(size + 1));
bst->is_free = (unsigned char*) malloc( sizeof(unsigned char)*(size + 1));
int i;
for (i =0; a<size+1 ;a++){
	bst->is_free[a] = 1;
}
return bst; 
}


// Input: ’bst’: a binary search tree
// ’key’: an integer
// ’data’: a string
// Effect: ’data’ with ’key’ is inserted into ’bst’
// if ’key’ is in ’bst’, do nothing
void bstree_insert(BStree bst, int key, char *data) {
		int a; //initializing local variable, a
		a = bstree_insert_node(bst, key, data, 1); //starting insert at location 1 of array
}



int bstree_insert_node(BStree bst, int key, char *data, int a){

	//Printing error if the seeked array location is not possible
	if (a>BStree->size){
		printf("Array out of bound error\n");
		return a;
	}
	// if the seeked location is free then save it 
	else if (bst->is_free[a] == 1){
		//Make new node, and save it in array
		//dup method
		bst->data = data_dup(data);
		Node node = {key, data};
		bst->tree_node = node;
		bst->is_free[a] = 0;
	}
	else if(bst->tree_node[a].key == key ){
		return a;//Do nothing already found
	}
	else if(bst->tree_node[a].key > key){
		a = a*2 + 1;
		bstree_insert_node(bst, key, data, a);
	}
	else{
		a = 2*a;
		bstree_insert_node(bst, key, data, a);
	}

}



// Input: ’bst’: a binary search tree
// Effect: print all the nodes in bst using in order traversal
void bstree_traversal(BStree bst) {
	//Inorder traversal
	bstree_traversal_inorder(bst, bst->tree_node);
}


void bstree_traversal_inorder(Bstree bst, int index){

	if ( bst->is_free[index]!= 0){
		bstree_traversal(bst, index*2);
		print("%d",bst->tree_nodes[index].key);
		bstree_traversal(bst, index*2 + 1);
	}
}


// Input: ’bst’: a binary search tree
// Effect: all memory used by bst are freed
void bstree_free(BStree bst) {
	free(bst->tree_node);
	free(bst->is_free);
	free(bst);
}

