///warning: range-based 'for' loops only available with -std=c++11 or -std=gnu++11
///CodeBlocks-Settings-Complier 把 -std=c++11 的2011年的C++開起來
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for(char c : s){
        cout << c << "\n";
    }
}

