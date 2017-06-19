#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

char s[3][3];
bool fir_won, sec_won;

int main(){
    int first = 0, second = 0;
    int a[3][3], b[3][3];
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    for(int i=0; i<3; i++) scanf("%s",s[i]);
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(s[i][j] == 'X'){
                first++;
                a[i][j] = 1;
            }
            if(s[i][j] == '0'){
               second++;
               b[i][j] = 1;
            }
        }
    }
    if(second > first) {printf("illegal\n"); return 0;}
    if(abs(first - second) > 1) {printf("illegal\n"); return 0;}
    if(first >= 3){
        if(a[0][0] == 1 && a[1][1] == 1 && a[2][2] == 1)fir_won = true;
        else if(a[0][2] ==1&& a[1][1] == 1 && a[2][0] == 1) fir_won = true;
        else{
            for(int i=0; i<3; i++){
                if(a[i][0] == 1 && a[i][1] == 1 && a[i][2] == 1) {fir_won = true; break;}
            }
            if(!fir_won){
                for(int i=0; i<3; i++){
                if(a[0][i] == 1 && a[1][i] == 1 && a[2][i] == 1) {fir_won = true; break;}
            }
            }
        }
    }
    if(second >= 3) {
        if(b[0][0] == 1 &&b[1][1] == 1 && b[2][2] == 1)sec_won = true;
        else if(b[0][2] ==1&& b[1][1] == 1 && b[2][0] == 1) sec_won = true;
        else{
            for(int i=0; i<3; i++){
                if(b[i][0] == 1 && b[i][1] == 1 && b[i][2] == 1) {sec_won = true; break;}
            }
            if(!sec_won){
                for(int i=0; i<3; i++){
                if(b[0][i] == 1 && b[1][i] == 1 && b[2][i] == 1) {sec_won = true; break;}
            }
            }
        }
    }
    if(fir_won && sec_won) printf("illegal\n");
    else if(sec_won && first > second) printf("illegal\n");
    else if(fir_won && first  == second) printf("illegal\n");
    else if(fir_won) printf("the first player won\n");
    else if(sec_won) printf("the second player won\n");
    else if(first + second == 9) printf("draw\n");
    else if(!fir_won && !sec_won){
        if(first > second) printf("second\n");
        else printf("first\n");
    }

    return 0;
}