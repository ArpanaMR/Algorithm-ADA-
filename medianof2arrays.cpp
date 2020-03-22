#include<bits/stdc++.h> 
using namespace std; 
  

 

int median(int arr[], int n) 
{ 
    if (n % 2 == 0) 
        return (arr[n / 2] +  
                arr[n / 2 - 1]) / 2; 
    else
        return arr[n / 2]; 
} 
    

int findMedian(int arr1[],int arr2[], int n) 
{ 
  
    if (n <= 0) 
        return -1; 
    if (n == 1) 
        return (arr1[0] +  
                arr2[0]) / 2; 
    if (n == 2) 
        return (max(arr1[0], arr2[0]) +  
                min(arr1[1], arr2[1])) / 2; 
  
   
    int med1 = median(arr1, n);  
      

    int med2 = median(arr2, n);  
  
   
    if (med1 == med2) 
        return med1; 
  

    if (med1 < med2) 
    { 
        if (n % 2 == 0) 
            return findMedian(arr1 + n / 2 - 1,  
                             arr2, n - n / 2 + 1); 
        return findMedian(arr1 + n / 2,  
                         arr2, n - n / 2); 
    } 
  
 
    if (n % 2 == 0) 
        return findMedian(arr2 + n / 2 - 1,  
                         arr1, n - n / 2 + 1); 
    return findMedian(arr2 + n / 2,  
                     arr1, n - n / 2); 
} 
  


int main() 
{  int n;
    cout<<"Array size"<<endl;
    cin>>n;
    int arr1[n],arr2[n]; 
    cout<<"Enter 1st array"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr1[i];
    
    cout<<"Enter 2nd array"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr2[i];
   
        cout << "Median of merged arrays is "
             << findMedian(arr1, arr2, n); 
    
    return 0; 
} 

/*
Array size
3
Enter 1st array
1 2 3
Enter 2nd array
5 6 7
Median of merged arrays is 4
*/