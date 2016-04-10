#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
vector<char> b;
int main(){
    string a;
    int k = 0, check =0;
    getline(cin, a);
    for(int i = 0; i< a.size(); i++){
        if(a[i] == ':') check++;
    }
    for(int i = 0; i<a.size(); i++){
        if(a[i] == ':' && a[i-1] == ':'){
            if(i==a.size()-1){
                for(int j=0; j<4*(8-check+1); j++){
                    b.push_back('0');
                }
            }
            for(int j=0; j<4*(8-check); j++){
                b.push_back('0');
            }            
        	k = i+1;
        }
        else if(a[i] == ':'){
            for(int j=0; j<4-i+k; j++){
                b.push_back('0');
            }
            for(int j=k; j<i; j++){
                b.push_back(a[j]);
            }
            k = i+1;
        }
        else if(i == a.size()-1){
            for(int j=0; j<3-i+k; j++){
                b.push_back('0');
            }
            for(int j=k; j<=i; j++){
                b.push_back(a[j]);
            }
            k = i+1;
        }
    }
    k = 0;
    for(int i = 0; i<b.size(); i++){
        if(k == 4) {
            printf(":");
            k=0;
        }
           printf("%c", b[i]);
           k++;
    }
}