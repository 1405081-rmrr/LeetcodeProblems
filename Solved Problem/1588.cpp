#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
      int result=0;
      for(int i=0;i<arr.size();i++)
      {


          for(int j=i;j<arr.size();j++)
          {

              vector<int> temp;

              for(int k=i;k<=j;k++)
              {
                  temp.push_back(arr[k]);
              }
              if(temp.size()%2!=0)
              {

                  int temp_result=0;
                  for(int x=0;x<temp.size();x++)
                  {
                      //cout<< temp[x]<<" ";
                      temp_result+=temp[x];

                  }
                  result+=temp_result;
                  //cout<<endl;

                  //cout<<temp_result<<endl;
                  //cout<<"Final "<<result<<endl;
              }

          }
      }
        return result;
    }
};

int main()
{

    Solution solution=Solution();
    vector<int> x;
    x={1,4,2,5,3};
    cout<< solution.sumOddLengthSubarrays(x);
}

