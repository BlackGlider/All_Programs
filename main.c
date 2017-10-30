#include<stdlib.h>
#include <stdio.h>

//ITERATIVE FUNCTION

int main(int argc, char * argv[]) {
   	int i;
    long int fact=1;
    
   
    if(atoi(argv[1])==0||atoi(argv[1])==1)
        fact=1;
    else
        for (i = 2; i <=atoi(argv[1]); i++)
            fact=fact*i;
    printf("Factorial of %s is %ld\n", argv[1],fact);
    return 0;
    
}
