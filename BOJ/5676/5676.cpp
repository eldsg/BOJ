#include <cstdio>
#include <cstring>
int n = 111111;
int _0[1<<20],minus[1<<20],N,K;
bool select;
int read(int *tree,int idx) {
    int sum = 0;
    while ( idx > 0 ) {
        sum += tree[idx];
        idx -= ( idx & -idx);
    }
    return sum;
}
void update(int *tree,int idx,int val) {
    while ( idx <= n ) {
        tree[idx] +=val;
        idx += (idx & -idx);
    }
}
int x[111111];
int main() {
    for ( ; scanf("%d%d",&N,&K) == 2 ; ) {
        memset(_0,0,sizeof(_0));
        memset(minus,0,sizeof(minus));
        memset(x,0,sizeof(x));
        for ( int i = 1;  i <= N ; i++ ) {
            scanf("%d",&x[i]);
            if ( x[i] < 0 ) update(minus,i,1);
            else if ( x[i] == 0 ) update(_0,i,1);
        }
        for ( int i = 0 ; i < K ; i++ ) {
            char tmp[111];int a,b;
            scanf("%s %d %d",tmp,&a,&b);
            if ( tmp[0] == 'C' ) {
                if ( x[a] < 0 ) update(minus,a,-1);
                else if ( x[a] == 0 ) update(_0,a,-1);
                x[a] = b;
                if ( x[a] < 0 ) update(minus,a,1);
                else if ( x[a] == 0 ) update(_0,a,1);
            }
            else {
                int zeroCount=read(_0,b) - read(_0,a-1);
                int minusCount = read(minus,b)-read(minus,a-1);
                printf("%c",zeroCount?'0':minusCount%2==1?'-':'+');
            }
        }
        puts("");
    }
    return 0;
}