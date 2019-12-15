#include <stdio.h>

/*
function to convert decimal to binary 
int decimal - get a number in a decimal base
return - a void function, just prints the decimal number in binary base
*/
void translate_dec_hex(int decimal) 
{ 
         
    int i;
    int k;
    
    /* 
    Get how many bits there are in an unsigned int.
    sizeof(unsigned int) returns the number of byte, doubled by 8 (number of memory cells) gives us the number of bits we need to loop throw.
    -1 is needed because the loop runs till 0.
    */
    i = sizeof(unsigned int)*8 -1 ;
    
    printf("The number in binary is: ");
    
    /* loop throw all the bytes in the memory */
    for (; i > 0; i--) { 
        
        /* Right shift the bits by the number of bits left in memory  */
        k = decimal >> i; 
        
        /* check if the the value of k is 1 */
        if (k & 1) 
            printf ("1");             
        else
            printf ("0"); 
    } 

      printf("\n");

} 

int main()
{
    unsigned int input;

    /* handle input */
    printf("\nEnter a number: ");
    scanf("%u", &input);

    /* call translate_dec_hex funcation */
    translate_dec_hex(input); 
  
    return 0;
}





