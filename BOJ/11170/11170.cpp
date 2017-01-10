#include<string>
#include<cstring>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b, con = 0;
        scanf("%d %d", &a, &b);
        for(int i = a; i <= b; i++){
            char str[10];
            sprintf(str, "%d", i);
            for(int j = 0; str[j]; j++){
                if(str[j] == '0') con++;
            }
        }
        printf("%d\n", con);
    }
}