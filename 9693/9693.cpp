#include<stdio.h>
int result[1000010] = { 0, 0, 0, 0, 0, 1, };
int main(){
        for(int i = 6; i<=1000000; i++){
                int count = 0;
                if(i%5==0){
                        int temp = i;
                        while(1){
                                temp/=5;
                                count++;
                                if(temp%5 != 0) break;
                                }
                        result[i] = result[i-1]+count;
                }
                else result[i] = result[i-1];
        }
        int num, mycase=1;
        while(1){
                scanf("%d", &num);
                if(!num) break;
                printf("Case #%d: %d\n", mycase++, result[num]);
        }
}         