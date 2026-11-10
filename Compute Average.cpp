#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    double calculateAverage(int arr[], int n) {
        int result = 0;
        for(int i=0; i<n; i++){
            result += arr[i];
        }
        return (double)result / n;
    }
};
