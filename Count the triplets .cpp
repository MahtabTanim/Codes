#include <bits/stdc++.h>
using namespace std;

/*
2
10
7 2 5 4 3 6 1 9 10 12
18
*/

int search(int A[], int n)
{
    int p1=0,p2=n-1,lo,hi,need,count=0;
    while(p2>=2)
    {
        need=A[p2];
        lo=0;
        hi=p2-1;
        while(lo<hi)
        {
            if(A[lo]+A[hi]==need)
            {
                count++;
                hi++;
                lo++;
            }
            if(A[lo]+A[hi]>need) hi--;
            else lo++;
        }
        p2--;
    }
    return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++) cin>>A[i];
        sort(A,A+n);
        int count= search(A,n);
        if(count==0) count--;
        cout<<count<<endl;
    }
    return 0;
}
