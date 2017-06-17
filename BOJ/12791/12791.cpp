#include<vector>
#include<string>
#include<cstdio>
#include<iostream>
#define mod 1967

using namespace std;

vector<vector<string> > ret;

void init(){
	ret.resize(100);
	ret[1967%mod].push_back("DavidBowie");
	ret[1969%mod].push_back("SpaceOddity");
	ret[1970%mod].push_back("TheManWhoSoldTheWorld");
	ret[1971%mod].push_back("HunkyDory");
	ret[1972%mod].push_back("TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars");
	ret[1973%mod].push_back("AladdinSane");
	ret[1973%mod].push_back("PinUps");
	ret[1974%mod].push_back("DiamondDogs");
	ret[1975%mod].push_back("YoungAmericans");
	ret[1976%mod].push_back("StationToStation");
	ret[1977%mod].push_back("Low");
	ret[1977%mod].push_back("Heroes");
	ret[1979%mod].push_back("Lodger");
	ret[1980%mod].push_back("ScaryMonstersAndSuperCreeps");
	ret[1983%mod].push_back("LetsDance");
	ret[1984%mod].push_back("Tonight");
	ret[1987%mod].push_back("NeverLetMeDown");
	ret[1993%mod].push_back("BlackTieWhiteNoise");
	ret[1995%mod].push_back("1.Outside");
	ret[1997%mod].push_back("Earthling");
	ret[1999%mod].push_back("Hours");
	ret[2002%mod].push_back("Heathen");
	ret[2003%mod].push_back("Reality");
	ret[2013%mod].push_back("TheNextDay");
	ret[2016%mod].push_back("BlackStar");
}

int main(){
	init();
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b, r = 0;
		scanf("%d%d", &a, &b);
		if(a < 1967) a = 1967;
		for(int i = a; i <= b; i++){
			r += ret[i%mod].size();
		}
		cout << r << endl;
		for(int i = a; i <= b; i++){
			int size = ret[i%mod].size();
			for(int j = 0; j < size; j++){
				cout << i << " " << ret[i%mod][j] << endl;
			}
		}
	}
}

