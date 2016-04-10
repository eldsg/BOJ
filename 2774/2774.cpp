#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int T;
    char a[20];
    cin >> T;
    while(T--){
        int count = 0;
        cin >> a;
        for(int i = 0; i<strlen(a); i++){
            for(int j = i+1; j<strlen(a); j++){
                if(a[i] == 'a') continue;
                if(a[i] == a[j]) a[j] = 'a';
            }
        }
        for(int i = 0; i<strlen(a); i++){
            if(a[i] == 'a') count++;
        }
        cout << strlen(a) - count << endl;
    }

}