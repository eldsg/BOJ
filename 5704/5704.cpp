#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    while(1){
    	map<char, int> b;
        bool check = false;
    	string a;
    	getline(cin,a);
    	if(a[0] == '*') break;
        for(int i=0; i<a.size(); i++){
            b[a[i]]++;
        }
        for(char i='a'; i<='z'; i++){
            if(b[i]==0){
                check = true;
                cout << "N" << endl;
                break;
            }
        }
        if(!check) cout << "Y" << endl;
    }
}