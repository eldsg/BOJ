#include<iostream>
#include<string.h>
#include<cstdlib>
#include<stdio.h>
using namespace std;
int main(){
    int T;
    scanf("%d\n",&T);
    while(T--){
        int hak;
        unsigned long long a,b=0;
        scanf("%d", &hak);
        if(hak==0) break;
        for(int i=1; i<=hak; i++){
            cin >> a;
            b+=a;
            if(i==hak){
                if(!(b%hak)) printf("YES\n");
                else printf("NO\n");
            }
            else{
                b%=hak;
            }
        }
    }
}