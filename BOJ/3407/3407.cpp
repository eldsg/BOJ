#include <iostream>
#include <string>
using namespace std;

void testcase() {
    string str;
    cin >> str;
    bool reached = true, reached1 = false, reached2 = false;
    for (size_t i = 0; i < str.size(); ++i) {
        reached2 = reached1;
        reached1 = reached;
        reached = false;
        if (reached1) {
            if (str[i]=='b') reached = true;
            if (str[i]=='c') reached = true;
            if (str[i]=='f') reached = true;
            if (str[i]=='h') reached = true;
            if (str[i]=='i') reached = true;
            if (str[i]=='k') reached = true;
            if (str[i]=='n') reached = true;
            if (str[i]=='o') reached = true;
            if (str[i]=='p') reached = true;
            if (str[i]=='s') reached = true;
            if (str[i]=='u') reached = true;
            if (str[i]=='v') reached = true;
            if (str[i]=='w') reached = true;
            if (str[i]=='y') reached = true;
        }
        if (reached2) {
            if (str[i-1]=='a' and str[i]=='c') reached = true;
            if (str[i-1]=='a' and str[i]=='g') reached = true;
            if (str[i-1]=='a' and str[i]=='l') reached = true;
            if (str[i-1]=='a' and str[i]=='m') reached = true;
            if (str[i-1]=='a' and str[i]=='r') reached = true;
            if (str[i-1]=='a' and str[i]=='s') reached = true;
            if (str[i-1]=='a' and str[i]=='t') reached = true;
            if (str[i-1]=='a' and str[i]=='u') reached = true;
            if (str[i-1]=='b' and str[i]=='a') reached = true;
            if (str[i-1]=='b' and str[i]=='e') reached = true;
            if (str[i-1]=='b' and str[i]=='h') reached = true;
            if (str[i-1]=='b' and str[i]=='i') reached = true;
            if (str[i-1]=='b' and str[i]=='k') reached = true;
            if (str[i-1]=='b' and str[i]=='r') reached = true;
            if (str[i-1]=='c' and str[i]=='a') reached = true;
            if (str[i-1]=='c' and str[i]=='d') reached = true;
            if (str[i-1]=='c' and str[i]=='e') reached = true;
            if (str[i-1]=='c' and str[i]=='f') reached = true;
            if (str[i-1]=='c' and str[i]=='l') reached = true;
            if (str[i-1]=='c' and str[i]=='m') reached = true;
            if (str[i-1]=='c' and str[i]=='n') reached = true;
            if (str[i-1]=='c' and str[i]=='o') reached = true;
            if (str[i-1]=='c' and str[i]=='r') reached = true;
            if (str[i-1]=='c' and str[i]=='s') reached = true;
            if (str[i-1]=='c' and str[i]=='u') reached = true;
            if (str[i-1]=='d' and str[i]=='b') reached = true;
            if (str[i-1]=='d' and str[i]=='s') reached = true;
            if (str[i-1]=='d' and str[i]=='y') reached = true;
            if (str[i-1]=='e' and str[i]=='r') reached = true;
            if (str[i-1]=='e' and str[i]=='s') reached = true;
            if (str[i-1]=='e' and str[i]=='u') reached = true;
            if (str[i-1]=='f' and str[i]=='e') reached = true;
            if (str[i-1]=='f' and str[i]=='l') reached = true;
            if (str[i-1]=='f' and str[i]=='m') reached = true;
            if (str[i-1]=='f' and str[i]=='r') reached = true;
            if (str[i-1]=='g' and str[i]=='a') reached = true;
            if (str[i-1]=='g' and str[i]=='d') reached = true;
            if (str[i-1]=='g' and str[i]=='e') reached = true;
            if (str[i-1]=='h' and str[i]=='e') reached = true;
            if (str[i-1]=='h' and str[i]=='f') reached = true;
            if (str[i-1]=='h' and str[i]=='g') reached = true;
            if (str[i-1]=='h' and str[i]=='o') reached = true;
            if (str[i-1]=='h' and str[i]=='s') reached = true;
            if (str[i-1]=='i' and str[i]=='n') reached = true;
            if (str[i-1]=='i' and str[i]=='r') reached = true;
            if (str[i-1]=='k' and str[i]=='r') reached = true;
            if (str[i-1]=='l' and str[i]=='a') reached = true;
            if (str[i-1]=='l' and str[i]=='i') reached = true;
            if (str[i-1]=='l' and str[i]=='r') reached = true;
            if (str[i-1]=='l' and str[i]=='u') reached = true;
            if (str[i-1]=='l' and str[i]=='v') reached = true;
            if (str[i-1]=='m' and str[i]=='d') reached = true;
            if (str[i-1]=='m' and str[i]=='g') reached = true;
            if (str[i-1]=='m' and str[i]=='n') reached = true;
            if (str[i-1]=='m' and str[i]=='o') reached = true;
            if (str[i-1]=='m' and str[i]=='t') reached = true;
            if (str[i-1]=='n' and str[i]=='a') reached = true;
            if (str[i-1]=='n' and str[i]=='b') reached = true;
            if (str[i-1]=='n' and str[i]=='d') reached = true;
            if (str[i-1]=='n' and str[i]=='e') reached = true;
            if (str[i-1]=='n' and str[i]=='i') reached = true;
            if (str[i-1]=='n' and str[i]=='o') reached = true;
            if (str[i-1]=='n' and str[i]=='p') reached = true;
            if (str[i-1]=='o' and str[i]=='s') reached = true;
            if (str[i-1]=='p' and str[i]=='a') reached = true;
            if (str[i-1]=='p' and str[i]=='b') reached = true;
            if (str[i-1]=='p' and str[i]=='d') reached = true;
            if (str[i-1]=='p' and str[i]=='m') reached = true;
            if (str[i-1]=='p' and str[i]=='o') reached = true;
            if (str[i-1]=='p' and str[i]=='r') reached = true;
            if (str[i-1]=='p' and str[i]=='t') reached = true;
            if (str[i-1]=='p' and str[i]=='u') reached = true;
            if (str[i-1]=='r' and str[i]=='a') reached = true;
            if (str[i-1]=='r' and str[i]=='b') reached = true;
            if (str[i-1]=='r' and str[i]=='e') reached = true;
            if (str[i-1]=='r' and str[i]=='f') reached = true;
            if (str[i-1]=='r' and str[i]=='g') reached = true;
            if (str[i-1]=='r' and str[i]=='h') reached = true;
            if (str[i-1]=='r' and str[i]=='n') reached = true;
            if (str[i-1]=='r' and str[i]=='u') reached = true;
            if (str[i-1]=='s' and str[i]=='b') reached = true;
            if (str[i-1]=='s' and str[i]=='c') reached = true;
            if (str[i-1]=='s' and str[i]=='e') reached = true;
            if (str[i-1]=='s' and str[i]=='g') reached = true;
            if (str[i-1]=='s' and str[i]=='i') reached = true;
            if (str[i-1]=='s' and str[i]=='m') reached = true;
            if (str[i-1]=='s' and str[i]=='n') reached = true;
            if (str[i-1]=='s' and str[i]=='r') reached = true;
            if (str[i-1]=='t' and str[i]=='a') reached = true;
            if (str[i-1]=='t' and str[i]=='b') reached = true;
            if (str[i-1]=='t' and str[i]=='c') reached = true;
            if (str[i-1]=='t' and str[i]=='e') reached = true;
            if (str[i-1]=='t' and str[i]=='h') reached = true;
            if (str[i-1]=='t' and str[i]=='i') reached = true;
            if (str[i-1]=='t' and str[i]=='l') reached = true;
            if (str[i-1]=='t' and str[i]=='m') reached = true;
            if (str[i-1]=='x' and str[i]=='e') reached = true;
            if (str[i-1]=='y' and str[i]=='b') reached = true;
            if (str[i-1]=='z' and str[i]=='n') reached = true;
            if (str[i-1]=='z' and str[i]=='r') reached = true;
        }
    }
    cout << (reached ? "YES" : "NO") << endl;
}

int main() {
    size_t t;
    for (cin >> t; t; --t) testcase();
    return 0;
}
