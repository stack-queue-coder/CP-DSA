#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin >> n;
	ll sum1 = 0 , sum2 = 0;
	int x;
	vector<int> num1 , num2;
	for(int i=0;i<n;i++){
		cin >> x;
		if(x < 0){
			sum2 += -1*(x);
			num2.push_back((-1)*x);
		}
		else{
			sum1 += x;
			num1.push_back(x);
		}
	}	
	if(sum2 > sum1){
		cout<<"second";
		return 0;
	}
	else if(sum2 < sum1){
		cout<<"first";
		return 0;
	}
	else{
		for(int i=0;i< min(num1.size() ,num2.size()) ; i++){
			if(num1[i] > num2[i]){
				cout<<"first";
				return 0;
			}
			else if(num2[i] > num1[i]){
				cout<<"second";
				return 0;
			}
		}
		
//		ll k =max(num1 , num2);
//		ll h =min(num1 , num2);
//		int c1 =0 , c2 =0;
//		while(k>0){
//			k /= 10;  1 3 12 4
//					  1 3 6	 0 0
//			c1++;	
//		}	
//		while(h>0){
//			h /= 10;
//			c2++;
//		}
//		h =min(num1 , num2);
//		int j = abs(c1-c2);
//		while(j--){
//			h *= 10;
//		}
//		if(num1 > num2){
//			(num1 < h) ? cout<<"second" : cout<<"first";	
//	
//		}
//		else if(num2 > num1){
//			(num2 < h) ? cout<<"first" :  cout<<"second" ; 
//		}
		(x<0) ? cout<<"second" : cout<<"first";
	}
return 0;
}

