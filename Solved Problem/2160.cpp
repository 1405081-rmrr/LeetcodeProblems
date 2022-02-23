#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:

    int minimumSum(int num) {
        vector<int> number;
        while(num!=0)
        {
            int digit=num%10;
            num/=10;
            number.push_back(digit);
        }
        sort(number.begin(),number.end());
        /*for(int i=0;i<number.size();i++)
        {
            cout<< number[i] <<" ";
        }*/
        return (number[0]*10+number[2])+(number[1]*10+number[3]);
    }
};

int main()
{
    Solution s=Solution();
    cout<<s.minimumSum(4009)<<endl;;
}
