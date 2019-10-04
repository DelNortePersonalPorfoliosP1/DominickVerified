//
//  pattern.c
//  Projects
//
//  Created by Vanzant-Thomas, Dominick on 9/27/19.
//  Copyright © 2019 Vo, Anthony. All rights reserved.
//

#include <stdio.h>
int pattern()
{
    int n, c, k;
    
    printf("Enter number of rows\n");
    scanf("%d", &n);
    
    for (c = 1; c <= n; c++)
    {
        for(k = 1; k <= c; k++)
            printf("*");
        
        printf("\n");
    }
    
    return 0;
}
