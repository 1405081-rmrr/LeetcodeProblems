#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image)
    {
        vector<vector<int>>flip;
        vector<vector<int>> invert;
        for(int i=0;i<image.size();i++)
        {
            vector<int>v=image[i];
            reverse(v.begin(),v.end());
            flip.push_back(v);
        }
       /// cout<<"After flipping "<<endl;
       /* for(int i=0;i<flip.size();i++)
        {
            for(int j=0;j<flip[i].size();j++)
            {
                cout<< flip[i][j]<<" ";
            }
            cout<<endl;
        }*/
       /// cout<<endl;
        for(int i=0;i<flip.size();i++)
        {
            vector<int> v=flip[i];
            vector<int> r;
            r=invertImage(v);
           /// v=invertImage(v);
          ///  cout<<"After "<<i<<"th "<<"iteration "<<endl;
           /* for(int i=0;i<r.size();i++)
            {
                cout<<r[i]<<" ";
            }
            cout<<endl;*/
            invert.push_back(r);
        }
      ///  cout<<endl;
        return invert;
    }
    vector<int> invertImage(vector<int>&v)
    {
       /// cout<<"Before Iteration "<<endl;
       /* for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }*/
       /// cout<<endl;
        for(int i=0;i<v.size();i++)
        {

           if(v[i]==1)
           {
               v[i]=0;
               ///cout<<v[i]<<" ";
           }
           else
           {
               v[i]=1;
               ///cout<<v[i]<<" ";
           }

        }
        ///cout<<endl;
        ///cout<<"After Iteration "<<endl;
       /* for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        cout<<endl;*/
        return v;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> input{{1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0}};
    vector<vector<int>>result=s.flipAndInvertImage(input);
    for(int i=0;i<result.size();i++)
    {
        for(int j=0;j<result[i].size();j++)
        {
            cout << result[i][j]<<" ";
        }
        cout<<endl;
    }

}
