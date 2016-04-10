#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
    int a, *x, *y, td =0, ls=0;
    cin >> a;
	x = new int[a];
    y = new int[a];
    for(int i =0; i<a; i++){
        cin >> x[i] >> y[i];
    }
    for(int i=1; i<a; i++){
        td += abs(x[i]-x[i-1])+abs(y[i]-y[i-1]);
    }
    for(int i=1; i< a-1; i++){
        int nsd = abs(x[i+1]-x[i])+ abs(x[i]-x[i-1])+ abs(y[i+1]-y[i])+abs(y[i]-y[i-1]);
        int sd = abs(x[i+1]-x[i-1])+abs(y[i+1]-y[i-1]);
        ls = max(ls,nsd-sd);        
    }
    cout << td-ls << endl;
}