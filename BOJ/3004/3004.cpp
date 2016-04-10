#include<stdio.h>
int main(){
    int a, cut[101] ={ 0, 2};
    scanf("%d", &a);
    for(int i=2; i<101; i++){
       if(i%2==0) cut[i] = (i/2+1)*(i/2+1);
       else cut[i] = 2*cut[i-1]-cut[i-2];
    }
	printf("%d", cut[a]);
}