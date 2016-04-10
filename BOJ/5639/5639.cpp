#include<stdio.h>
#include<stdlib.h>
typedef struct tree{
	int data;
	struct tree *left;
	struct tree *right;
}tree;

tree *insert(tree *node, int data){
	if (node == NULL){
		tree *temp;
		temp = (tree*)malloc(sizeof(tree));
		temp->data = data;
		temp->left = temp->right = NULL;
		return temp;
	}
	if (data > (node->data)){
		node->right = insert(node->right,data);
	}
	else if (data < (node->data)){
		node->left = insert(node->left, data);
	}
	return node;
}
void print(tree *node){
	if (node == NULL) return;
	print(node->left);
	print(node->right);
	printf("%d\n", node->data);
}
int main(){
	tree *root = NULL;
	int num;
	while (~scanf("%d", &num)){
		root = insert(root, num);
	}
	print(root);
}