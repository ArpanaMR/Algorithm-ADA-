#include<bits/stdc++.h>

using namespace std;

int SIZE;

int MATRIX[20][20];

void Sort(int u, bool visit[], stack<int>&S) {
   visit[u] = true;                

   for(int v = 0; v<SIZE; v++) {
      if(MATRIX[u][v]) {             
         if(!visit[v])
            Sort(v, visit,S);
      }
   }
   S.push(u);    
}

void TopologicalSort() {
   stack<int> S;
   bool visit[SIZE];

   for(int i = 0; i<SIZE; i++)
      visit[i] = false;     

   for(int i = 0; i<SIZE; i++)
      if(!visit[i])     
         Sort(i, visit, S);

   while(!S.empty()) {
      cout << S.top() << " ";
      S.pop();
   }
}

int main() {
    cout<<"Enter size of adjanceny matrix"<<endl;
    cin>>SIZE;
    cout<<"Enter adjanceny matrix"<<endl;
    
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        cin>>MATRIX[i][j];
    }
   cout << "Topological sorted order of vertices is \t";
   TopologicalSort();
   
   return 0;
}
/*
Enter size of adjanceny matrix
7
Enter adjanceny matrix
0 1 1 0 0 0 0
0 0 0 0 1 0 1
0 0 0 0 0 1 0
1 1 1 0 0 1 1
0 0 0 0 0 0 0
0 0 0 0 0 0 0
0 0 0 0 1 1 0
Topological sorted order of vertices is 	3 0 2 1 6 5 4 
*/