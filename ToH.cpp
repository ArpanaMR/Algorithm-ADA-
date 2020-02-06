#include<iostream>

using namespace std;


void TOH(char st,char mid,char des,int num)
{

if(num==0)
return;

else if(num==1)
cout<<"Move disc "<<num<<" from "<<st<<" to "<<des<<endl;

else
{
 TOH(st,des,mid,num-1);
 cout<<"Move disc "<<num<<" from "<<st<<" to "<<des<<endl;
TOH(mid,st,des,num-1);
}
}
int main()
{
int n;

cout<<"Enter number of discs"<<endl;
cin>>n;

TOH('A','B','C',n);

return 0;
}



