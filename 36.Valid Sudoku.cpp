/*
   1.Check for every placed value in board if its row,col and subgrid is true then return true
   
*/
    bool isValid(int row,int col,vector<vector<char>>& board,char val){
        //for evry row
        for(int i=0;i<9;i++){
            //except the cell we are already checking
            if(i!=row){
                if(board[i][col]==val){
                    return false;
                }
            }   
        }
        //for evry col
        for(int j=0;j<9;j++){
            //except the cell we are already checking
            if(j!=col){
                if(board[row][j]==val){
                    return false;
                }
            }
        }
        //for subgrid
        int sx=(row/3)*3;
        int sy=(col/3)*3;
        
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(sx+i!=row and sy+j!=col){
                    if(board[sx+i][sy+j]==val){
                        return false;
                    }
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        
        //check  for every placed val that it is correct or not
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    char val=board[i][j];
                    if(!isValid(i,j,board,val)){
                        return false;
                    }
                }
            }
        }
        return true;
    }
