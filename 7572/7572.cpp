#include <iostream>
using namespace std;
char a = 'A',b = '0';
int main(){
    int k;
    cin >> k;
    char num[61][3];
    for(int i = 0; i<60; i++){
        num[i][0] = a++;
        num[i][1] = b++;
        if(a == 'L'+1) a = 'A';
        if(b == '9'+1) b= '0';
    }
    int t = k%60 - 4;
    cout << num[t][0] << num[t][1] << endl;
}