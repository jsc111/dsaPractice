#include<bits/stdc++.h>

const int MAX_CHAR = 26;

using namespace std;

void sortString(string &s){

    int charCount[MAX_CHAR] = {0};

    for(int i = 0; i < s.length(); i++){
        // 'a'-'a' will be 0, 'b'-'a' will be 1, etc.
        charCount[s[i] - 'a']++;
    }

    for(int i = 0; i < MAX_CHAR; i++){
        for(int j = 0; j < charCount[i]; j++){
            cout<<(char)('a' + i);
        }
    }

}

int main(){

    string s = "morning star";

    sortString(s);

    return 0;
}



