#include <bits/stdc++.h>
using namespace std;

int arr[20][20];

void floyd(int n)
{
    
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                
                arr[i][j]=min(arr[i][j],(arr[i][k]+arr[k][j]));
            }
        }
    }
}
int main()
{
    int n;
	cout<<"Enter number of vertices"<<endl;
	cin>>n;
	
	cout<<"Enter weight matrix matrix (enter 9999 for infinity)"<<endl;
	
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	    cin>>arr[i][j];
	    }
	}
	
	floyd(n);
	
	cout<<"Shortest distance matrix is"<<endl;
	
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        if(arr[i][j]>=9999)
	        cout<<"infinity"<<" ";
	        else
	    cout<<arr[i][j]<<"        ";
	    }
	    cout<<endl;
	}
	return 0;
}

/*
Enter number of vertices
4
Enter weight matrix matrix (enter 9999 for infinity)
0     5    9999 10
9999  0    3    9999
9999  9999 0    1
9999  9999 9999 0

Shortest distance matrix is
0        5        8        9        
infinity 0        3        4        
infinity infinity 0        1        
infinity infinity infinity 0 
*/