#include<bits/stdc++.h>
using namespace std;

vector<string> split(string input, string delimiter) {
    vector<string> res;
    long long pos;
    string token;
    
    while((pos = input.find(delimiter)) != string::npos) {
        token = input.substr(0, pos);
        res.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    res.push_back(token);
    return res;
}

int main() {
    string abc = "abc abc abc";
    string delimiter = "";
    vector<string> res = split(abc, delimiter);
    for(string s: res) cout << s << " ";
    return 0;
}