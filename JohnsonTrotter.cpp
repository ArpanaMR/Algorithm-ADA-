#include <bits/stdc++.h> 
using namespace std; 
  
bool TowardsRight = true; 
bool TowardsLeft = false; 
  
 
int search(int arr[], int n, int mobile) 
{ 
    for (int i = 0; i < n; i++) 
        if (arr[i] == mobile) 
           return i + 1; 
} 
  

int Mobile(int arr[], bool dir[], int n) 
{ 
    int mobile_previous = 0, mobile = 0; 
    for (int i = 0; i < n; i++) 
    { 
        
        if (dir[arr[i]-1] == TowardsLeft && i!=0) 
        { 
            if (arr[i] > arr[i-1] && arr[i] > mobile_previous) 
            { 
                mobile = arr[i]; 
                mobile_previous = mobile; 
            } 
        } 
  
      
        if (dir[arr[i]-1] == TowardsRight && i!=n-1) 
        { 
            if (arr[i] > arr[i+1] && arr[i] > mobile_previous) 
            { 
                mobile = arr[i]; 
                mobile_previous = mobile; 
            } 
        } 
    } 
  
    if (mobile == 0 && mobile_previous == 0) 
        return 0; 
    else
        return mobile; 
} 
  

int Permutation(int arr[], bool dir[], int n) 
{ 
    int mobile = Mobile(arr, dir, n); 
    int pos = search(arr, n, mobile); 
  
    
    if (dir[arr[pos - 1] - 1] ==  TowardsLeft) 
       swap(arr[pos-1], arr[pos-2]); 
  
    else if (dir[arr[pos - 1] - 1] == TowardsRight) 
       swap(arr[pos], arr[pos-1]); 
  
    
    for (int i = 0; i < n; i++) 
    { 
        if (arr[i] > mobile) 
        { 
            if (dir[arr[i] - 1] == TowardsRight) 
                dir[arr[i] - 1] = TowardsLeft; 
            else if (dir[arr[i] - 1] == TowardsLeft) 
                dir[arr[i] - 1] = TowardsRight; 
        } 
    } 
  
    for (int i = 0; i < n; i++) 
        cout << arr[i]; 
    cout <<endl; 
} 
  
 
int factorial(int n) 
{ 
    int fact = 1; 
    for (int i = 1; i <= n; i++) 
        fact = fact * i; 
    return fact; 
} 
  
 
void print(int n) 
{ 
   
    int arr[n]; 
  
   
    bool dir[n]; 
  
   
    for (int i = 0; i < n; i++) 
    { 
        arr[i] = i + 1; 
        cout << arr[i]; 
    } 
    cout << endl; 
  
   
    for (int i = 0; i < n; i++) 
        dir[i] =  TowardsLeft; 
  
   
    for (int i = 1; i < factorial(n); i++) 
        Permutation(arr, dir, n); 
} 
  

int main() 
{ 
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    
    print(n); 
    return 0; 
} 
/*
Enter a number
3
123
132
312
321
231
213
*/
