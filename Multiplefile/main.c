
#include "feature.h"
#include "stdio.h"

int main()
{
    int var1 = 10, var2 = 20;
    int result1 = addition_funtion(var1, var2);
    int result2 = subtract(var1, var2);

    printf("Sum = %d, Difference = %d", result1, result2);
    
    return 0;
}
