#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int se[9] = {0};
int se2[3] ={0};
int main(){
    char a[10];
    cin >> a;
    int count = 0;
    int b =strlen(a);
    for(int i = 0; i<b; i++){
        if(a[i]=='6' || a[i]=='9') se2[0]++;
        else se[a[i]-'0']++;       
    }
    sort(se, se+8);
    if(se[7] > (se2[0]/2)) cout << se[7] << endl;
    else {
        if(se2[0]%2==0) cout << se2[0]/2 << endl;
        else cout << se2[0]/2+1 << endl;
    }
}