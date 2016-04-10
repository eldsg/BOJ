#include<iostream>
using namespace std;
long long int a[1001]={0}, result;
int main(){
    long long int N,i,cl,count=0;
    cin >> N;
    for(i=0; i<N; i++){
        cin >> a[i];
    }
    cin >> cl;
    for(i=0; i<N; i++){
        if(a[i]%cl==0) count+=a[i]/cl;
        else count+=((a[i]/cl)+1);
    }
    result = cl*count;
    cout << result << endl;
}