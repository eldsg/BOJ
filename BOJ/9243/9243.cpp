#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n,d;
    bool check = false;
    char a[1001], b[1001];
    cin >> n;
    cin >> a >> b;
    d = strlen(a);
    if(n%2==0){
        if(!strcmp(a,b)) cout << "Deletion succeeded"<<endl;
        else cout << "Deletion failed" << endl;
    }
    else{
        for(int i=0; i<d; i++){
            if((a[i] == '1' && b[i] == '1') ||(a[i] == '0' && b[i] == '0')){
                cout << "Deletion failed" << endl;
                check = true;
                break;
            }
        }
        if(!check) cout << "Deletion succeeded" << endl;
    }
}