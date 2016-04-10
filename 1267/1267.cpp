#include <iostream>
using namespace std;
int num;
int main(){
    int T, minP=0, yougP=0;
  	cin >> T;
    while(T--){
        cin >> num;
        minP += (num/60+1)*15;
        yougP += (num/30+1)*10;
    }
    if(minP<yougP){
        cout << "M " << minP << endl;
    }
    else if(yougP < minP){
        cout << "Y " << yougP << endl;
    }
    else cout << "Y M " << minP << endl;
}