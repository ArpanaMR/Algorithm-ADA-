#include<bits/stdc++.h> 
#include<iostream>
using namespace std; 
int Occur(int arr[], int l, int h, int x, int n) 
{ 
    if(l<=h) 
    { 
        
        int mid = (l+ h)/2;
        if( ( mid == 0 || x > arr[mid-1]) && arr[mid] == x)
            return mid; 
        else if(x > arr[mid]) 
            return Occur(arr, (mid + 1), h, x, n); 
        else
            return Occur(arr, l, (mid -1), x, n); 
    } 
    return -1; 
} 
	int main() 
{ 
    	int  first , i, n, key; 
	cout << "Enter the no. of elements \n";
	
    	cin >> n; 
    	int ar[n];
	cout << "Enter the sorted elements";
	for(int j=0;j<n;j++)
		cin >> ar[j];
		cout << "enter the key:";
		cin >> key;
    	first =  Occur(ar, 0, n-1, key, n);
    	
    	if(first == -1){
      		cout<<"first occurance=-1,last occurance=-1,count=0\n";
    	}	
    	else{
      		cout<<"First Occurrence at index = "<< first;
      		i=first;
	      	while(ar[i]<=key)
	      	{
			i++; 
	      	}
	      	cout<<"\t"<<"Last Occurrence at index = "<< i-1;
	      	cout<<"\t"<<"Count = "<<(i - first)<<"\n"; 
    	}
    return 0; 
} 

