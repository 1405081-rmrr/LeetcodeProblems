#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSteps(long long int num) {
        int _count=0;
        while(num!=0)
        {
            if(num%2==0)
            {
                num/=2;
                _count++;
            }
            else
            {
                num-=1;
                _count++;
            }
        }
        return _count;
    }
};

int main()
{
    Solution s;
    int r=s.numberOfSteps(123);
    cout<<r<<endl;
}
