#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void manipulateArray(int arr[], int n, int k) {
        arr[(n-1)/2] *=k;
        
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    }
};
