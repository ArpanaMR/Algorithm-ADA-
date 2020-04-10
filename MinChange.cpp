#include <bits/stdc++.h>
using namespace std;


void minchange(int n,int size,int den[])
{
  
   int ans[n];
   int i=0;
   size--;
      int s=size;

   while(n)
   {
  
     if(n>=den[s])
     {
        
         ans[i]=den[s];//if denom satisfies decrease that amount and store denom in ans
         n=n-den[s];
         i++;
         s=size;
     }
     else
     {
         s--;//if not decrease the size of den
     }
   
   
   }
   
   cout<<"The minimal change is ";
   for(int j=0;j<i;j++)
   {
       cout<<ans[j]<<"  ";
   }
   
   cout<<endl;
   cout<<"Number of notes is "<<i;
   
   cout<<endl;
}


int main()
{

int n,size;
cout<<"Enter cash amount"<<endl;
cin>>n;

int den[]={1,2,5,10,20,50,100,200,500,2000};

size=sizeof(den)/sizeof(den[0]);
  
minchange(n,size,den);

	return 0;
}

/*
Enter cash amount
931
The minimal change is 500  200  200  20  10  1  
Number of notes is 6
*/