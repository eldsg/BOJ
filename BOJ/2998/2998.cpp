#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
vector<int> a;
vector<int>::iterator it;
int main(){
    char b[101];
    cin >> b;
    int c = strlen(b);
    for(int i = 0; i<c; i++){
        a.push_back(b[i]-'0');
    }
    while(1){
        if(a.size()%3==0) break;
        it = a.begin();
        a.insert(it,0);
    }
    int m = a.size()/3;
    int d = 0;
    while(m--){
        if(a[d]==0 && a[d+1]==0 && a[d+2] ==0) cout << 0;
        else if(a[d]==0 && a[d+1]==0 && a[d+2] ==1) cout << 1;
        else if(a[d]==0 && a[d+1]==1 && a[d+2] ==0) cout << 2;
        else if(a[d]==0 && a[d+1]==1 && a[d+2] ==1) cout << 3;
        else if(a[d]==1 && a[d+1]==0 && a[d+2] ==0) cout << 4;
        else if(a[d]==1 && a[d+1]==0 && a[d+2] ==1) cout << 5;
        else if(a[d]==1 && a[d+1]==1 && a[d+2] ==0) cout << 6;
        else if(a[d]==1 && a[d+1]==1 && a[d+2] ==1) cout << 7;
        d+=3;
    }
}