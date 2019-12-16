#include "header.h"

void copy_string(char *target, char *source)
{
    while(*source)
    {
        *target = *source;        
        source++;        
        target++;
    }    
    *target = '\0';
}

void string_to_lower (char* str)
{
    int i;


    for(i = 0; str[i]; i++){
        str[i] = tolower(str[i]);
    }
    
    
}

char arr[NUMBER_OF_STRINGS][MAX_STRING_SIZE];

int validate_input (int validateIndex ) /*, char arrayOfString[NUMBER_OF_STRINGS][MAX_STRING_SIZE])*/
{
    int i = 0;
    
    char dummy[MAX_STRING_SIZE];
    

    /* copy strings, so the real value in the array will be kept */
    copy_string(dummy, arr[validateIndex]);
    
    /* get the name in a lowercase */ 
    string_to_lower(dummy);
    
    

    while(i <= validateIndex)
    {
        printf("\n Compare: String to lower: %s", dummy);
        printf(", i= %s \n", arr[i]);

        /* 
        if the name is 2 times in the array - the input is not valid. 
        1 time for its original, 
        1 time for duplication.
        */
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
    
    

    /* handle input */
    for(inputIndex = 0; inputIndex <= NUMBER_OF_STRINGS; inputIndex++)
    {
        printf("\nEnter a NAME: ");
        scanf("%s", arr[inputIndex]);

        /* 
        cast the array so it could be sent to the function
        printf("\nInput value: %s", arr[inputIndex]);
        */
        
        
        validate_input(inputIndex);
        
    }
        printf("\nString Value: %s", arr[inputIndex-1]);
        
    
        
        
        
        /*printf("\nString index %d: ", "1");
        
        
        */
       

        
        
        printf("\nString Value: %s", arr[inputIndex-1]);

  

    /* call get_name funcation */
    get_name(); 
  
    return 0;
}





