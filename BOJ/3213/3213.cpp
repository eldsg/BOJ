#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
map<string,int> a;
int main(){
    int t,pizza;
    cin >> t;
    while(t--){
        string b;
        cin >> b;
        a[b]++;
    }
    pizza = a["3/4"]+a["1/2"]/2;
    a["1/4"] = max(a["1/4"]-a["3/4"],0);
    a["1/4"] += 2*(a["1/2"]%2);
    pizza+= (a["1/4"]+3)/4;
    cout << pizza << endl;
}