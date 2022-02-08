#include<iostream>
#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<cstdio>
#include <stdlib.h>
#include<stdio.h>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int _count=0;
        for(int i=0;i<jewels.size();i++)
        {
            for(int j=0;j<stones.size();j++)
            {
                if(jewels[i]==stones[j]) _count++;
            }
        }
        cout<<"Length of Jewels "<<jewels.size()<<endl;;
        cout<<"Length of Stones "<<stones.size()<<endl;
        return _count;
    }
};
int main()
{
    Solution s;
    int _count=s.numJewelsInStones("zsshuuehhakjsjkjsjkjsajsjsfdjhsdshdshdshdshdhderth","ZZfhjfhhdfdhfjdfhdfhdfhdfdkhfhdfhdfdfdfhhihhdhfdde");
    cout<<_count;
}
