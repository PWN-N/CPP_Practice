#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    string comparison(int n, int m){
        if(n<m){
            return "lesser";
        }else if(n==m){
            return "equal";
        }else{
            return "greater";
        }
    }
};
