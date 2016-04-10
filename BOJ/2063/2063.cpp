#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
       int a;
       cin >> a;
       double vec[21]; 
       for(int i=0; i<a; i++){
           cin >> vec[i];
       }
       sort(vec, vec+a);
       double sum = 0.0;
       double max = 0.0;
       bool check = false;
       for(int i=0; i<a; i++){
           max = vec[i]>max ? vec[i] : max;
           sum += vec[i];
           if(sum-max>=max){
               check = true;
               break;
           }
       }
       if(check) cout << "YES" << endl;
       else cout << "NO" << endl;
    }
}