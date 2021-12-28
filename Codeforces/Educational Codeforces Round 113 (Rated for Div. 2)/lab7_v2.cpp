#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<time.h>
pthread_t tid[3];
int counter;
int ans = 0;
int j =0;
pthread_mutex_t lock;

void* trythis(void* arg) {

  pthread_mutex_lock(&lock);
  unsigned long i = 0;

  printf("\n Player %d started\n", (counter)%3 ) ;
  int r = rand()%10;
  ans += r;
//  for (i = 0; i < (0xFFFFFFFF); i++);
  printf("\n Player %d finished\n", (counter)%3);
	counter += 1;
  pthread_mutex_unlock(&lock);
  return NULL;
}

int main(void)
{
	srand(time(0));
  int i = 0;
  int error;
  if (pthread_mutex_init(&lock, NULL) != 0) {
    printf("\n mutex init has failed\n");
    return 1;
  }
for(j=0;j<5;j++){
	printf("\nRound %d started\n" , j+1);
  while (i < 3) {
  	
  	if(j == 4){
  		if(ans % 2 ==0 ){
  			printf("\nWinner is player [%d] by genrating count value as [%d]\n", i , ans);			
  			
		}	
	}
  	
    error = pthread_create(&(tid[i]),NULL, &trythis, NULL);
    if (error != 0) 
	printf("\nThread can't be created ,[%s]", strerror(error));
    i++;
  }
  i =0 ;
	pthread_join(tid[0], NULL);
	pthread_join(tid[1], NULL);
	pthread_join(tid[2], NULL);
	pthread_mutex_destroy(&lock);
	
	printf("\n--------------------------------------------------------\n");
}

  return 0;
}
