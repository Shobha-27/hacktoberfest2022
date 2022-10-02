#include <stdio.h>

int main() 
{
    // declare local variable  
    int caps;
    // use for loop to print the capital letter from A to Z  
    for (caps = 65; caps < 91; caps++)
    {
        printf(" \n The ASCII value of %c is %d ", caps, caps);
    }
    return 0;
}
