#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
int p, a, b, c, d, n;
double k, temp = -1, ans=0;
int main(){
    scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n);
    for(int i = 1; i<=n; i++){
        k = p*(sin(a*i+b)+cos(c*i+d)+2);
        if(temp > k) ans = max(ans, temp-k);
        else temp = k;
    }
    printf("%.9lf\n", ans);
}

