#include<set>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	int testcase;
	scanf("%d", &testcase);
	while(testcase--){
		int num;
		scanf("%d ", &num);
		int sp = 0;
		multiset<int, greater<int> > buyer;
		multiset<int> seller;
		while(num--){
			char temp[16];
			int a, b;
			scanf(" %s %d shares at %d", temp, &a, &b);
			while(a--){
				if(!strcmp(temp, "buy")) buyer.insert(b);
				else seller.insert(b);
			}
			while(buyer.size() && seller.size()&& *buyer.begin() >= *seller.begin()){
				sp = *seller.begin();
				buyer.erase(buyer.begin());
				seller.erase(seller.begin());
			}
			if(seller.size()>0) printf("%d ", *seller.begin());
			else printf("- ");
			if(buyer.size()>0) printf("%d ", *buyer.begin());
			else printf("- ");
			if(sp>0) printf("%d\n", sp);
			else printf("-\n");
		}
	}
}

