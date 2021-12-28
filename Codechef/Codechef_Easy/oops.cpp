#include<iostream.h>
using namespace std;

class bag{
	private:
		int height , weight;
	public:
		int id;
		bool check(int height , int weight){
			if(height <= 25 and weight <= 10){
				return true;
			}
			else{
				return false;
			}
		}
};

int main(){
	int n;
	cin >> n;
	bag obj[n];
	int cnt = 0;
	for(int i=0;i<n;i++){
		obj[i].id = i+1;
		int h , w;
		cin >> h >> w;
		if(obj[i].check(h , w)){
			cout<<obj[i].id<<" "<<h<<" "<<w<<"\n";
			cnt++;
		}
	}
	if(cnt == 0){
		cout<<"OOPS!, check all your luggages\n";
	}
	
return 0;
}

