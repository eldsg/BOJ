#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    getline(cin, a);
    int i = 0, count = 0;
    int t = a.size();
    int j = t-1;
    for(; i<t; i++){
        if(a[i]!=' ') break;
    }
    for(; j>0; j--){
        if(a[j]!=' ') break;
    }
    for(; i<=j; i++){
        if(a[i] != ' ' && (a[i+1] == ' '|| a[i+1] == '\0')) count++;
    }
    if(!a.size()) cout << 0 << endl;
	else cout << count << endl;
}