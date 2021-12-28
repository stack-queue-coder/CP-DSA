#include <iostream>
using namespace std;
int main() { 
  int year,x;
  std::cout<<"year";
		while(){
		
		std::cin>>year;
		if(999<year<10000){
			break;}
	    else
	    std::cout<<"invalid input";
	    return ;
		}
      
      if((year%4==0 && year%100!=0) || year%400==0) {
	  
      std::cout<<"leap year";
  }
	  else 
      
	  std::cout<<"NOT a leap year";
  
  
  
  
}
