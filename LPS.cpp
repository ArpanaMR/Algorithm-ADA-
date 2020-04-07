

#include<bits/stdc++.h> 

using namespace std;
  

int max (int a, int b) 
{ 
    if(a>b)
    return a;
    
    return b;
} 

int palindrome(char *s) 
{ 
   int n = strlen(s); 
   int i, j, k; 
   int Palin[n][n];  

   for (i = 0; i < n; i++) 
      Palin[i][i] = 1; 
  
    for (k=2; k<=n; k++) 
    { 
        for (i=0; i<n-k+1; i++) 
        { 
            j = i+k-1; 
         if (s[i] == s[j] && k == 2) 
               Palin[i][j] = 2; 
            else if (s[i] == s[j]) 
               Palin[i][j] = Palin[i+1][j-1] + 2; 
            else
               Palin[i][j] = max(Palin[i][j-1], Palin[i+1][j]); 
        } 
    } 
  
    return Palin[0][n-1]; 
} 
  

int main() 
{ 
    
    char s[100];
    
    cout<<"Enter String"<<endl;
    cin>>s;
    
    cout<<"The length of the Longest Palindrome Sequence is "<< palindrome(s); 
   
    return 0; 
} 
/*
Enter String
dabacba
The length of the Longest Palindrome Sequence is 5
*/
