#include<stdio.h>
#include<vector>
using namespace std;
int n,m;
vector<int> s;
int main()
{
    int i, j, k, l;
    scanf("%d %d",&n,&m);
    for(i=1; i<=n; i++)
        s.push_back(i);
    j=m-1;
    k=n;
    printf("<");
    for(i=0; i<k; i++)
    {
        printf("%d",s[j]);
        s.erase(s.begin() + j);
        if(n==1){printf(">");break;}
        printf(", ");
        j+=(m-1);
        n--;
        j%=n;
    }
}