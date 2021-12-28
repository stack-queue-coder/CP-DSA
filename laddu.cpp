#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>> t;
	while(t--){
		int act;
		string org;
		cin>> act>> org;
		int laddu=0;
		for(int i=0;i<act;i++){
			string str;
			cin>> str;
			if(str=="CONTEST_WON"){
				int rank;
				cin>> rank;
				if(rank<=20){
					laddu+=300 + (20-rank);
				}
				else{laddu+=300;
				}
			}
			if(str=="TOP_CONTRIBUTOR"){
				laddu+=300;
			}
			if(str=="BUG_FOUND"){
				int severity;
				cin>>severity;
				laddu+=severity;
			}
			if(str=="CONTEST_HOSTED"){
				laddu+=50;
			}
				
		}
		if(org=="INDIAN"){
			cout<<laddu/200<<"\n";
		}
	 	if(org=="NON_INDIAN"){
			cout<<laddu/400<<"\n";
		}
	}
	return 0;
}
