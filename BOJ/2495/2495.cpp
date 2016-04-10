#include <stdio.h>
#include <string.h>
int main(){
    char a[10];
    for(int i=0; i<3; i++){
        int temp =0,len,k=0;
    	scanf("%s", &a);
        len = strlen(a);
        for(int j=0; j<len; j++){
        	for(int i=j; i<len; i++){
            	if(a[j]==a[i]) k++;
                else break;
        	}
            if(k>temp) temp = k;
            k=0;
        }
        printf("%d\n", temp);
    }
}