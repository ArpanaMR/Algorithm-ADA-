#include <bits/stdc++.h>

using namespace std;
   

bool SumExists(int n,int arr[], int sum) 
{ 
    bool subset[n+1][sum+1]; 
  
    for (int i = 0; i <= n; i++) 
      subset[i][0] = true; 
  
    for (int i = 1; i <= sum; i++) 
      subset[0][i] = false; 
  
     for (int i = 1; i <= n; i++) 
     { 
       for (int j = 1; j <= sum; j++) 
       { 
         if(j<arr[i-1]) 
         subset[i][j] = subset[i-1][j]; 
         if (j >= arr[i-1]) 
           subset[i][j] = subset[i-1][j] ||  
                                 subset[i - 1][j-arr[i-1]]; 
       } 
     } 
   
     return subset[n][sum]; 
} 

int main() 
{ 
  int n,sum,arr[n];
  
  cout<<"Number of elements in set"<<endl;
  cin>>n;
  
  cout<<"Enter the set"<<endl;
  
  for(int i=0;i<n;i++)
   cin>>arr[i];
   
   cout<<"Enter the sum"<<endl;
   cin>>sum;
   
  if (SumExists(n,arr, sum)) 
     cout<<"Subset with the sum exists"; 
  else
     cout<<"Subset with the sum does not exist"; 
  return 0; 
}

/*
case 1
Number of elements in set
5
Enter the set
2 5 1 3 4
Enter the sum
9
Subset with the sum exists

case 2
Number of elements in set
4
Enter the set
5 6 1 3
Enter the sum
2
Subset with the sum does not exist
*/
