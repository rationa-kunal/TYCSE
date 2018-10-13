
//  author @rationa-kunal

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linear_search(int *a, int size, int key){

    int i=0;
    for(i=0; i<size; i++){
        if(*(a+i) == key){
            return i;
        }
    }

    return -1;

}

int main(){

    // driver
    int dy_size=0;
    for(dy_size=10; dy_size<10000001; dy_size*=10){
        
        clock_t t;
        printf("\nsize of array %d\n", dy_size);

        int a[dy_size];
        int i=0;
        for(i=0; i<dy_size; i++) a[i] = rand()%100+1;

        int key = rand()%10+1;
        t = clock();
        int res = linear_search(a, dy_size, key);
        t -= clock();

        double time_taken = ((double)t) / CLOCKS_PER_SEC;
        if(res!=-1)
            printf("key found at %d\n", res);
        else
            printf("key is not in array\n");

        printf("time isken is %f\n", time_taken);

    }

    return 0;

}
