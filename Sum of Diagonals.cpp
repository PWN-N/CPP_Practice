#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void sumOfDiagonals(int matrix[][1000], int n) {
        int result1 = 0;
        int result2 = 0;
        for(int i=0; i<n; i++){
            result1 += matrix[i][i];
            result2 += matrix[i][n-1-i];
        }
        cout<<result1<<" "<<result2;
    }
};
