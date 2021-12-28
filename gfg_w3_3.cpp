#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int cntPairs(int *a, int n, int mid)
{
    int ans = 0;
    for (int i = 0; i < n; ++i)
        ans += upper_bound(a+i, a+n, a[i] + mid) - (a + i + 1);
    return ans;
}

int kthSmllDiff(int a[], int n, int k)
{
    sort(a, a+n);
    int l = a[1] - a[0];
    for (int i = 1; i <= n-2; ++i)
        l = min(l, a[i+1] - a[i]);
 
    int h = a[n-1] - a[0];
 
    while (l < h)
    {
        int mid = (h+l)/2;
        if (cntPairs(a, n, mid) < k)
            l = mid + 1;
        else
            h = mid;
    }
 
    return l;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n , k ;
		cin >> n >>  k;
		int a[n];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		cout<<kthSmllDiff(a , n , k)<<"\n";
	}
return 0;
}

