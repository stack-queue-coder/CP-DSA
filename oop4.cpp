#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class Triangle{
	private:
		int a,b,c;
		float s,area,perimeter;
	public:
		Triangle(int x,int y,int z){
			a=x;
			b=y;
			c=z;
			s=(y+x+z)/2;
			area=sqrt(s*(s-x)*(s-y)*(s-z));
			perimeter=x+y+z;
		}
		
	     /*void setdata(int x,int y,int z){
	     	a=x;
			b=y;
			c=z;
		 }
	
		void areadata(int x, int y, int z ){
			
			
			s=(y+x+z)/2;
			area=sqrt(s*(s-x)*(s-y)*(s-z));
		}
		void perimeterdata(int x, int y, int z){
			
			perimeter=x+y+z;
		}*/
		void displaydata(){
			cout<<"sides="<<a<<"\t"<<b<<"\t"<<c<<endl;
			cout<<"area="<<area<<endl;
			cout<<"perimeter="<<perimeter;
			
		}
}; 
int main(){
	Triangle a1(3,4,5);
	//a1.setdata(3,4,5);
	//a1.areadata(3,4,5);
	//a1.perimeterdata(3,4,5);
	a1.displaydata();
return 0;	
}
