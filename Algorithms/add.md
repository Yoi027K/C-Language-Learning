```cpp
#include <iostream>
#include <string>

using namespace std;

int a1[205],a2[205],a3[205];

int main()
{
    string s1;
    string s2;
    int flag = 1;

    cin >> s1 >> s2;

    if(s1.size()<s2.size() || s1.size()==s2.size() && s1<s2){
        swap(s1,s2);
        flag = 0;
    }

    for(int i=0;i<s1.size();i++){
        a1[s1.size()-i-1] = s1[i]- '0';
    }
    for(int i=0;i<s2.size();i++){
        a2[s2.size()-i-1] = s2[i]- '0';
    }

    int len = s1.size();

    for(int i=0;i<len;i++){
        if(a1[i]<a2[i]){
            a1[i] += 10;
            a1[i+1]--;
        }
        a3[i] = a1[i] - a2[i];
    }

    if(a3[len-1]==0){
        len--;
    }

    if(!flag)   cout << "-";
    
    for(int i=len-1;i>=0;i--){
        cout << a3[i];
    }

    return 0;
}
```