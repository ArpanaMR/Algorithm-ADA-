#include <bits/stdc++.h> 
using namespace std; 

bool Partition(int a[], int n)  
{  
    int sum = 0,i, j;  

    for (i = 0; i < n; i++)  
    sum += a[i];  
      
    if (sum % 2 != 0)  
    return false;  
      
    bool subset[sum / 2 + 1][n + 1];  

    for (i = 0; i <= n; i++)  
    subset[0][i] = true;  
   
    for (i = 1; i <= sum / 2; i++)  
    subset[i][0] = false;  
   
    for (i = 1; i <= sum / 2; i++)  
    {  
        for (j = 1; j <= n; j++)  
        {  
            subset[i][j] = subset[i][j - 1];  
            if (i >= a[j - 1])  
            subset[i][j] = subset[i][j] ||subset[i - a[j - 1]][j - 1];  
        }      
    }  

      
    return subset[sum / 2][n];  
}  
  
int main()  
{  
    int n,arr[n];
    
    cout<<"Enter array size"<<endl;
    cin>>n;
    
    cout<<"Enter array"<<endl;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    if (Partition(arr, n))  
        cout << "Possible to divide two subsets of equal sum";  
    else
        cout << "Not Possible to divide two subsets of equal sum";  
    return 0;  
} 
/*
Enter array size
4
Enter array
1 3 3 3
Not Possible to divide two subsets of equal sum


Enter array size
5
Enter array
2 3 5 5 5
Possible to divide two subsets of equal sum

*/