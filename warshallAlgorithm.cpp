#include <iostream>
using namespace std;

int arr[20][20];

void warshall(int n)
{
    
    
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                arr[i][j]=(arr[i][j])||(arr[i][k]&&arr[k][j]);
            }
        }
    }
}
int main()
{
    int n;
	cout<<"Enter number of vertices"<<endl;
	cin>>n;
	
	cout<<"Enter adjancency matrix"<<endl;
	
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	    cin>>arr[i][j];
	    }
	}
	
	warshall(n);
	
	cout<<"The transitive closure is"<<endl;
	
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	    cout<<arr[i][j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}

/*
Enter number of vertices
4
Enter adjancency matrix
1 1 0 0
0 1 1 0
1 0 1 1
0 0 0 1

The transitive closure is
1 1 1 1 
1 1 1 1 
1 1 1 1 
0 0 0 1 
*/