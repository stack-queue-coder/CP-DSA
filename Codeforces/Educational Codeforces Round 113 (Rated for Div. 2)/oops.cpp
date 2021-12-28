#include <iostream>
#include <string>
using namespace std;
 
#define MAX 10
 
class student
{
    private:
        string name , email , course , id;
    public:
        //member function to get student's details
        void getDetails(void);
        //member function to print student's details
		void putDetails(void);
};
 
//member function definition, outside of the class
void student::getDetails(void){
	
    cin >> name >> email >> course ;
    
	id += course[0]; 
    regid[0] = course[0];
    for(int i=0;i<30;i++){
    	if(email[i] != '@'){
    		regid[i+1] = email[i];	
    		id += email[i];
		}
		else{
			break;
		}
	}
	
	for(int i=0;i<n;i++){
		id += to_string(i+101);
	}
	
}
 
void student::gen_id(void){
	
} 
 
//member function definition, outside of the class
void student::putDetails(void){
	if(std.find(name) != std.end()){
		cout<<name <<" " << id<<"\n";	
	}
	else{
		cout<<"Not found\n";
	}
}
 
int main()
{
    student std[100];       //array of objects creation
    int n;
    cin >> n; 
    for(int i=0;i< n; i++){
        std[i].getDetails();
        
    }
    
    
    for(int  i=0;i< n; i++){
        std[loop].putDetails();
    }
     
    return 0;
}
