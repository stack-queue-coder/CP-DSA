#include<stdio.h>
#include<unistd.h>
using namespace std;
#define ll long long

int main(){
	if(fork() && fork()){
		fork();
	}
	printf("Hello\n");
return 0;
}

