#include <bits/stdc++.h> 
  
using namespace std; 
  

void heapify(int arr[], int n, int i) 
{ 
    int largest = i; 
    int l = 2*i + 1;
    int r = 2*i + 2; 
  
 
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
   
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
     
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
  
     
        heapify(arr, n, largest); 
    } 
} 
  
// main function to do heap sort 
void heapSort(int arr[], int n) 
{ 
    
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  
  
    for (int i=n-1; i>0; i--) 
    { 
     
        swap(arr[0], arr[i]); 
  
     
        heapify(arr, i, 0); 
    } 
} 
  

void printArray(int arr[], int n) 
{ 
    for (int i=0; i<n; ++i) 
        cout << arr[i] << " "; 
    cout << "\n"; 
} 
  

int main() 
{ 
    int n,arr[n];
    clock_t starttime, endtime; 
    
    cout<<"Enter array size"<<endl;
    cin>>n;
    
    cout<<"Enter array"<<endl;
    for(int i=0;i<n;i++)
     cin>>arr[i];
  
  starttime = clock();
    heapSort(arr, n); 
  endtime = clock();
  
    cout << "Sorted array is \n"; 
    printArray(arr, n); 
    
     double time_taken = double(endtime - starttime) / double(CLOCKS_PER_SEC); 
    cout << "Time taken by program is : " << fixed  
         << time_taken << setprecision(5); 
         
        return 0;
} 

/*
output
Enter array size
5
Enter array
44 56 22 10 5
Sorted array is 
5 10 22 44 56 
Time taken by program is : 0.000001
*/