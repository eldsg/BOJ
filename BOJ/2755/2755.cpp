#include<stdio.h>
#include<math.h>
#define ROUNDING(x, dig) (floor((x) * pow(10, dig) + 0.5f) / pow(10, dig))
int main(){
    int a,hak, haks=0;
    double score;
    char b[200], c[10];
    scanf("%d", &a);
    while(a--){
        scanf("%s %d %s", &b,&hak,&c);
        haks += hak;
        if(c[0] == 'A'){
            if(c[1] == '+'){
                score += hak*4.3;
            }
            else if(c[1] == '-'){
                score += hak*3.7;
            }
            else score += hak*4.0;
        }
        else if(c[0] == 'B'){
            if(c[1] == '+'){
                score += hak*3.3;
            }
            else if(c[1] == '-'){
                score += hak*2.7;
            }
            else score += hak*3.0;
        }
        else if(c[0] == 'C'){
            if(c[1] == '+'){
                score += hak*2.3;
            }
            else if(c[1] == '-'){
                score += hak*1.7;
            }
            else score += hak*2.0;
        }
        else if(c[0] == 'D'){
            if(c[1] == '+'){
                score += hak*1.3;
            }
            else if(c[1] == '-'){
                score += hak*0.7;
            }
            else score += hak*1.0;
        }
        else score+=hak*0;
    }
    double num = ROUNDING(score/haks,2);
    printf("%.2lf", num);
}