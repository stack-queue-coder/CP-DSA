#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<pthread.h>

int sum[5] = {0};
pthread_mutex_t mutex;

int* round(){
	int j;
	for(j=0;j<5;j++){
		pthread_mutex_lock(&mutex);
		int r = rand();
		sum[j] += r;
		pthread_mutex_unlock(&mutex);	
	}
}


int main(int argc , char* argv[]){
	srand(time(0));
	pthread_t th[8];
	int i;
	pthread_mutex_init(&mutex, NULL);
	for(i=0;i<8;i++){
		if (pthread_create(th + i, NULL, &round, NULL) != 0) {
            perror("Failed to create thread");
            return 1;
        }
        printf("Thread %d has started\n", i);
	}
	for (i = 0; i < 8; i++) {
        if (pthread_join(th[i], NULL) != 0) {
            return 2;
        }
        printf("Thread %d has finished execution\n", i);
    }
    pthread_mutex_destroy(&mutex);
    for(i =0;i<5;i++){
    	printf("%d ",sum[i]);
	}
    return 0;
	
}

