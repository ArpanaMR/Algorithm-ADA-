#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 

 
 int partition(int a[],int l,int h)
{
    int v,i,pi,temp;
    v=a[l];
    i=l;
    pi=h+1;
    
    do
    {
        do
            i++;
            
        while(a[i]<v&&i<=h);
        
        do
            pi--;
        while(v<a[pi]);
        
        if(i<pi)
        {
            temp=a[i];
            a[i]=a[pi];
            a[pi]=temp;
        }
    }while(i<pi);
    
    a[l]=a[pi];
    a[pi]=v;
    
    return(pi);
}


void quick_sort(int a[],int l,int h)
{
    int pi;
    if(l<h)
    {
        pi=partition(a,l,h);
        quick_sort(a,l,pi-1);
        quick_sort(a,pi+1,h);
    }
}


int main()
{
    int a[50],n,i;
    clock_t starttime, endtime; 
    
    cout<<"Enter array size"<<endl;
    cin>>n;
   
    
    for(i=0;i<n;i++)
        a[i]=rand();
        
    starttime = clock(); 
    quick_sort(a,0,n-1);
    endtime = clock();
    
    cout<<"Array after sorting"<<endl;
    
    for(i=0;i<n;i++)
        cout<<a[i]<<endl;
    
    cout<<endl;
    
    double time_taken = double(endtime - starttime) / double(CLOCKS_PER_SEC); 
    cout << "Time taken by program is : " << fixed  
         << time_taken << setprecision(5); 
         
    return 0;        
}
 

 



/*
Enter array size
5
Array after sorting
846930886 1681692777 1714636915 1804289383 1957747793 
Time taken by program is : 0.000001
*/