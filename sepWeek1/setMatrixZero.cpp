/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.

Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]*/

// solution
// travaerse the matrix , when got 0, set previous of thin row and column zero;


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size(), c=matrix[0].size();
        set<int> ro,col;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(matrix[i][j]==0)
                {
                    ro.insert(i);
                    col.insert(j);
                    
                    for(int k=i-1; k>=0; k--)
                    {
                        matrix[k][j]=0;
                    }
                    for(int k=j-1; k>=0; k--)
                    {
                        matrix[i][k]=0;
                    }
                }
                else{
                    if(ro.find(i)!=ro.end() || col.find(j)!=col.end())
                        matrix[i][j]=0;
                }
            }
        }
        
        
    }
};