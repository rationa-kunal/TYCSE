
//  author @rationa-kunal

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binary_search(int *a, int low, int high, int key){
    
    if(high > low){

        int mid = (low+high)/2;
        int value = *(a+mid);
        // printf("mid %d\n", mid);

        if(value == key) return mid;

        if(value > key) return binary_search(a, low, mid, key);
        else return binary_search(a, mid, high, key);

    }

    return -1;

}

int main(){

    // driver
    int dy_size=0;
    for(dy_size=10; dy_size<1000001; dy_size*=10){
        
        clock_t t;
        printf("\nsize of array %d\n", dy_size);

        int a[dy_size];
        int i=0;
        for(i=0; i<dy_size; i++) a[i] = i;

        // int key = rand() % 1000;
        printf("key %d\n", rand()%1000);

        int res = binary_search(a, 0, dy_size, 9);
    
        // double time_taken = ((double)t) / CLOCKS_PER_SEC;
        if(res!=-1)
            printf("key found at %d\n", res);
        else
            printf("key is not in array\n");

        // printf("time isken is %f\n", time_taken);

    }

    return 0;

}
