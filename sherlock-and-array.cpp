#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long sum(vector<long long> &tree, int i) {
    long long ans = 0;
    while (i > 0) {
        ans += tree[i];
        i -= (i & -i);
    }
    return ans;
}
void update(vector<long long> &tree, int i, long long diff) {
    while (i < tree.size()) {
        tree[i] += diff;
        i += (i & -i);
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int c;
        scanf("%d", &c);
        bool check2 = false;
        if(c==1){
            printf("YES");
            check2 = true;
        }
        if(!check2){
            bool check = false;
            vector<long long> num(c+1);
            vector<long long> tree(c+1);
            for(int j = 1; j <= c; j++){
                scanf("%lld", &num[j]);
                update(tree, j, num[j]);
            }
            for(int j = 2; j < c; j++){
                long long sum1 = sum(tree, j-1);
                long long sum2 = sum(tree, c) - sum(tree, j);
                if(sum1 == sum2){
                    printf("YES\n");
                    check = true;
                    break;
                }
            }
            if(!check) printf("NO\n");
        }
    }
    return 0;
}

