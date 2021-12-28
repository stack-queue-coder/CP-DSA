#include<iostream>
#include<string>
using namespace std;

class Student{
	private:
	string name;
	int roll_no; 
    
    public:
    	void setdata(string n, int rn){	
		name=n;
		roll_no=rn;
		}
		void displaydata(){
			cout<<"name="<<name<<endl;
			cout<<"roll no="<<roll_no<<endl;
		}
};
int main(){
Student s1;
s1.setdata("john",2);
s1.displaydata(); 
return 0;	
}
