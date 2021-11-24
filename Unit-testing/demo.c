/**
 * @file demo.c
 * @author kasturi
 * @brief Demo program to showcase the Unit testing examples
 * @version 0.1
 * @date 2021-07-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "stdio.h"
#include "assert.h"

/**
 * @brief Function to perform division of 2 interger values
 * 
 * @param num1 Numerator
 * @param num2 Denominator
 * @return flaot Result of the division
 */
float division(int num1, int num2)
{
    return (float)num1 / num2;
}


int main()
{
    int n1 = 20, n2 = 10;
    
    /**
     * Abort will be called if expression evaluates to falls
     * Expression, Source code file name and line number are sent to standard error
    */
    assert(12 == division(n1, n2)); 
    printf("Assert1 is passing \n");

    assert(0.5 == division(n2, n1)); 
    printf("Assert2 is passing \n");

    return 0;
}
