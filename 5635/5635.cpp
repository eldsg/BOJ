#include<stdio.h>
struct name{
    char a[100];
    int b;
    int c;
    int d;
};
int main(){
    name k[101];
    int t;
    int temp, temp1;
    scanf("%d", &t);
    scanf("%s %d %d %d",&k[0].a,&k[0].b,&k[0].c,&k[0].d);
    temp = 0, temp1=0;
    for(int i=1; i<t; i++){
        scanf("%s %d %d %d",&k[i].a,&k[i].b,&k[i].c,&k[i].d);
        if(k[temp].d < k[i].d){
            temp = i;
        }
        else if(k[temp].d==k[i].d){
            if(k[temp].c < k[i].c){
                temp = i;
            }
            else if(k[temp].c == k[i].c){
                if(k[temp].b < k[i].b){
                    temp = i;
                }
            }
        } 
        if(k[temp1].d > k[i].d){
            temp1 = i;
        }
        else if(k[temp1].d==k[i].d){
            if(k[temp1].c > k[i].c){
                temp1 = i;
            }
            else if(k[temp1].c == k[i].c){
                if(k[temp1].b > k[i].b){
                    temp1 = i;
                }
            }
        }

    }
        printf("%s\n%s", k[temp].a, k[temp1].a);
}