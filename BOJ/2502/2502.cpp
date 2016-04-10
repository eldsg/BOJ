#include <iostream>
using namespace std;
int a[31] ={1, 0, 1, };
int b[31] ={0, 1, 1, };
int main(){
    int c,d,i,j;
    cin >> c >> d;
    for(int i=3; i<=c; i++){
        a[i] = a[i-2] +a[i-1];
        b[i] = b[i-2] + b[i-1];
    }
    for(i=1; ; i++){
        for(j=i; ; j++){            
            if(a[c-1]*i+b[c-1]*j>d) break;
            if(a[c-1]*i+b[c-1]*j==d) {
                cout << i << endl;
                cout << j << endl;
                return 0;
        	}
    	}
	}
}