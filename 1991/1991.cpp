#include<stdio.h>
#include<iostream>
using namespace std;
char tree[200][2];
void inorder(char here){
	if (here == '.') return;
	inorder(tree[here][0]);
	printf("%c", here);
	inorder(tree[here][1]);
}
void preorder(char here){
	if (here == '.') return;
	printf("%c", here);
	preorder(tree[here][0]);
	preorder(tree[here][1]);
}
void postorder(char here){
	if (here == '.') return;
	postorder(tree[here][0]);
	postorder(tree[here][1]);
	printf("%c", here);
}
int main(){
	int num;
	scanf("%d", &num);
	getchar();
	for (int i = 0; i < num; i++){
		char temp; cin >> temp;
		cin >> tree[temp][0] >> tree[temp][1];
	}
	preorder('A'); printf("\n");
	inorder('A'); printf("\n");
	postorder('A'); printf("\n");

}