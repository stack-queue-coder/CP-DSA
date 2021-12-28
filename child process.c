#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int forkcall(){
	int i;
	for(i = 0 ; i <= 27 ; i++){
		if(fork() == 0){
			printf("This is child process\n");
			if(i%2==0){
				printf("%d ",&i);	
			}
		}
		else{
			printf("This is child process\n");
			if(i%2!=0){
				printf("%d ",&i);	
			}
		}		
	}
}


int main(){
	forkcall();
	return 0;
}
