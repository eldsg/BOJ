#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t;    
    cin >> t;
    while(t--){
        char a[101],b[101];
        int count=0;
   		cin >> a >> b;
    	int ll = strlen(a);
        for(int i=0; i<ll; i++) {
            if(a[i]!=b[i]) count++;
        }
        cout << "Hamming distance is " << count << "."<< endl;
    }

}