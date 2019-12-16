#include "header.h"

char* string_to_lower (char* str)
{
    int i;
    
    
    /*lower = strcpy(lower,str);*/
    
    for(i = 0; str[i]; i++){
        str[i] = tolower(str[i]);
    }
    
    return str;
}


int validate_input (int validateIndex, char arrayOfString[NUMBER_OF_STRINGS][MAX_STRING_SIZE])
{
    int i = 0;

    
    /*printf("\nvalidateIndex= %s", arrayOfString[validateIndex]);*/

    while(i <= validateIndex)
    {

        /*printf("\ni= %s", arrayOfString[i]);*/

        i++;
    }

        
      /*printf("\n %s", stringToCompare);*/
      return 1;
}

void get_name() 
{ 
          
      printf("\n");

} 

int main()
{
    int inputIndex;
    static char arr[NUMBER_OF_STRINGS][MAX_STRING_SIZE];
    char* lowerString;

    /* handle input */
    for(inputIndex = 0; inputIndex <= NUMBER_OF_STRINGS; inputIndex++)
    {
        printf("\nEnter a NAME: ");
        scanf("%s", arr[inputIndex]);

        /* 
        cast the array so it could be sent to the function
        printf("\nInput value: %s", arr[inputIndex]);
        */
        
        
        validate_input(inputIndex, arr);
        
    }
        printf("\nString Value: %s", arr[inputIndex-1]);
        
    
        
        
        
        /*printf("\nString index %d: ", "1");
        
        
        */
       
        lowerString = string_to_lower(arr[inputIndex-1]);
        
        printf("\nString to lower: %s", lowerString);
        printf("\nString Value: %s", arr[inputIndex-1]);

  

    /* call get_name funcation */
    get_name(); 
  
    return 0;
}





