#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int x[11] = {4, 1, 1, 1, 2, 2, 2, 3, 3, 3};
int y[11] = {2, 1, 2, 3, 1, 2, 3, 1, 2, 3};
int result[201];
int main(){
    int t,temp;
    scanf("%d", &t);
    for(int i=1; i<=200; i++){
        char k[4];
        bool check = false;
        sprintf(k, "%d", i);
        int a = strlen(k);
        int xfirst = x[k[0]-'0'];
        int yfirst = y[k[0]-'0'];
        for(int j=1; j<a; j++){
            if(xfirst > x[k[j]-'0'] || yfirst > y[k[j]-'0']){
                check = true;
                break;
            }
            else {
                xfirst = x[k[j]-'0'];
                yfirst = y[k[j]-'0'];
            }
        }
        if(!check) result[i] = i;
    }
    for(int i=1; i<=200; i++){
        if(result[i] == 0){
            for(int j=i;; j++){
                if(result[j]!=0){
                    temp = result[j];
                    break;
                }
            }
        	if(abs(temp - i) > abs(i-result[i-1])){
                result[i] = result[i-1];
            }
            else if(abs(temp -i) < abs(i-result[i-1])){
                result[i] = temp;
            }
            else result[i] = temp;
        }
    }
    while(t--){
        int num;
        scanf("%d", &num);
        printf("%d\n", result[num]);
    }
}