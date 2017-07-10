#include <bits/stdc++.h>

int t = 1;
int main(){
    while(1){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if(a==0 && b==0 && c==0) break;
        int ans = a*(c/b);
        c %= b;
        if(c/a == 0) ans += c%a;
        else ans += a;
        printf("Case %d: %d\n",t++, ans);
    }
}