//
//  main2.c
//  Lab
//
//  Created by Vanzant-Thomas, Dominick on 9/13/19.
//  Copyright © 2019 Vanzant-Thomas, Dominick. All rights reserved.
//

#include <stdio.h>

void guess()
{
    int high = 100000;
    int low = 0;
    int guess = 1;
    int myguess=0;
    char reply;
    
    printf("The Game of 20 Questions\n");
    printf("Think of a number between 0 and %d\n", high);
    
    while (high > low)
    {
        /* make a guess */
        myguess = (high + low) / 2;
        printf("Guess #%d: Is your number higher than %d? ",
               guess++, myguess, high, low);
        
        /* get your response */
        scanf(" %c",&reply);
        
        if (reply == 'y')
            low = myguess = myguess + 1;
        else
            high = myguess;
    }
    printf("Your number is %d!\n", myguess);
}
