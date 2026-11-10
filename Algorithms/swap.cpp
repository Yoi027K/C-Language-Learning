#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 3;
    int c = 8;
    int t;
    if(a>b) {t=a;a=b;b=t;}
    if(a>c) {t=a;a=c;c=t;}
    if(b>c) {t=b;b=c;c=t;}
    cout << a << " " << b << " " << c;
}