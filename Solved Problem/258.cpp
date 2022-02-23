#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int addDigits(long long int num) {
        vector<int> number;

        int final_result=10;
        for (int i=0;i<3;i++)
        {
            while(num!=0)
            {
                int digit=num%10;
                num/=10;
                number.push_back(digit);
            }
            if(accumulate(number.begin(),number.end(),0)<10)
            {
                final_result=accumulate(number.begin(),number.end(),0);
                break;
            }

            num=accumulate(number.begin(),number.end(),0); ///adding number of vector
            number.clear();

        }
        return final_result;
    }
};
int main()
{
    Solution s=Solution();
    cout << s.addDigits(2e28) <<endl;
}
