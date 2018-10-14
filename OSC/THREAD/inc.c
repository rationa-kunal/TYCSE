#include<stdio.h>
#include<pthread.h>

long int counter=0;

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void * inc(){
	int i=0;
	for(i=0; i<10000; i++){
		pthread_mutex_lock(&mutex);
		counter++;
		pthread_mutex_unlock(&mutex);
	}
}

int main(){
	
	pthread_t tid[10];
	int i=0;
	for(i=0; i<10; i++) pthread_create(&tid[i], NULL, inc, NULL);

	for(i=0; i<10; i++) pthread_join(tid[i], NULL);
	
	printf("counter : %ld\n", counter);

}
