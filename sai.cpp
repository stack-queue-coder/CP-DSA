#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {
  
  // Create a number that's 0 or 1
  int i,h=0,t=0;
  srand (time(NULL));
  int	coin = rand() % 2;
  
  // If number is 0: Heads
  // If it is not 0: Tails
  for(i=0;i<5;i++){
  if (coin == 0) {
      h++;
    std::cout << "Heads\n";
  
  
  }
	else {
	   t++;
    std::cout << "Tails\n";
  
  }
  }
  

std::cout<<h++<<"\n"<<t++;
}
