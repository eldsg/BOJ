#include<iostream>
#include<map>
#include<string>
#include<stdio.h>
using namespace std;
string a;
map<char, int> b;
int temp = 0;
int main(){
    while(1){
        if(!getline(cin, a))break;
        int s = a.size();
        for(int i =0; i<s; i++){
            b[a[i]]++;
        }
    }
    for(int i = 'a'; i<= 'z'; i++){
        if(b[char(i)] > temp){
            temp = b[char(i)];
        }
    }
    for(int i = 'a'; i<='z'; i++){
        if(b[char(i)] == temp){
            printf("%c", (char)i);
        }
    }
}