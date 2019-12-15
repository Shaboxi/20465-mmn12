#include "header.h"

int validate_input (int inputIndex)
{
      printf("\n");
      return 1;
/*
    int i = 0;
    while(i < inputIndex)
    {

        i++;
    }
*/
}

void get_name() 
{ 
          
      printf("\n");

} 

int main()
{
    int inputIndex;
    static char arr[NUMBER_OF_STRINGS][MAX_STRING_SIZE];

    /* handle input */
    for(inputIndex = 0; inputIndex < NUMBER_OF_STRINGS; inputIndex++)
    {
        printf("\nEnter a number: ");
        scanf("%s", arr[inputIndex]);

        /*validate_input(inputIndex)*/
    }

    printf("\nEnter a number: %s", arr[1]);
    printf("\nEnter a number: %s", arr[1]);
    

  

    /* call translate_dec_hex funcation */
    get_name(); 
  
    return 0;
}





