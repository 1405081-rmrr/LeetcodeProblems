#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

int numberOfSteps (int num) {
		if(!num) return 0;
        int res = 0;
        while(num) {
           /// res += (num & 1) ? 2 : 1;
           if(num&1==1) res+=2;
           else res+=1;
            cout<< res<<endl;
            num >>= 1;
        }
        return res - 1;
    }

};
int main()
{
    Solution s;
    int r=s.numberOfSteps(123);
    cout<<"Final "<<r<<endl;
}
