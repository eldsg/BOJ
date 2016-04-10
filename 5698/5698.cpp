#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main(){
    string a;
  	char d;
    while(1){
    	bool check =false;
    	getline(cin,a);
    	if(a[0]=='*') break;
        int b= a.size();
        if(a[0]>='A' && a[0] <='Z'){
            d = a[0]+32;
        }
        else d = a[0]-32;
        for(int i=0; i<b; i++){
            if(a[i]==' '){
                while(1){                   
                    if(a[i]!=' ')break;
                    else i++;
                }
                if(a[0]!=a[i] && d!=a[i]) check = true;
            }
        }
        if(check) printf("N\n");
        else printf("Y\n");
    }
}