#include<bits/stdc++.h>  

using namespace std; 
    

void LIS( int n, int arr[])  
{  
    int a[n]; 
   
    a[0] = 1;    
  
    for (int i = 1; i < n; i++ )  
    { 
        a[i] = 1; 
        for (int j = 0; j < i; j++ )   
            if ( arr[i] > arr[j] && a[i] < a[j] + 1)  
                a[i] = a[j] + 1;  
    } 
  

   cout<<"Length of longest Increasing subsequence is "<<*max_element(a, a+n); 
}  

int main()  
{  
    int n,arr[n];
    cout<<"Enter array size"<<endl;
    cin>>n;
    cout<<"Enter sequence"<<endl;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   LIS( n,arr ) ;  
    return 0;  
}

/*
Enter array size
6
Enter sequence
22 1 0 33 -2 41

Length of longest Increasing subsequence is 3
*/