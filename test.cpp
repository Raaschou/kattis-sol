
#include <algorithm>
#include <iostream>

#include <map>
#include <set>
#include <sstream>
#include <unordered_map>
#include <vector>
using namespace std;
string encode(vector<string>& strs) {
    string encodedString {};
    for (auto str : strs) {
        encodedString.append(str);
        encodedString.append("-");
    }


    return encodedString;
}

vector<string> decode(string s) {
    vector<string> decodedString;
    const char delim {'-'};
    stringstream ss {s};
    std::string item;

    while (getline(ss, item, delim)) {
        decodedString.push_back (item);
    }
    return decodedString;
}

int main() {



    return 0;
}