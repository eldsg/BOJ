#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	while (T--){
		bool check = true;
		char a[110], b[110], temp[110];
		cin >> a >> b;
		int c = strlen(a);
		int d = strlen(b);
        if(c!=d){
            cout << a << " & " << b << " are NOT anagrams." << endl;
            continue;
        }
		for (int i = 0; i <= d; i++){
			temp[i] = b[i];
		}
		for (int i = 0; i < c; i++){
			for (int j = i; j < d; j++){
				if (a[i] == b[j]) swap(b[i], b[j]);
			}
		}
		for (int i = 0; i < c; i++){
			if (a[i] != b[i]) check = false;
		}
		if (!check) cout << a << " & " << temp << " are NOT anagrams." << endl;
		else cout << a << " & " << temp << " are anagrams." << endl;
	}
}