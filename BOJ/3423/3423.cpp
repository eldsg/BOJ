#include <stdio.h>
 
char grille[1001][1001];
char message[1001][1001];
char text[4*1001*1001];
 
int main(){
	int n, i, j, k, holes;
	while( scanf(" %d ", &n), n!=0 ) {
		for(i=0; i<n; i++){
			scanf(" %s ", grille[i]);
		}
		for(i=0; i<n; i++){
			scanf(" %s ", message[i]);
		}
		k=0;
		for(i=0;i<n; i++)
		   for(j=0;j<n;j++)
			if (grille[i][j]=='O') {
				text[k++]=message[i][j];
			}
		for(i=0;i<n; i++)
		   for(j=0;j<n;j++)
			if (grille[n-1-j][i]=='O') {
				text[k++]=message[i][j];
			}
		for(i=0;i<n; i++)
		   for(j=0;j<n;j++)
			if (grille[n-1-i][n-1-j]=='O') {
				text[k++]=message[i][j];
			}
		for(i=0;i<n; i++)
		   for(j=0;j<n;j++)
			if (grille[j][n-1-i]=='O') {
				text[k++]=message[i][j];
			}
		text[k]=0;
		printf("%s\n", text);
    } 
}
