#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    long long countGoodPairs(vector<int>& A, int k) {
       vector<long long> freq(k, 0);
       long long ans = 0;
       for(int x:A){
           int r= x%k ;
           if(r<0) r+=k;
           int need = (k-r) %k;
           ans += freq[need];
           freq[r]++;
       }
       return ans;
    }
};
