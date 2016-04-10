#include<stdio.h>
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main(){
    while(1){
        char a[1000],change[1000],result[1000],a1[1000],b1[1000],fr[1000];
        int i, m=0, o=0;
        long long ii, result1=0;
        scanf("%s", a);
        memset(fr,0,sizeof(fr));
        memset(change, 0, sizeof(change));
        memset(result, 0, sizeof(result));
        memset(a1, 0, sizeof(a1));
        memset(b1, 0, sizeof(b1));
        for(i=0; a[i]!='+'; i++){
            a1[i] = a[i];                       
        }
        i+=1;
        for(i; a[i]!='='; i++){
            b1[m++] = a[i];
        }
        if(a[0]=='B') break;
        int j =strlen(a1);
        int k = 0;
        for(int i=0; i<j; i+=3){
            if(a1[i]=='0' && a1[i+1] =='6'&& a1[i+2] == '3') change[k++] = '0';
            else if(a1[i]=='0' && a1[i+1] =='1'&& a1[i+2] == '0') change[k++] = '1';
            else if(a1[i]=='0' && a1[i+1] =='9'&& a1[i+2] == '3') change[k++] = '2';
            else if(a1[i]=='0' && a1[i+1] =='7'&& a1[i+2] == '9') change[k++] = '3';
            else if(a1[i]=='1' && a1[i+1] =='0'&& a1[i+2] == '6') change[k++] = '4';
            else if(a1[i]=='1' && a1[i+1] =='0'&& a1[i+2] == '3') change[k++] = '5';
            else if(a1[i]=='1' && a1[i+1] =='1'&& a1[i+2] == '9') change[k++] = '6';
            else if(a1[i]=='0' && a1[i+1] =='1'&& a1[i+2] == '1') change[k++] = '7';
            else if(a1[i]=='1' && a1[i+1] =='2'&& a1[i+2] == '7') change[k++] = '8';
            else if(a1[i]=='1' && a1[i+1] =='0'&& a1[i+2] == '7') change[k++] = '9';
        }
        ii = atoi(change);
        j = strlen(b1);
        k = 0;
        memset(change,0, sizeof(change));
        for(int i=0; i<j; i+=3){
            if(b1[i]=='0' && b1[i+1] =='6'&& b1[i+2] == '3') change[k++] = '0';
            else if(b1[i]=='0' && b1[i+1] =='1'&& b1[i+2] == '0') change[k++] = '1';
            else if(b1[i]=='0' && b1[i+1] =='9'&& b1[i+2] == '3') change[k++] = '2';
            else if(b1[i]=='0' && b1[i+1] =='7'&& b1[i+2] == '9') change[k++] = '3';
            else if(b1[i]=='1' && b1[i+1] =='0'&& b1[i+2] == '6') change[k++] = '4';
            else if(b1[i]=='1' && b1[i+1] =='0'&& b1[i+2] == '3') change[k++] = '5';
            else if(b1[i]=='1' && b1[i+1] =='1'&& b1[i+2] == '9') change[k++] = '6';
            else if(b1[i]=='0' && b1[i+1] =='1'&& b1[i+2] == '1') change[k++] = '7';
            else if(b1[i]=='1' && b1[i+1] =='2'&& b1[i+2] == '7') change[k++] = '8';
            else if(b1[i]=='1' && b1[i+1] =='0'&& b1[i+2] == '7') change[k++] = '9';
        }
        ii += atoi(change);
        sprintf(result, "%lld", ii);
        int pp = strlen(result);
        memset(fr, 0, sizeof(fr));
        for(int i=0; i<pp; i++){
           	if(result[i] == '0') fr[o] = '0', fr[o+1] = '6', fr[o+2] = '3';
            else if(result[i] == '1') fr[o] = '0', fr[o+1] = '1', fr[o+2] = '0';
            else if(result[i] == '2') fr[o] = '0', fr[o+1] = '9', fr[o+2] = '3';
            else if(result[i] == '3') fr[o] = '0', fr[o+1] = '7', fr[o+2] = '9';
            else if(result[i] == '4') fr[o] = '1', fr[o+1] = '0', fr[o+2] = '6';
            else if(result[i] == '5') fr[o] = '1', fr[o+1] = '0', fr[o+2] = '3';
            else if(result[i] == '6') fr[o] = '1', fr[o+1] = '1', fr[o+2] = '9';
            else if(result[i] == '7') fr[o] = '0', fr[o+1] = '1', fr[o+2] = '1';
            else if(result[i] == '8') fr[o] = '1', fr[o+1] = '2', fr[o+2] = '7';
            else if(result[i] == '9') fr[o] = '1', fr[o+1] = '0', fr[o+2] = '7';
            o+=3;
        }
        printf("%s+%s=%s\n",a1,b1,fr);
	}
}