#include <iostream>
using namespace std;

int binary(int num)
{
    int f=0;
	     
	   
	    while(num)
	    {
	        if(num%2)
	        f++;
	        num/=2;
	    }
	   
	    if(f%2==0)
	    return 1;
	    else
	    return 0;
}

int digit(int n)
{ int s=0;
    while(n)
    {
          s=s+(n%10);
          n=n/10;
    }
    return s;
}
int main() {
	int n,arr[n];
	cout<<"Enter array size"<<endl;
	cin>>n;
	cout<<"Enter elements"<<endl;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int num,sum=0;
	for(int i=0;i<n;i++)
	{
	    num=arr[i];
	    
	if(binary(num))
	{
	   sum=sum+digit(num);
	}
	}
	cout<<"Sum is "<<sum<<endl;
	return 0;
}

/*
Enter array size
4
Enter elements
10 2 5 3
Sum is 9
*/