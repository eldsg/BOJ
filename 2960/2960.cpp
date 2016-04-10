#include<stdio.h>
int mem[1100]= {0};
int re[1100]= {0};
int main(){
    int a, b, i, j=1, k=2;
    scanf("%d %d", &a, &b);
    for(i=1; i<=a; i++){
        mem[i] = i;
    }
	while(1){
        for(i=k; i<=a; i+=k){
            if(mem[i]==0) continue;
            else {
                re[j++] = mem[i];
                mem[i] = 0;
            }
            if(j==b+1){
                printf("%d", re[b]);
                return 0;
            }
        }
        k++;
    }
}