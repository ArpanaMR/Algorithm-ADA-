#include<bits/stdc++.h>

using namespace std;

#define min -99  

int max(int x, int y)
{
    return (x > y)? x : y;
    
} 
  

int Rod(int n,int Price[]) 
{ 
   
    
   int TotalPrice[n+1];
   TotalPrice[0] = 0; 
    
  
   for (int i = 1; i<=n; i++) 
   { 
       int maxprice = min;
       for (int j = 0; j < i; j++) 
         maxprice= max(maxprice, Price[j] + TotalPrice[i-j-1]); 
         
       TotalPrice[i] = maxprice; 
       
   } 

   return TotalPrice[n]; 
} 

int main() 
{ 
    int n,price[n] ;
    cout<<"Enter length"<<endl;
    cin>>n;
    
    cout<<"Enter price of each length"<<endl;
   
    int size=n;
    
    for(int i=0;i<n;i++)
     cin>>price[i];
    
    
    cout<<"Maximum obtainable value is "<<Rod(size,price);
  
    return 0; 
}
/*
Enter length
6
Enter price of each length
1 4 3 6 4 10
Maximum obtainable value is 12
*/
