#include<stdio.h>
#include<string.h>
using namespace std;
int check[102][102]={0};
int numm[101]={0};
int main(){
    int t,temp=0;
    int a[102],b[102],c[102],d[102];
    scanf("%d", &t);
    for(int mm=1; mm<=t; mm++){
        scanf("%d %d %d %d", &a[mm], &b[mm], &c[mm], &d[mm]);
    }
    numm[t] = c[t]*d[t];
    for(int i=1; i<t; i++){ 
        for(int k=a[i]; k<a[i]+c[i]; k++){
        	for(int p=b[i]; p<b[i]+d[i]; p++){
                    check[k][p]++;
                }
            }
        for(int j=i+1; j<=t; j++){
                for(int kk=a[j]; kk<a[j]+c[j]; kk++){
                	for(int pp=b[j]; pp<b[j]+d[j]; pp++){
                    	check[kk][pp]++;
                	}
            	}
        }       
        for(int ii=a[i]; ii<a[i]+c[i]; ii++){
        	for(int jj=b[i]; jj<b[i]+d[i]; jj++){
            	if(check[ii][jj]==1) temp++;
        	}
        }
        numm[i] = temp;
        temp = 0;
        memset(check, 0, sizeof(check));
    }
    for(int i=1; i<=t; i++){
        printf("%d\n", numm[i]);
    }
}