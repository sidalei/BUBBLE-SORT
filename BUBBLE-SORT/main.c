//
//  main.c
//  BUBBLE-SORT
//
//  Created by Suchao on 15/5/26.
//  Copyright (c) 2015年 Suchao. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("BUBBLE SORT.\n");
    
    
    int A[] = {2,3,1,5,6,8,9,4,7,10};
    int len = 10;
    
    for (int i=0; i<len; i++) {
        for (int j=len-1; j>i; j--) {
            if (A[j]<A[j-1]) {
                int tmp = A[j];
                A[j] = A[j-1];
                A[j-1] = tmp;
            }
        }
    }
    
    
    for (int i=0; i<len; i++) {
        printf("%d",A[i]);
    }
    
    return 0;
}
