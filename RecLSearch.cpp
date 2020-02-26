#include<bits/stdc++.h>

using namespace std;

int linearSearch(int arr[], int n, int x)
{
   if (n==0)
   return -1;
   
   if(arr[n]==x)
   return n;
   
   return linearSearch(arr, n-1, x);
   
}


int main()
{
    int n;
   int arr[n];
   int x;
   clock_t starttime,endtime;

   cout<<"Enter size of array"<<endl;
   cin>>n;

   cout<<"Enter elements of array"<<endl;
   for(int i=0;i<n;i++)
    cin>>arr[i];

   cout<<"Enter key"<<endl;
   cin>>x;

  starttime = clock(); 
    int result = linearSearch(arr,n-1, x);
    endtime = clock(); 
    
   if(result == -1)
        cout<<"Element is not present in array"<<endl;
    else
    cout<<"Element is present at index "<<result<<endl;
    double time_taken = double(endtime - starttime) / double(CLOCKS_PER_SEC); 
    cout << "Time taken by program is : " << fixed  
         << time_taken << setprecision(10)<<endl; 
   return 0;
}


/*

run 1

Enter size of array
5
Enter elements of array
1 99 0 3 56
Enter key
56
Element is present at index 4

run 2
Enter size of array
5
Enter elements of array
2 23 5 111 4
Enter key
9
Element is not present in array
*/
