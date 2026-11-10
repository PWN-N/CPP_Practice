#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    string isDominant(int P, int Q, int R) {
       if(P>Q+R){
        return "YES";   
       }else if(Q>P+R){
           return "YES";
       }else if(R>P+Q){
           return "YES";
       }else{
           return "NO";
       }
    }
};
