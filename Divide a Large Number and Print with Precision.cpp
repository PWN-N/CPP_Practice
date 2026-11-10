#include <bits/stdc++.h>
using namespace std;

void divideAndPrint(long long num, int divisor){
    cout << fixed << setprecision(2) << (double)num / divisor << endl;
    
}
int main() {
    long long num;
    int divisor;
    cin>> num >> divisor;
    divideAndPrint(num, divisor);
    return 0;
}
