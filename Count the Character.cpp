#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int countChar(string str, char ch) {
        int count=0;
        for(int i=0; i<str.length(); i++){
            if(ch==str[i]){
                count++;
            }
        }
        return count;
    }
};
