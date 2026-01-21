#include <iostream>
using namespace std;

void codestrings(string inp, string outp, int i) {

    if (i == inp.length()) {
        cout << outp << " ";
        return;
    }

    // One digit
    if (i < inp.length()) {
        int one = inp[i] - '0';
        char ch = 'a' + one - 1;
        codestrings(inp, outp + ch, i + 1);
    }

    // Two digits
    if (i + 1 < inp.length()) {
        int two = (inp[i] - '0') * 10 + (inp[i + 1] - '0');
        if (two <= 26) {
            char ch = 'a' + two - 1;
            codestrings(inp, outp + ch, i + 2);
        }
    }
}

int main() {
    string inp;
    cin >> inp;   // 1125
    codestrings(inp, "", 0);
}
