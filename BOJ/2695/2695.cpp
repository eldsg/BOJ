
#include<stdio.h>
int ballcount[51][1001];
int balls(int a, int b){
    if(a==1) return b;
    if(!b) return 0;
    if(b==1) return 1;
    if(ballcount[a][b] >=0 ){
        return ballcount[a][b];
    }
    int temp = b;
    for(int i=1; i<=b; ++i){
        int x = balls(a-1,i-1);
        int y = balls(a, b-i);
        int z = 1+ (x >y ? x:y);
        temp = (z < temp ? z : temp);
    }
    ballcount[a][b] = temp;
    return temp;
}
int main(){
    int test;
    for(int i = 1; i<=1000; ++i){
        ballcount[1][i] = i;
    }
    for(int i = 2; i<=50; ++i){
        ballcount[i][1] = 1;
        ballcount[i][0] = 0;
    }
    for(int i = 2; i<=50; ++i){
        for(int j = 2; j<=1000; ++j){
            ballcount[i][j] = -1;
        }
    }
    scanf("%d", &test);
    while(test--){
        int ball, floor;
        scanf("%d %d", &ball, &floor);
        int result = balls(ball, floor);
        printf("%d\n", result);
    }
    
}
