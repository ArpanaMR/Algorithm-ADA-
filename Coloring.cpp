
#include<bits/stdc++.h>

using namespace std;

bool matrix[20][20];
  
void print(int color[],int n) 
{ 
   cout<<"Coloring possible"<<endl;
   cout<< "Following are the assigned colors"<<endl; 
    for (int i = 0; i < n; i++) 
      cout<<color[i]<<endl; 
   
}

bool isSafe (int v,int n, int color[], int c) 
{ 
    for (int i = 0; i < n; i++) 
        if (matrix[v][i] && c == color[i]) 
            return false; 
    return true; 
} 
  
bool graphColoringUtil(int n, int m, int color[], int v) 
{ 
    if (v == n) 
        return true; 
  
    for (int c = 1; c <= m; c++) 
    { 
        if (isSafe(v,n, color, c)) 
        { 
           color[v] = c; 
  
           if (graphColoringUtil (n, m, color, v+1) == true) 
             return true; 
  
          
           color[v] = 0; 
        } 
    } 
  
    return false; 
} 

bool graphColor(int n, int m) 
{ 
    int color[n]; 
    for (int i = 0; i < n; i++) 
       color[i] = 0; 
  
    if (graphColoringUtil(n, m, color, 0) == false) 
    { 
      cout<<"Coloring not possible"<<endl; 
      return false; 
    } 
  
    print(color,n); 
    return true; 
} 
  
  
int main() 
{ 
    int n,m;
    
    cout<<"Enter number of vertices"<<endl;
    
    cin>>n;

    cout<<"Enter adjancency matrix"<<endl;
    for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
       cin>>matrix[i][j];
    
    cout<<"Enter number of colours"<<endl;
    cin>>m;
    graphColor(n, m); 
    return 0; 
}


/*
Enter number of vertices
4
Enter adjancency matrix
0 1 1 1
1 0 1 0
1 1 0 1
1 0 1 0
Enter number of colors
3
Coloring possible
Following are the assigned colors
1
2
3
2
*/
