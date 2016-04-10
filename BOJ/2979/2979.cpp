#include<stdio.h>
int t[100]={0},a[3],res=0,d,e,temp=0,temp1=101;
int main(){
    scanf("%d %d %d", &a[0],&a[1],&a[2]);
    for(int i=0; i<3; i++){
        scanf("%d %d", &d, &e);
        for(int i=d; i<e; i++){
            t[i]++;
        }
        if(d<temp1)temp1=d;
        if(e>temp) temp = e;
    }
    for(int i=temp1; i<=temp; i++){
        if(t[i]==1) res+=a[0];
        else if(t[i]==2) res+=a[1]*2;
        else if(t[i]==3) res+=a[2]*3;
    }
    printf("%d",res);
}