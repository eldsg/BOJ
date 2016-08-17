#include <iostream>
using namespace std;
char a = 'J',b = '7';
int main(){
    int k;
    cin >> k;
    char num[1000006][3];
    for(int i = 1; i<=1000004; i++){
        num[i][0] = a++;
        num[i][1] = b++;
        if(a == 'L'+1) a = 'A';
        if(b == '9'+1) b= '0';
    }
    cout << num[k][0] << num[k][1] << endl;
}
