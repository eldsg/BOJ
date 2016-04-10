#include<iostream>
using namespace std;
int X[101],Y[101];
char pos[101];
int main(){
    int A,B,N,M;
    cin >> A >> B;
    cin >> N >> M;
    for(int i=1; i<=N; i++){
        cin >> X[i] >> Y[i] >> pos[i];
    }
    for(int i=0; i<M; i++){
        int ro,repe;
        char act;
        cin >> ro >> act >> repe;
    	if(act == 'L' || act =='R') repe%=4;
        for(int j=0; j<repe; j++){
            if(act == 'F'){
                int xx=0, yy=0;
                switch(pos[ro]){
                    case 'N':
                    	yy=1; break;
                    case 'E':
                    	xx=1; break;
                    case 'S':
                    	yy=-1; break;
                    case 'W':
                    	xx=-1; break;
                }
                X[ro] += xx;
                Y[ro] += yy;
                if(X[ro] <=0 || X[ro]>A || Y[ro] <=0 || Y[ro] > B){
                    cout << "Robot " << ro <<" crashes into the wall"<<endl;
                    return 0;
                }
                for(int k=1; k<=N; k++){
                    if(k!=ro && X[k] == X[ro] && Y[k]==Y[ro]){
                        cout << "Robot "<< ro << " crashes into robot " << k <<endl;
                        return 0;
                    }
                }
            }
            else if(act == 'R'){
                switch(pos[ro]){
                    case 'N':
                    	pos[ro] = 'E'; break;
                    case 'E':
                    	pos[ro] = 'S'; break;
                    case 'S':
                    	pos[ro] = 'W'; break;
                    case 'W':
                    	pos[ro] = 'N'; break;
                }
            }
            else if(act == 'L'){
                switch(pos[ro]){
                    case 'N':
                    	pos[ro] = 'W'; break;
                    case 'W':
                    	pos[ro] = 'S'; break;
                    case 'S':
                    	pos[ro] = 'E'; break;
                    case 'E':
                    	pos[ro] = 'N'; break;
                }
            }
        }
    }
    cout << "OK" << endl;
}