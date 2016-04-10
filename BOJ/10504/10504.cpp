#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int N,k=2,t=32,a,b;
        bool check = false, check1=false;
        scanf("%d", &N);
        while(t--){
                if(k==N){
                    check = true;
                    break;
    			}
                k*=2;
        }        
        if(check) printf("IMPOSSIBLE\n");
        else if(N==1) printf("IMPOSSIBLE\n");
        else if(N%2==1){
            printf("%d = %d + %d\n", N, N/2, N/2+1);
        }
        else{
            	for(int i=2; i*i<=2*N; i++){
                    if(2*N%i == 0){
                    int v = 2*N/i;
                    if((i+v)%2==1){
                        a = (i+v-1)/2;
                        b = (v-i-1)/2;
                        break;
                    }
                }
                }
            	printf("%d = ", N);
            	for(int i=b+1; i<a; i++){
                    printf("%d + ", i);
                }
            	printf("%d\n",a);
            }            
    }
}

