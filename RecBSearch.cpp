#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = (l+r)/2;


        if (arr[mid] == x)  return mid;


        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);


        return binarySearch(arr, mid+1, r, x);
   }


   return -1;
}

int main()
{
    int n;
   int arr[n];
   int x;

   cout<<"Enter size of array"<<endl;
   cin>>n;

   cout<<"Enter elements of array"<<endl;
   for(int i=0;i<n;i++)
    cin>>arr[i];

   cout<<"Enter key"<<endl;
   cin>>x;

  starttime = clock(); 
    int result = binarySearch(arr, 0, n-1, x);
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
-3 7 43 59 666
Enter key
0
Element is not present in array

run 2
Enter size of array
6
Enter elements of array
-55 -5 0 1 3 56
Enter key
0
Element is present at index 2
*/
