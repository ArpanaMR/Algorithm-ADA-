#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int n) 
{ 
   int i, j,temp;
   bool swapped; 
   swapped = false; 

 for (i = 0; i < n-1; i++) 
   { 
     
     for (j = 0; j < n-i-1; j++) 
     { 
        if (arr[j] > arr[j+1]) 
        { 
           temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
        } 
     } 
  
      
     if (swapped == false) 
        break; 
   }
   cout<<"Sorted Array is"<<endl;
   
   for(int i=0;i<n;i++)
   cout<<arr[i]<<endl;
} 
  

int main() 
{ 
    int n,arr[n];clock_t starttime,endtime;
    cout<<"Enter array size"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;

    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    
   starttime = clock(); 
bubbleSort(arr, n); 
endtime = clock();
    double time_taken = double(endtime - starttime) / double(CLOCKS_PER_SEC); 
    cout << "Time taken by program is : " << fixed  
         << time_taken << setprecision(10)<<endl; 
    
    return 0; 
} 