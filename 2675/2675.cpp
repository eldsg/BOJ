#include <string.h>
#include <iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    char a[21];
    while(T--){
        int R;
        cin >> R >> a;
        for(int i = 0; i< strlen(a); i++){
            for(int j =0; j<R; j++){
                cout << a[i];
            }
        }
        cout << endl;
    }

}