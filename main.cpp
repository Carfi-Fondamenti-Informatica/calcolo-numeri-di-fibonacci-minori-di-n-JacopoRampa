#include <iostream>
using namespace std;

int main() {
    int a=1,b=1,c=0,n=0;
    cin >> n;
    if(n>0){
        cout << a << endl;
        cout << b << endl;
        c=a+b;
        a=b;
        b=c;
        while(c<=n){
            cout << c <<endl;
            c=a+b;
            a=b;
            b=c;
        }
    }
    return 0;
}
