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
    bool hasGroupsSizeX(vector<int>& deck)
    {

        if(deck.size()==1) return false;
        map<int,int>m;
        for(int i=0;i<=1e4;i++)
        {
            m.insert({i,0});
        }
        int _count=0;
        for(int i=0;i<deck.size();i++)
        {
            m[deck[i]]++;
        }
        map<int,int> :: iterator itr;

        int _countvalue=0;
        int _equalval=0;
        vector<int> _countAllEqual;
        int _greaterthanzero=0;
        for(itr=m.begin();itr!=m.end();itr++)
        {
            if(itr->second !=0 )
            {
               /// cout<<itr->first<<endl;

                _greaterthanzero++;
            ///cout<< itr->first <<" "<<itr->second<<endl;
                _countAllEqual.push_back(itr->second);
            }

        }
        if(_countAllEqual.size()==0) return false;
        ///Checking All Equal !!
        for(int i=0;i<_countAllEqual.size()-1;i++)
        {
            if(_countAllEqual[i]==_countAllEqual[i+1])
            {
                _countvalue++;
            }
        }
       /// sort(_countAllEqual.begin(),_countAllEqual.end());
        ///cout<<"Vector "<<endl;
        /* for(int i=0;i<_countAllEqual.size();i++)
         {
             cout<< _countAllEqual[i] << " ";
         }
         cout<<endl;*/

        if(_countvalue==_countAllEqual.size()-1) return true;
        _countvalue=0;
     /* for(int i=0;i<_countAllEqual.size();i++)
      {
          if(_countAllEqual[i]%2==0)
          {
              _countvalue++;
          }
      }
        if(_countvalue==_greaterthanzero)
        {
            return true;
        }
        return false;*/
        int _gcd=findGCD(_countAllEqual);
        if(_gcd>=2) return true;
        else return false;

    }
   int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}


// Function to find gcd of array of
// numbers
int findGCD(vector<int>&a)
{
    int result = a[0];
    for (int i = 1; i < a.size(); i++)
    {
        result = gcd(a[i], result);

        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}


};
int main()
{
    Solution s;
   /// vector<int> v{1,1,1,1,2,2,3,3,3,3,3,3}; /// true ashar kotha..
   vector<int> v{1,1,1,1,2,2,2,2,2,2};
    bool x=s.hasGroupsSizeX(v);
    cout<<boolalpha  <<x;
}
