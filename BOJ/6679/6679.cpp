#include<stdio.h>
int change(int a){
    int temp, temp1, tn = 0, tn1 = 0, tn2 =0;
    int temp2 = a;
    while(temp2 != 0){
        tn += temp2 % 16;
        temp2 /= 16;
    }
    temp2 = a;
    while(temp2 != 0){
        tn1 += temp2 % 12;
        temp2 /= 12;
    }
    temp2 = a;
    while(temp2 != 0){
        tn2 += temp2 % 10;
        temp2 /= 10;
    }
    if(tn == tn1 && tn == tn2) return 1;
    else return 0;
     
}
int main(){
    int temp;
    for(int i = 2992; i<=9999; i++){
        temp = change(i);
        if(temp) printf("%d\n", i);
    }   
}