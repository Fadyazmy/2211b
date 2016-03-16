// ====== this is in data.c
#include <stdio.h>
#include "data.h"
// Input: ’node’: a node
// Effect: node.key is printed and then the node.data is printed
void print_node(Node node) {
	printf("Key: %d Data: %s\n", &node.key, &node.data);
}

// Input: ’data’: a string ends with ’\0’
// Output: a pointer of type pointer to char,
// pointing to an allocated memory containing a copy of ’data’
// Effect: dynamically allocate memory to hold a copy of ’data’
char *data_dup(char *data) {
	char *b;
	b.name = (char *) malloc(sizeof(char)); 
	strcpy(b.name, data);
}