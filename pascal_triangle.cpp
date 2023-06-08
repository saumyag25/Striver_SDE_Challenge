#include <bits/stdc++.h>
  vector<long long int> generater(int r){
        long long ans=1;
        vector<long long int> temp;
        temp.push_back(1);
        for(int j=1;j<r;j++){
            ans=ans*(r-j);
            ans=ans/j;
            temp.push_back(ans);
        }
        return temp;
    }
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> res;
        for(int i=1;i<=n;i++){
            res.push_back(generater(i));
        }
        return res;
}