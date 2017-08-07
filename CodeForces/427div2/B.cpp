#include <bits/stdc++.h>

using namespace std;

int main(){
	int k;
	char str[100010];
	scanf("%d %s", &k ,str);
	int ret = 0;
	int len = strlen(str);
	for(int i = 0; str[i]; i++) ret += str[i]-'0';
	sort(str, str+len);
	//cout << str << endl;
	int cnt = 0;
	while(ret < k){
		ret += '9'-str[cnt];
		cnt++;
	}
	printf("%d\n", cnt);
}