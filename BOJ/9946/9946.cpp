#include<iostream>
#include<string.h>
#include<map>
#include<stdio.h>
using namespace std;
int main(){
    char b[1001], c[1001];
    int m=1;
    bool check = true;
    while(1){        
		map<char,int> a;
        cin >> b >> c;
        if(!strcmp(b,"END") && !strcmp(c,"END")) break;
        int d = strlen(b);
        int e = strlen(c);
        if(d!=e) printf("Case %d: different\n", m++);
        else{
        	for(int i = 0; i<d; i++){
            	a[b[i]]++;
       	 	}
        	for(int i =0; i<e; i++){
           	 	a[c[i]]--;
        	}
            for(int i=0; i<d; i++){
                if(a[b[i]]!=0 || a[c[i]]) check = false;
            }
            if(!check) printf("Case %d: different\n", m++);
            else printf("Case %d: same\n", m++);
        }
        check = true;
    }
}