#include <bits/stdc++.h>
using namespace std;

bool search(int A[], int n, int q)
{
    int p1=0,p2=n-1,lo,hi,need;
    while(p1<=p2-2)
    {
        need=q-A[p1];
        lo=p1+1;
        hi=n-1;
        while(lo<hi)
        {
            if(A[lo]+A[hi]==need) return true;
            if(A[lo]+A[hi]>need) hi--;
            else lo++;
        }
        p1++;
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int A[n];
        for(int i=0;i<n;i++) cin>>A[i];
        sort(A,A+n);
        bool res= search(A,n,x); // Checking if sum of 3 elements in the array equals to x
        cout<<res<<endl;
    }
    return 0;
}
