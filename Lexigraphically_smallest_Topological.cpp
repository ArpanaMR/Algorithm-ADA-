#include <bits/stdc++.h>
using namespace std;
stack<int> s;
int n,f=0,r=-1;
int a[30][30],q[30];
void lexi()
{
vector<int> deg(n,0);
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(a[i][j]==1)
deg[j]++;
}

}

for(int i=0;i<n;i++)
{
if(deg[i]==0)
q[++r]=i;
}
int c=0;
vector<int> toporder;
while(f<=r)
{
int min=q[f++];

toporder.push_back(min);
for(int i=0;i<n;i++)
{
if(a[min][i]==1)
{
deg[i]--;
if(deg[i]==0)
q[++r]=i;
}

}
c++;
}
if(c!=n)
{
cout<<-1<<endl;
return;
}
for(int i=0;i<toporder.size();i++)
cout<<toporder[i]<<" ";

}

int main()
{
cout<<"Enter number of vertices"<<endl;
cin>>n;
cout<<"Enter the adjacency matrix"<<endl;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
cin>>a[i][j];
}
cout<<"lexicographically smallest topological order is"<<endl;
lexi();
return 0;
}
/*
Enter number of vertices
6
Enter the adjacency matrix
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 1 0 0
0 1 0 0 0 0
1 1 0 0 0 0
1 0 1 0 0 0
lexicographically smallest topological order is
4 5 0 2 3 1 
*/
