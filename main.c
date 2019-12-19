//
//  main.c
//  FibN
//
//  Created by Tehillah Kangamba on 12/18/19.
//  Copyright © 2019 Tehillah Kangamba. All rights reserved.
//

#include <stdio.h>
#include "Fib.h"
int cache[5];
int main(int argc, const char * argv[]) {
    // insert code here...
   // printf("This is the fibonachi program\nPlease enter value:");
   
    printf("%d",fib(1000));
    return 0;
}
int fib (int position )
{
    
   
    if(position<1)
    {
        if(position==0)
        {
            return 0;
        }
        return 1;
    }
    else
    {
         if (position%3==0&& cache[4]==0)
           {
               cache[position/3-1]=fib(position-1) + fib(position-2);
               return cache[position/3-1];
           }
           else if(cache[4]!=0&&position%3==0)
           {
               return cache[position/3-1];
           }
           else
           {
               return fib(position-1) + fib(position-2);
           }
        
    }
}
