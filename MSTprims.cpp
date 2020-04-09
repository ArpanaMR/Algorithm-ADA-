#include <bits/stdc++.h> 
using namespace std; 

 int n,matrice[10][10]; 
  

int minKey(int key[], bool mstSet[])  
{  
 
    int min =9999, minindex;  
  
    for (int v = 0; v < n; v++)  
        if (mstSet[v] == false && key[v] < min)  
            min = key[v], minindex = v;  
  
    return minindex;  
}  
  



void prims()  
{  
 
    int parent[n];  
      
 
    int key[n];  
      

    bool mstSet[n];  
  

    for (int i = 0; i < n; i++)  
        key[i] = INT_MAX, mstSet[i] = false;  
  

    key[0] = 0;  
    parent[0] = -1;
  
  
    for (int count = 0; count < n - 1; count++) 
    {  

        int u = minKey(key, mstSet);  
   
        mstSet[u] = true;  
  

        for (int v = 0; v < n; v++)  

            if (matrice[u][v] && mstSet[v] == false && matrice[u][v] < key[v])  
                parent[v] = u, key[v] = matrice[u][v];  
    }  
  
 
    cout<<"Edge \tWeight\n";  
    for (int i = 1; i < n; i++)  
        cout<<parent[i]<<" - "<<i<<" \t"<<matrice[i][parent[i]]<<" \n";  
        
    cout<<"Total weight is ";
    
    int sum=0;
    
        for (int i = 1; i < n; i++)  
       {
           sum+=matrice[i][parent[i]];
       }
       
      cout<<sum;
}  
  

int main()  
{  
   
    
    cout<<"Enter number of vertices"<<endl;
    cin>>n;
    
    cout<<"Enter weighted matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrice[i][j];
        }
    }
   
  
    prims();  
  
    return 0;  
}  
/*
Enter number of vertices
4
Enter weighted matrix
0 10 50 20 
10 0 5 40
50 5 0 30
20 40 30 0
Edge 	Weight
0 - 1 	10 
1 - 2 	5 
0 - 3 	20 
Total weight is 35
*/