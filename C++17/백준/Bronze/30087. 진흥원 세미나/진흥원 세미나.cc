#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while(n--) {
        string str;
        cin >> str;
        if(str == "Algorithm") cout << 204 << '\n';
        if(str == "DataAnalysis") cout << 207 << '\n';
        if(str == "ArtificialIntelligence") cout << 302 << '\n';
        if(str == "CyberSecurity") cout << "B101" << '\n';
        if(str == "Network") cout << 303 << '\n';
        if(str == "Startup") cout << 501 << '\n';
        if(str == "TestStrategy") cout << 105 << '\n';
    }
}