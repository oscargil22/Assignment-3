//
//  main.cpp
//  Assignment 10
//
//  Created by Oscar on 10/2/17.
//  Copyright © 2017 Oscar Gil. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;


int main(){
    int input;
    cout <<"Please enter a number to be factorized: ";
    cin >>input;
   
    while (input %2 == 0)
    {
        printf("%d ", 2);
        input = input/2;
    }
    
    for (int k = 3; k <= sqrt(input); k = k + 2)
    {
    
        while (input %k == 0)
        {
            printf("%d ", k);
            input = input/k;
        }
    }
    
    
    
    if (input > 2)
        printf ("%d ", input);

    
    return 0;
}

