#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    while(1){
        int a, b;
        cin >> a >> b;
        if(a==0 && b==0) break;
        int nk= -1;
        int node[1001];
        for(int i=0; i<a; i++){
            cin >> node[i];
            if(node[i] == b){
                nk=i;
            }
        }
        int mom[1001];
        int now = mom[0] = -1;
        for(int i=1; i<a; i++){
            if(node[i]!=node[i-1]+1) now++;
            mom[i]=now;
        }
        int result=0;
        if(mom[nk]!=-1){
            for(int i=1; i<a;i++){
                if(mom[mom[i]]==mom[mom[nk]] && mom[i]!=mom[nk])
                    result++;
            }
        }
        printf("%d\n", result);
    }
}