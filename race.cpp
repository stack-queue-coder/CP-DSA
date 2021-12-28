#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    ll distance;
    cin >> distance;
    int num;
    cin >> num;
    vector<string> name ;
    vector<ll> speed;
    vector<ll> time;
    for (int i = 0; i < num; i++) {
    	string x;
    	ll y;
		cin >> x;
    	name[i].push_back(x);
    	cin >> y;
        speed[i].push_back(y);
        cin >> y;
        time[i].push_back(y);
    }
    for(int i=0;i<num;i++){
        if((speed[i] * time[i]) >= distance){
            cout<<name[i]<<" ";
        }
    }
cout<<"\n";
for(int i=0;i<num;i++){
        if((speed[i] * time[i]) < distance){
            cout<<name[i]<<" ";
        }
    }
}
