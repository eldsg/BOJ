#include<stdio.h>
#include<math.h>
#include<algorithm>
int main(){
    int t;
    int a[3];
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        scanf("%d%d%d",&a[0],&a[1],&a[2]);
        std::sort(a, a+3);
        if(i!=t){
        	if(a[0]*a[0]+a[1]*a[1] == a[2]*a[2])
            	printf("Scenario #%d:\nyes\n\n",i);
        	else printf("Scenario #%d:\nno\n\n",i);
        }
        else{
            if(a[0]*a[0]+a[1]*a[1] == a[2]*a[2])
            	printf("Scenario #%d:\nyes",i);
        	else printf("Scenario #%d:\nno",i);        
        }
	}
}