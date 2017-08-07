#include <bits/stdc++.h>

using namespace std;


int main()
{
    int T;
    int xPos[3001], yPos[3001];

    scanf("%d", &T);

    while ( T-- )
    {
        int count, ret = 0;
        scanf("%d", &count);
        vector<pair<int, int> > p;
        for ( int i = 0; i < count; i++ ){
            scanf("%d %d", xPos+i, yPos+i);
            p.push_back({xPos[i], yPos[i]});
        }
        sort(p.begin(), p.end());
        int a, b, c, d;
        for(int i = 0; i < count; i++){
            for(int j = i+1; j < count; j++){
                a = xPos[i] + xPos[j];
                b = yPos[i] + yPos[j];
                c = xPos[i] - xPos[j];
                d = yPos[i] - yPos[j];
                if(abs(a-b) & 1) continue;
                if(binary_search(p.begin(), p.end(), make_pair((a+d)/2, (b-c)/2)) && binary_search(p.begin(), p.end(), make_pair((a-d)/2, (b+c)/2))){
                    ret = max(ret, (c*c + d*d) / 2);
                }
            }
        }
        printf( "%d\n", ret);


    }
    return 0;
}