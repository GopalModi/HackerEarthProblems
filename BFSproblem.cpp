#include<iostream>
#include<queue>
#include<malloc.h>
using namespace std;
int main()
{
    int n,i,a,b,level,t,edge;
    cin>>t;
    while(t--)
    {
       queue<int> q;
       level=0;
       cin>>n>>edge;
    int **m=(int **)calloc(sizeof(int *),n);
    for(i=0;i<n;i++)
       m[i]=(int *)calloc(sizeof(int),n);
    int *visited=(int *)calloc(sizeof(int),n);
    while(edge--)
    {
        cin>>a>>b;
        a--;
        b--;
        m[a][b]=1;
        m[b][a]=1;
    }
    q.push(0);
    visited[0]=1;
    q.push(-1);
    while(!q.empty())
    {
        int item=q.front();
        q.pop();
        if(item==n-1)    
                break;
        if(item==-1)
        {
            level++;
          
            if(q.empty()==1)
                break;
            q.push(-1);
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(m[item][i]&&visited[i]==0)
                {
                    //m[item][i]=0;
                  //  m[i][item]=0;
                    q.push(i);
                    visited[i]=1;
                }
            }
        }
    }
    cout<<level<<endl;
    free(m);
    free(visited);
    std::queue<int> empty;
   std::swap( q, empty );
    }
}

