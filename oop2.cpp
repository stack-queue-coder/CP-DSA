#include<iostream>
#include<string>
using namespace std;

class Student{
	private:
	string name;
	string address;
	int phone_no;
	int roll_no; 
    
    public:
	
	   Student()
	   {
	   	cout<<"default constructor is called"<<endl<<endl;
	   }
    	
    	void setdata(string n,string add, int rn,int pn ){	
		name=n;
		address=add;
		roll_no=rn;
		phone_no=pn;
		}
		void displaydata(){
			cout<<"name="<<name<<endl;
			cout<<"address="<<address<<endl;
			cout<<"roll no="<<roll_no<<endl;
            cout<<"phone no="<<phone_no<<endl;
		
			
		}   
};
int main(){
Student s1,s2;
//s1.setdata("john","mumbai",2,48488072);
s1.displaydata(); 
s2.setdata("SAm","bihar",4,55885985);
s2.displaydata(); 
return 0;	
}
