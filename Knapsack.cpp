#include <bits/stdc++.h>
using namespace std;


int cost[100],w[100];

int maximum(int x,int y)
{
   return(x>y)?x:y;
}

int knapsack(int n,int M)
{
    if(n==0||M==0)
    return 0;
    
    if(w[n-1]>M)
    {
        return knapsack(n-1, M);  
    }
    
    else 
    return maximum(cost[n-1]+knapsack(n-1,M-w[n-1]),knapsack(n-1,M-w[n-1]));
}

int main()
{
	int n,M;
	
	cout<<"Enter the number of items"<<endl;
	cin>>n;
	
	cout<<"Enter price of items"<<endl;
	
	for(int i=0;i<n;i++)
	cin>>cost[i];
	
	
	cout<<"Enter weights of items"<<endl;
	
	for(int j=0;j<n;j++)
	cin>>w[j];
	
	cout<<"Enter max weight possible"<<endl;
	
	cin>>M;
	

	cout<<"Maximum profit possible is "<<knapsack(n,M);
	
	return 0;
}

/*
Enter the number of items
4
Enter price of items
20 30 40 100
Enter weights of items
2 4 6 8
Enter max weight possible
15
Maximum profit possible is 140
*/