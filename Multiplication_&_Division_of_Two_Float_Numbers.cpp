#include <bits/stdc++.h>
using namespace std;

void computerResult(float a,float b) {
    cout<< fixed << setprecision(2) << a*b << endl;
    if (b != 0) {
        cout<< fixed << setprecision(2) << a/b << endl;
    }
    else {
        cout << "Undefined" <<endl;
    }
}
int main() {
    float a;
    float b;
    cin>>a>>b;
   computerResult(a,b);
    return 0;
}
