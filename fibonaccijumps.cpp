#include <bits/stdc++.h> 
using namespace std; 

#define max 99999

  
  int f[20];
  
  void fibonacci()
  {
     f[0]=0,f[1]=1;
     
     for(int i=2;i<20;i++)
     {
         f[i]=f[i-1]+f[i-2];
     }
    
  }
 
void travel(int arr[], int n) 
{ 
    
    int steps[n + 2]; 
  
   steps[0] = 0; 
  
    
    for (int i = 1; i <= n + 1; i++) 
        steps[i] =max; 
  
     
    for (int i = 1; i <= n + 1; i++)
    { 
        for (int j = 1; j < 20; j++)
        { 
            if ((arr[i - 1] == 1 || i == n + 1) && (i - f[j]) >= 0) 
            {
                
                steps[i] = min(steps[i],(1+ steps[i - f[j]])); 
            }
        } 
    } 
   
    if (steps[n + 1] != max) 
      cout<<steps[n + 1]; 
    else
        cout<<"No possible route"<<endl;
} 
  

int main() 
{ 
int n,arr[n];

cout<<"Enter array size"<<endl;
cin>>n;
    
cout<<"Enter array"<<endl;
for(int i=0;i<n;i++)
cin>>arr[i];

fibonacci();
  
travel(arr, n);

return 0; 
} 

/*
Enter array size
6
Enter array
1 0 1 0 0 0
No possible route

Enter array size
2
Enter array
0 1
1
*/
