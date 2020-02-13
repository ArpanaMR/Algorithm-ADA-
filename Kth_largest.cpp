#include<iostream>

#include <bits/stdc++.h> 
using namespace std;

void kth(int arr[],int n,int k)
{
  int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	
		
	for(int j=0;j<k;j++)
	cout<<arr[j]<<endl;
}
	
	
int main()
{	
int n;
int k;
	
	cout<<"Enter Size of array"<<endl;
	cin>>n;
	cout<<"Enter the number of values to be printed"<<endl;
	cin>>k;
	cout<<"Enter the values";
	int arr[n];
	
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	kth(arr,n,k);
	
	return 0;
	}
	
	
