#include<bits/stdc++.h>
using namespace std;

    /*#ifndef ONLINE_JUDGE
	freopen("inputf.in","r",stdin);
	freopen("outputf.in","w",stdout);
	#endif*/

void solve(){
	int b , c;
	int a[4];
	for(int i=0;i<4;i++)
	{
		cin>>a[i];
	}
	b = max(a[0],a[1]); 
	c = max(a[2],a[3]);  
	sort(a,a+4);       	
	if(b==a[2] && c==a[3] || b==a[3] && c == a[2])
	{
    	cout<<"Yes"<<endl;
	}
	else
	{
    	cout<<"No"<<endl;
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		solve();
	}
   return 0;
}
