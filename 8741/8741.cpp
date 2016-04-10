#include <iostream>
using namespace std;

int main(){
   int n = 0;

   cin >> n;
   for (int i = 1; i <= 2 * n - 1; i++){
      if (i <= n){
         cout << 1;
      }
      else
         cout << 0;
   }
}