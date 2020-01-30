#include <iostream>

using namespace std;

int main()
{
    int s, mini=0,maxi;
    int test,i,j,key;
    int arr[s];
    int a,mid;
    cin>>test;

    for(i=0;i<test;i++)
    { a=-1;
        cin>>s>>key;

        for(j=0;j<s;j++)
        {
            cin>>arr[j];
        }
        maxi=s-1;

        while(mini<=maxi)
        {
            mid=(mini+maxi)/2;

            if(arr[mid]==key)
               {
                    a=1;
                break;
               }
            else if(key<=arr[mid])
                maxi=mid-1;
            else if(key>=arr[mid])
                mini=mid+1;
        }
        if(a==1)
            cout<<1<<endl;
        else
            cout<<-1<<endl;

    }


    return 0;
}
