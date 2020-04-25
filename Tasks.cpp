
#include <bits/stdc++.h> 

using namespace std; 
 
vector<unordered_set<int> > construct(int n,vector<pair<int, int> >& pairs) 
{ 
    vector<unordered_set<int> > graph(n); 
    
    for (auto p : pairs) 
        graph[p.second].insert(p.first); 
    return graph; 
} 

vector<int> compute_indegree(vector<unordered_set<int> >& graph) 
{ 
    vector<int> degrees(graph.size(), 0); 
    for (auto neighbors : graph) 
        for (int k : neighbors) 
            degrees[k]++; 
    return degrees; 
} 
  

bool complete(int n, vector<pair<int, int> >& pairs) 
{ 
    vector<unordered_set<int> > graph = construct(n, pairs); 
    
    vector<int> deg = compute_indegree(graph); 
    
    for (int i = 0; i < n; i++) { 
        int j; 
        for (j=0; j < n; j++) 
            if (!deg[j]) 
                break; 
        if (j == n) 
            return false; 
        deg[j] = -1; 
        for (int k : graph[j]) 
            deg[k]--; 
    } 
    return true; 
} 
  
int main() 
{ 
    int n,k,x,y; 
    
    cout<<"Enter number of tasks"<<endl;
    cin>>n;
    cout<<"Enter number of pairs of dependent tasks"<<endl;
    cin>>k;
    
    vector<pair<int, int> > pairs;
  cout<<"Enter dependent task pairs"<<endl;
    while(k)
    {
        cin>>x>>y;
    pairs.push_back(make_pair(x, y)); 
    k--;
    }
    if (complete(n, pairs)) { 
        cout << "All tasks are completed"; 
    } 
    else { 
        cout << "All of the tasks cannot be completed"; 
    } 
  
    return 0; 
}

/*
case1

Enter number of tasks
3
Enter number of pairs of dependent tasks
3
Enter dependent task pairs
1 0
0 2
2 1
All of the tasks cannot be completed


case 2
Enter number of tasks
4
Enter number of pairs of dependent tasks
2
Enter dependent task pairs
1 0
3 2
All tasks are completed
*/