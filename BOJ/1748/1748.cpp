#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
    long long a,b,len=1,div;
    char buf[100];
    cin >> a;
    sprintf(buf, "%d", a);
    len = strlen(buf);
    b = a;
    if(len == 1) cout << b << endl;
    else if(len == 2) cout << 9+2*(b-9) << endl;
    else if(len == 3) cout << 9+2*90+3*(b-99) << endl;
    else if(len == 4) cout << 9+2*90+3*900+4*(b-999) << endl;
    else if(len == 5) cout << 9+2*90+3*900+4*9000+5*(b-9999) << endl;
    else if(len == 6) cout << 9+2*90+3*900+4*9000+5*90000+6*(b-99999) << endl;
    else if(len == 7) cout << 9+2*90+3*900+4*9000+5*90000+6*900000+7*(b-999999) << endl;
    else if(len == 8) cout << 9+2*90+3*900+4*9000+5*90000+6*900000+7*9000000+8*(b-9999999) << endl;
    else cout << 9+2*90+3*900+4*9000+5*90000+6*900000+7*9000000+8*90000000+9*(b-99999999) << endl;

}