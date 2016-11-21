#include<cstdio>
#include<cstdlib>
#include<map>

using namespace std;

map<long long, int> check;

int main(){
    int num, max = -1;
    long long iter;
    scanf("%d", &num);
    while(num--){
        long long number;
        scanf("%lld", &number);
        check[number]++;
        if(check[number] > max){
            max = check[number];
            iter = number;
        }
        else if(check[number] == max && number < iter){
            iter = number;
        }
    }
    printf("%lld\n", iter);
}
