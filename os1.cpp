#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

void forkexample(){
		if(fork() == 0){
		for(int i =0 ;i<=27;i++){
			if(i%2==0){
				printf("Child process-Even : %d\n",&i);
			}
		}
	}
	else{
		for(int i =1 ;i<=20;i++){
			if(i%2!=0){
				printf("Parent process-Odd : %d\n",&i);
			}
		}
	}
}
int main(){
	forkexample();
	return 0;
}

