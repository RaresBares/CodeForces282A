#include <iostream>
#include <string>
using namespace std;

int main() {

    int x = 0;

    int i;
    cin >> i;
    for (int j = 0; j < i; ++j) {
        string s;
        cin >> s;
        if(s == "X++" ||s == "++x" ||s == "++X" ||s == "x++") {
            x++;
        } else{
            x--;
        }
    }

    cout << x;

    return 0;
}
