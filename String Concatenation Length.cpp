#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int lengthAfterConcat(int n, string arr[]) {
        string result = "";
        for(int i=0; i<n; i++){
            result += arr[i];
        }
        return result.length();
    }
};
