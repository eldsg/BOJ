#include <bits/stdc++.h>

using namespace std;

class BigInteger {
private:
	string integer;
public:
	BigInteger(unsigned int integer);
	BigInteger(string integer);
	void setInteger(unsigned int integer);
	void setInteger(string integer);
	unsigned int getIntValue() const;
	string toString() const;
	BigInteger addInteger(const BigInteger& integer_to_add) const;
	BigInteger addInteger(const string& integer_to_add) const;
	BigInteger multiplyInteger(const BigInteger& integer_to_multiply) const;
	BigInteger multiplyInteger(const string& integer_to_multiply) const;
	static size_t getTrimIndex(const string& integer);
	bool operator==(const BigInteger& integer) const;
	BigInteger operator+(const BigInteger& integer) const;
	BigInteger operator*(const BigInteger& integer) const;
	friend ostream& operator<<(ostream& in, BigInteger& integer);
};


BigInteger::BigInteger(unsigned int integer) {
	setInteger(integer);
}

BigInteger::BigInteger(string integer) {
	for (int i = 0; i < (int)integer.size() && integer[i] >= '0' && integer[i] <= '9'; i++) {
		this->integer += integer[i];
	}

	if (this->integer.size() == 0) {
		this->integer = "0";
	} else {
		this->integer = integer.substr(getTrimIndex(integer));
	}
}

void BigInteger::setInteger(unsigned int integer) {
	if (integer == 0) this->integer = "0";

	while (integer) {
		this->integer = (char)((integer % 10) + '0') + this->integer;
		integer /= 10;
	}
}

void BigInteger::setInteger(string integer) {
	this->integer = integer;
}
string BigInteger::toString() const {
	return integer;
}

BigInteger BigInteger::addInteger(const BigInteger& integer_to_add) const {
	int a_n = max((int)(integer_to_add.toString().size() - toString().size()), 0);
	int b_n = max((int)(toString().size() - integer_to_add.toString().size()), 0);
	string a = string(a_n, '0') + toString();
	string b = string(b_n, '0') + integer_to_add.toString();

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	string result; int carry = 0;

	for (int i = 0; i < (int)a.size(); i++) {
	   int sum = (a[i] - '0') + (b[i] - '0') + carry;
	   result += ((char)(sum % 10 + '0'));
	   carry = sum / 10;
	}

	if (carry != 0) result += ((char)(carry + '0'));

	reverse(result.begin(), result.end());

	return BigInteger(result.substr(getTrimIndex(result)));
}

BigInteger BigInteger::addInteger(const string& integer_to_add) const {
	return addInteger(BigInteger(integer_to_add));
}
size_t BigInteger::getTrimIndex(const string& integer) {
	size_t index = 0;
	while (integer[index] == '0' && index < integer.size() - 1) index++;
	return index;
}
BigInteger BigInteger::multiplyInteger(const BigInteger& integer_to_multiply) const {
	string a = integer_to_multiply.toString();
	string b = toString();

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	BigInteger ret("0");

	for (int i = 0; i < (int)a.size(); i++) {
		int carry = 0; string tmp = string(i, '0');

		for (int j = 0; j < (int)b.size(); j++) {
			int mul = (a[i] - '0') * (b[j] - '0') + carry;
			tmp += ((char)(mul % 10 + '0'));
			carry = mul / 10;
		}

		if (carry != 0) tmp += (carry + '0');

		reverse(tmp.begin(), tmp.end());

		ret = ret.addInteger(tmp.substr(getTrimIndex(tmp)));
	}

	return ret;
}

BigInteger BigInteger::multiplyInteger(const string& integer_to_multiply) const {
	return multiplyInteger(BigInteger(integer_to_multiply));
}

BigInteger BigInteger::operator+(const BigInteger& integer) const {
	return addInteger(integer);
}

BigInteger BigInteger::operator*(const BigInteger& integer) const {
	return multiplyInteger(integer);
}

ostream& operator<<(ostream& in, BigInteger& integer) {
	in << integer.toString();

	return in;
}

vector<int> p;
int k;
bool prime[11112];
int pn[11112];
void init(){
	for(int i = 2; i <= sqrt(11111); i++){
		if(!prime[i]){
			for(int j = i*i; j <= 11111; j+=i){
				prime[j] = true;
			}
		}
	}
	for(int i = 2; i <= 11111; i++){
		if(!prime[i]) p.push_back(i);
	}
}
unsigned int fp(int n, int m){
	unsigned int ret = 0;
	do{
		n /= m;
		ret += n;
	}while(n);
	return ret;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	init();
	cin >> k;
	BigInteger ret(1);
	//cout << p.size() << endl;
	for(auto j : p){
			//cout << j << endl;
			if(j > k) break;
			BigInteger a(2*fp(k,j)+1);
			ret = ret * a;
	}
	cout << ret << endl;
	//cout << (ret-1)*2+1 << endl;
}