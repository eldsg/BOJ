#include <iostream>
using namespace std;
int main(){
    int max[6] = {1, 1, 2, 2, 2, 8};
    int num[6];
    for(int i =0; i<6; i++){
        cin >> num[i];
        cout << max[i] - num[i] << " ";
    }
}