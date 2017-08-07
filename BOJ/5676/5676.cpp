#include <bits/stdc++.h>

using namespace std;

int zero[222222], mi[222222], a, b, n, k;
int pn[111111];
char c;
int sum(int *t, int index){
    int ans = 0;
    while(index > 0){
        ans += t[index];
        index -= (index & -index);
    }
    return ans;
}

void update(int *t, int index, int num){
    while(index <= 222222){
        t[index] += num;
        index += (index & -index);
    }
}
int main(){
    while(scanf("%d%d", &a, &b) == 2){
        memset(mi, 0, sizeof(mi));
        memset(zero, 0, sizeof(zero));
        memset(pn, 0, sizeof(pn));
        for(int i = 1; i <= a; i++) {
            scanf("%d", &pn[i]);
            if(pn[i] < 0) update(mi, i, 1);
            if(pn[i] == 0) update(zero, i, 1);
        }
        for(int i = 0; i < b; i++){
            scanf(" %c %d %d", &c, &n, &k);
           // printf("")
            if(c == 'C'){
                if(pn[n] < 0) update(mi, n, -1);
                else if(pn[n] == 0) update(zero, n, -1);
                pn[n] = k;
                if(pn[n] < 0) update(mi, n, 1);
                else if(pn[n] == 0) update(zero, n, 1);
            }
            else{
                int zc = sum(zero, k) - sum(zero, n-1);
                int mc = sum(mi, k) - sum(mi, n-1);
                if(zc) printf("0");
                else if(mc&1) printf("-");
                else printf("+");
            }
        }
        puts("");
    }
}