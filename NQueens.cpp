#include<bits/stdc++.h>

using namespace std;
 
 int board[20][20];
 
bool Safe(int n, int row, int col) 
{ 
    int i, j; 
  
   
    for (i = 0; i < col; i++) 
        if (board[row][i]) 
            return false; 
  
   
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) 
        if (board[i][j]) 
            return false; 
  

    for (i = row, j = col; j >= 0 && i < n; i++, j--) 
        if (board[i][j]) 
            return false; 
  
    return true; 
} 
  

bool QBoard(int n, int col) 
{ 
 
    if (col >= n) 
        return true; 
  
    for (int i = 0; i < n; i++) { 
     
        if (Safe(n, i, col))
        { 
          
            board[i][col] = 1; 
  
            if (QBoard(n, col + 1)) 
                return true; 
  
           
            board[i][col] = 0; 
        } 
    } 
  

    return false; 
} 
  

int main() 
{ 
    int n;
    cout<<"Enter number of queens"<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            board[i][j]=0;
        }
    }
     if (QBoard(n, 0) == false)
        printf("No possible placement"); 
         
     else   
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
    return 0; 
} 

/*
Enter number of queens
5
1 0 0 0 0 
0 0 0 1 0 
0 1 0 0 0 
0 0 0 0 1 
0 0 1 0 0 
*/