```cpp
#include <iostream>

using namespace std;

long long ksm(long long a,long long n)
{
    long long ans = 1;
    while(n>0){
        if(n&1){
            ans = ans*a;
        }
        a *= a;
        n >>= 1;
    }
    return ans;
}

int main()
{
    cout << ksm(2,50);

    return 0;
}
```