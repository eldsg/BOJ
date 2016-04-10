#include <iostream>
using namespace std;
int num[15][15]= {0};
int main(){
    for(int i =1; i<=14; i++){
        num[0][i] = i;
        num[i][1] = 1;
    }
    for(int i = 1; i<=14; i++){
        for(int j =2; j<=14; j++){
            num[i][j] = num[i-1][j]+num[i][j-1];
        }
    }
    int T;
    cin >> T;
    while(T--){
        int a, b;
        cin >> a >> b;
        cout << num[a][b] << endl;
    }

}