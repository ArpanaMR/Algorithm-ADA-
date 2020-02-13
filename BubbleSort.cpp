
 #include<iostream>

#include <bits/stdc++.h> 
using namespace std;
void bubblesort(int arr[],int n)
{	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<endl;
		
		
}

int main()
{	int n;
	clock_t starttime, endtime; 
	cout<<"Enter Size of array"<<endl;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
		arr[i]=rand();
	
	
	
		starttime = clock(); 
 		 bubblesort(arr,n);
 		endtime = clock(); 
 		
	
	double time_taken = double(endtime - starttime) / double(CLOCKS_PER_SEC); 
    cout << "Time taken by program is : " << fixed  
         << time_taken << setprecision(5); 
        
    
   
	return 0;
}

   
