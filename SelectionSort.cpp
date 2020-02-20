#include <bits/stdc++.h> 
using namespace std; 
  

  
void selectionSort(int arr[], int n)  
{  
    int i, j, min_index;  
    int temp;
    
    for (i = 0; i < n-1; i++)  
    {  
        
        min_index = i;  
        for (j = i+1; j < n; j++)  
        {
        if (arr[j] < arr[min_index])  
          {  
            min_index = j;  
          }
         
         }
         if(arr[i]!=arr[min_index])
         {
         temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
        }
    }  
}  
  


  

int main()  
{  
    int n,arr[n];
    clock_t starttime, endtime; 
    
    cout<<"Enter size of array";
    cin>>n;
    
    cout<<"Enter elements";
    
    for(int i=0;i<n;i++)
		cin>>arr[i];
    
    starttime = clock(); 
    selectionSort(arr, n);  
    endtime = clock(); 
    
    cout << "Sorted array:"<<endl;  
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl; 
    cout<<endl;
    double time_taken = double(endtime - starttime) / double(CLOCKS_PER_SEC); 
    cout << "Time taken by program is : " << fixed  
         << time_taken << setprecision(10)<<endl; 
         
    return 0;  
} 
