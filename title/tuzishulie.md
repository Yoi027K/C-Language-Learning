# 7-9 兔子繁衍问题

一对兔子，从出生后第3个月起每个月都生一对兔子。小兔子长到第3个月后每个月又生一对兔子。假如兔子都不死，请问第1个月出生的一对兔子，至少需要繁衍到第几个月时兔子总数才可以达到N对？

### 输入格式:

输入在一行中给出一个不超过10000的正整数N。

### 输出格式:

在一行中输出兔子总数达到N最少需要的月数。

### My answer:

```cpp
#include <iostream>

using namespace std;

int main()
{
    long long a = 1;
    long long b = 1;
    int n;
    int month = 2;
    cin >> n;
    if(n==1){
        cout << "1";
        return 0;
    }
    while(b<n){
        long long c = a + b;
        a = b;
        b = c;
        month++;
    }

    cout << month;

    return 0;
}
```