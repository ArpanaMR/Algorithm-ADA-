#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selec_sort(int a[],int b[],int n)
{

	for(int i=0;i<n-1;i++)
	{
		int bele=b[i];
		int small=a[i];
		int pos=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<small)
			{
				bele=b[j];
				small=a[j];
				pos=j;
			}
		}
		int temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
		
		int tempb=b[i];
		b[i]=b[pos];
		b[pos]=tempb;
	}
}
int main()
{
	int n;
	
	
	cout<<"Enter the total no of meetings"<<endl;
	cin>>n;
	int si[n],fi[n],rs[n],rf[n],p[n];
	cout<<"Enter the start times"<<endl;
	for(int i=0;i<n;i++)
		cin>>si[i];
	cout<<"Enter the finish times"<<endl;
	for(int i=0;i<n;i++)
		cin>>fi[i];
	selec_sort(fi,si,n);

	rs[0]=si[0];
	rf[0]=fi[0];
	int f=0;
	int s=0;
	p[0]=1;
	for(int i=1;i<n;i++)
	{
		if(rf[f]<=si[i])
		{
			rs[++s]=si[i];
			rf[++f]=fi[i];
		       p[s]=i+1;
		}
	}
	cout<<"Max no.of meetings are : "<<s+1<<endl;
	cout<<"The meeting numbers after sorting are : ";
	for(int i=0;i<=s;i++)
	{
		cout<<p[i]<<" position";
	cout<<"\n";
	
		cout<<rs[i]<<" "<<rf[i]<<endl;
	}
	return 0;
}
/*
Enter the total no of meetings
5   
Enter the start times
1 5 4 23 4
Enter the finish times
1 3 5 6 7
Max no.of meetings are : 4
The meeting numbers after sorting are : 1 position
1 1
2 position
5 3
3 position
4 5
4 position
23 6
*/
