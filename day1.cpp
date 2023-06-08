#include <bits/stdc++.h>

void markr(vector<vector<int>>& mat,int n,int m,int i){
        for(int j=0;j<m;j++){
            if(mat[i][j]!=0){
                mat[i][j]=-4;
            }
        }
    }
    void markc(vector<vector<int>>& mat,int n,int m,int j){
        for(int i=0;i<n;i++){
            if(mat[i][j]!=0){
                mat[i][j]=-4;
            }
        }
    }
    void setZeros(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                   markr(mat,n,m,i);
                    markc(mat,n,m,j);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
              if (mat[i][j] == -4) {
                mat[i][j] = 0;
              }
            }
        }
    }