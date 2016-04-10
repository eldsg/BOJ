#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char word[30], word1[30];
	int check, i, j;
		for (; cin >> word, word[0] != '#';){
			check = 0;
			for (; cin >> word1, word1[0] != '#';){
				if (strlen(word) != strlen(word1)) check = 1;
				for (i = j = 0; word[i]; i++){
					j += word[i] != word1[i];
				}
				if (j != 1) check = 1;
				strcpy(word, word1);
			}
			if (check == 1){ cout << "Incorrect" << endl; }
			else cout << "Correct" << endl;
		}
}