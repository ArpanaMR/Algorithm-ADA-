#include<bits/stdc++.h>

using namespace std;
  

#define INF 999
  
int matrix[20][20];

int minDist(int distance[], bool Set[],int n) 
{ 
    int min = INF, minindex; 
  
    for (int v = 0; v < n; v++) 
        if (Set[v] == false && distance[v] <= min) 
            min = distance[v], minindex = v; 
  
    return minindex; 
} 
  

 
void dijkstras(int n,int src) 
{ 
    int distance[n];  
  
    bool Set[n];

    for (int i = 0; i < n; i++) 
        distance[i] = INT_MAX, Set[i] = false; 
  
  
    distance[src] = 0; 
  
 
    for (int count = 0; count < n - 1; count++) { 
        
        int u = minDist(distance, Set,n); 
  
        
        Set[u] = true; 
  
        
        for (int v = 0; v < n; v++) 
  
           
            if (!Set[v] && matrix[u][v] && distance[u] != INT_MAX 
                && distance[u] + matrix[u][v] < distance[v]) 
                distance[v] = distance[u] + matrix[u][v]; 
    } 
  
   
     cout<<"Vertex\tDistance from source"<<endl;
    for (int i = 0; i < n; i++) 
    {
        if(distance[i]==999)
        cout<<i<<"\t"<<"infinite"<<endl;
        else
        cout<<i<<"\t"<<distance[i]<<endl;
    }
} 
  

int main() 
{ 
   
    int n,src;
    
    cout<<"Enter number of vertices"<<endl;
    cin>>n;
    
    cout<<"Enter adjancency matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
       
    cout<<"Enter source vertice"<<endl;
    cin>>src;
    
  
    dijkstras(n, src); 
  
    return 0; 
} 

/*
Enter number of vertices
5
Enter adjancency matrix
0 10 999 5 999
999 0 1 2 999
999 999 0 999 4
999 3 9 0 2
7 999 6 999 0
Enter source vertice
0
Vertex	Distance from source
0	0
1	8
2	9
3	5
4	7
*/