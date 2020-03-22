
#include<bits/stdc++.h>
using namespace std;
void swapping(int &a, int &b)
{     
   int temp;
   temp = a;
   a = b;
   b = temp;
}

void merge(int arr[], int l, int m, int r) {
   int i, j, k, left,right;
   
   left = m-l+1; right = r-m;
   int leftarr[left], rightarr[right];
   
   for(i = 0; i<left; i++)
      leftarr[i] = arr[l+i];
   for(j = 0; j<right; j++)
      rightarr[j] = arr[m+1+j];
   i = 0; j = 0; k = l;
  
   while(i < left && j<right) 
  {
      if(leftarr[i] <= rightarr[j]) 
      {
         arr[k] = leftarr[i];
         i++;
      }
       else
      {
         arr[k] = rightarr[j];
         j++;
      }
      k++;
   }
   while(i<left)
   {      
      arr[k] = leftarr[i];
      i++; 
      k++;
   }
   while(j<right)
  {    
      arr[k] = rightarr[j];
      j++; 
      k++;
   }
}
void mergeSort(int arr[], int l, int r) {
   int m;
   if(l < r) {
      int m = (l+r)/2;
      mergeSort(arr, l, m);
      mergeSort(arr, m+1, r);
      merge(arr, l, m, r);
   }
}

int main() {
   int n,arr[n];
   clock_t starttime, endtime;
   cout << "Enter array size"<<endl;
   cin >> n;    
   cout << "Enter elements of array" << endl;
   for(int i = 0; i<n; i++) 
   {
      cin >> arr[i];
   }
   starttime = clock();
   mergeSort(arr, 0, n-1);  
   	endtime = clock(); 

   cout << "After Sorting array is ";
   for(int i=0;i<n;i++)
cout<<arr[i]<<"  ";

double time_taken = double(endtime - starttime) / double(CLOCKS_PER_SEC); 
    cout << "\nTime taken by program is : " << fixed  
         << time_taken << setprecision(5); 
    cout << " sec " << endl; 
	
	
return 0;
}
/*
Enter array size
5
Enter elements of array
0 9 99 7 -77
After Sorting array is -77  0  7  9  99 
Time taken by program is : 0.000001 sec  
*/