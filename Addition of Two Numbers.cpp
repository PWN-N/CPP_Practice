#include <bits/stdc++.h>
using namespace std;

void performOperation(int a, int b, char op) {
    int result;
    switch (op) {
        case '+': result = a+b; break;
        case '-': result = a-b; break;
        case '*': result = a*b; break;
        case '/': result= a/b; break; 
    }
    cout<<result<<endl;
}

int main() {
    int a,b;
    char op;
    cin>>a>>b>>op;
    performOperation(a, b, op);
    return 0;
}
