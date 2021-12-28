#include <iostream>
#include <String>
using namespace std;

int main() {
    int n;
    cin >> n;
    int id[n];
    string model[n];
    int year[n];
    int gen[n];
    int ele[n];
    float eff[n];
    int eff_index[n];
    int j =0;
    for(int i =0;i<n;i++){
        cin >> id[i] >> model[i] >> year[i] >> gen[i] >> ele[i];
        float ans = (gen[i] / ele[i])*100;
        if(ans < 60){
            eff[j] = ans; 
            eff_index[j] = i;
            j++;
        }
    }
    for(int i=0;i<j;i++){
        int index = eff_index[i];
        cout<<index<<"\n";
        // float efff = eff[i];
        // cout<< id[index] <<" "<<model[index]<<" "<<year[index]<<" ";
        // printf("%.2f\n",eff[i]);
    }
	return 0;
}

