#include<string>
#include<cstring>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
    char str[101];
    while(gets(str) != NULL){
           int size = strlen(str);
           int a = 0, b = 0, c = 0, d = 0;
           for(int i = 0; str[i]; i++){
               if(str[i] >= 'a' && str[i] <= 'z') a++;
               else if(str[i] >='A' && str[i] <= 'Z') b++;
               else if(str[i] >= '0' && str[i] <= '9') c++;
               else if(str[i] == ' ') d++;
           }
           printf("%d %d %d %d\n", a, b, c, d);
    }
}