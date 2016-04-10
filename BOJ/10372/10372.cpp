#include<stdio.h>
int count[] = {6, 2, 5,5,4,5,6,3,7,6};
int main(){
    int num;
    bool check = false;
    scanf("%d", &num);
    for(int i = 0; i<24; i++){
        for(int j=0; j<60; j++){
            int a = 0;
            a+= count[i/10];
            a+= count[i%10];
            a+= count[j/10];
            a+= count[j%10];
            if(a==num){
                printf("%02d:%02d\n", i, j);
                check = true;
                break;
            }
        }
        if(check) break;
    }
    if(!check) printf("Impossible\n");
}