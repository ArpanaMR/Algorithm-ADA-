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

   int result = binarySearch(arr, 0, n-1, x);
   if(result == -1)
        cout<<"Element is not present in array"<<endl;
    else
    cout<<"Element is present at index "<<result<<endl;
   return 0;
}

/*
run 1
Enter size of array
5
Enter elements of array
3 7 43 5 -9
Enter key
0
Element is not present in array

run 2
Enter size of array
6
Enter elements of array
8 6 0 5 99
Enter key
0
Element is present at index 2
*/
