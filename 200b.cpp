#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    cout<<fixed<<setprecision(8)<<accumulate(v.begin(),v.end(),(long double)0)/n<<endl;
    return 0;
}
