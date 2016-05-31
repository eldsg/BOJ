#include<vector>
#include<string>
#include<iostream>

using namespace std;

class BinaryCode{
	public:
		vector<string> decode(string message){
			vector<string> result;
			string temp, temp1;
			temp += '0', temp1 += '1';
			int size = message.size();
			temp+= (message[0]-'0') - (temp[0]-'0')+'0';
			//cout << temp << endl;
			for(int i = 1; i<size-1; i++){
				temp += (message[i]-'0')-(temp[i-1]-'0')-(temp[i]-'0') +'0';
			}
			
			temp1+= (message[0]-'0') - (temp1[0]-'0')+'0';
			for(int i = 1; i<size-1; i++){
				temp1 += (message[i]-'0')-(temp1[i-1]-'0')-(temp1[i]-'0')+'0';
			}
			//cout << temp << " " << temp1 << endl;
			int tsize = temp.size();
			for(int i = 0; i<tsize; i++){
				if(temp[i] != '0' && temp[i] != '1'){
					temp.clear();
					temp.append("NONE");
					break;
				}
			}
			tsize = temp1.size();
			for(int i = 0; i<tsize; i++){
				if(temp1[i] != '0' && temp1[i] != '1'){
					temp1.clear();
					temp1.append("NONE");
					break;
				}
			}
			result.push_back(temp);
			result.push_back(temp1);
			return result;
		}
};
