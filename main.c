//
//  main.c
//  Calculating C arithmetic
//
//  Created by Melanie Mills on 9/28/18.
//  Copyright © 2018 CSCI. All rights reserved.
//

// Filename main.c
#include <stdio.h>

void foo(int *thisp, int that);

int main(void)
{

        int first, second;
        
        first = 1;
        second = 2;
        foo(&second, first);
        printf("%4d%4d\n", first, second);
        return 0;
}
        
        void foo(int *thisp, int that) {
            int num = 5;
            that = 2 + num;
            *thisp = num * that;
        }
        
        
    
    //do {
    //    printf( "%d ", i);
    //    i /= 10;
    //} while (i > 0);
    
    //printf( "result: %d\n", result );
    //printf("1. %d\n", i && j);
    //printf("2. %d\n", k);
  
    


