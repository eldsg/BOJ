#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<map>

using namespace std;

map<char, bool> ret;


int main(){
	char str[501];
	scanf("%s", str);
	int size = strlen(str);
	ret[str[0]] = true;
	bool success = true;
	int k = 1;
	for(int i = 1; i < size; i++){
		if(ret[str[i]]){
			k++;
			continue;
		}
		if(str[i]-1 != str[i-k] && !ret[str[i]]){
			success = false;
			break;
		}
		else{
			ret[str[i]] = true;
			k=1;
		}
	}
	if(success && str[0] == 'a') printf("YES\n");
	else printf("NO\n");
}
