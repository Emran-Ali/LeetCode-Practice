class Solution {
public:
    bool evbox(vector<vector<char>>& board, int a,int b)
    {
        int nums[10]={0};
        
        for(int i=a; i<a+3; i++)
        {
            for(int j=b; j<b+3; j++)
            {
                if(board[i][j]!='.')
                {
                    int d=(int)board[i][j]-'0';
                    if(nums[d]!=0)
                        return false;
                       
                    nums[d]++;
                }
                
            }
        }
        return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][10]={0},clm[9][10]={0};
        for(int i=0; i<9; i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    int dig=(int)board[i][j]-'0';
                    if(row[i][dig]!=0)
                        return false;
                    if(clm[j][dig]!=0)
                        return false;
                    
                    row[i][dig]++;
                    clm[j][dig]++;
                }
                
            }
        }
        
        for(int i=0; i<9; i+=3)
        {
            for(int j=0; j<9; j+=3)
            {
                if(!evbox(board,i,j))
                    return false;
            }
        }
        return true;
    }
};
Time Coplexity: O(1);
Space Complexity: O(1);