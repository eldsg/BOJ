#include<stdio.h>
int main(){
    bool check1 = false;
    int N,result=0;
    scanf("%d",&N);
	if(N%5==0) printf("%d",N/5);
    else {
        while(N){
            N-=3;
            result++;
            if(N%5==0){
                break;
            }
            if(N<0) check1 = true; 
        }
        if(check1) printf("-1");
        else printf("%d", result+N/5);
    }    
}