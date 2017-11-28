#include <bits/stdc++.h>

using namespace std;

int ac[26];

int main(){
	int ret = 0;
	char str[1001], str2[1001];
	scanf("%s\n%s", str, str2);
	//printf("%s %s\n", str, str2);
	for(int i = 0; str[i]; i++) ac[str[i]-'a']++;
	for(int i = 0; str2[i]; i++) ac[str2[i]-'a']--;
	for(int i = 0; i < 26; i++) ret += abs(ac[i]);
	printf("%d\n", ret);
}