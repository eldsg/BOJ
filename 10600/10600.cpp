#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int color[32][4]={
    {255, 255, 255}, {192,192,192}, {128, 128, 128},
    {0, 0, 0}, {255, 0, 0}, {128, 0, 0}, {255, 255, 0},
    {128, 128, 0}, {0, 255, 0}, {0, 128, 0}, {0, 255, 255},
    {0, 128, 128}, {0, 0, 255}, {0, 0, 128}, {255,0,255},
    {128, 0, 128}
};
string colorname[16] = {
    "White", "Silver", "Gray", "Black", "Red", "Maroon", "Yellow", "Olive",
    "Lime", "Green", "Aqua", "Teal", "Blue", "Navy", "Fuchsia", "Purple"
};
int main(){
    while(1){
        int r,g,b, d=1000000;
        int select = 0;
        scanf("%d %d %d", &r, &g, &b);
        if(r == -1 && g == -1 && b == -1) break;
        else{
            int temp = 0;
            for(int i = 0; i<16; i++){
                temp = (color[i][0]-r) *(color[i][0]-r)+ (color[i][1]-g) *(color[i][1]-g) + (color[i][2]-b) *(color[i][2]-b);
                if(temp < d ){
                    d = temp;
                    select = i;
                }
            }
            cout << colorname[select] << endl;
        }
    }
}
