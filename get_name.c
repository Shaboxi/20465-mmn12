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

int compare (char* str, char* compare)
{
    int result;

    while (*str) 
    {
        result = tolower(*str) - tolower(*compare);
        if (result) {
            return result;
        } 
        str++;
        compare++;
    } 
    return 0;
    
    
}

char arr[NUMBER_OF_STRINGS][MAX_STRING_SIZE];

int validate_input (int validateIndex )
{
    int i = 0;
    int counter = 0; /* how many times a name is in the array */
    char dummy[MAX_STRING_SIZE];
    

    /* copy strings, so the real value in the array will be kept */
    copy_string(dummy, arr[validateIndex]);
    
    /* get the name in a lowercase  
    string_to_lower(dummy);
    
    */

    while(i <= validateIndex)
    {

        /* debug print:
        printf("The array: on index %d you can find the value %s\n", i, arr[i]);
        */

        /* 
        if the name is 2 times in the array - the input is not valid. 
        1 time for its original, 
        1 time for duplication.
        */
        if(compare(dummy,arr[i]) == 0)
            counter++;

        if(counter == 2)
        {
            printf("\n Compare: String to lower: %s", dummy);
            printf(", = %s \n", arr[i]);
            return 1;
        }




        i++;
    }

    
    /*printf("\n %s", stringToCompare);*/
    return 0;
}

void get_name() 
{ 
    time_t t;          
    int random;
    
 
    /* Intializes random number generator */
    srand((unsigned) time(&t));

    /* Print 1 random numbers from 0 to NUMBER_OF_STRINGS-1 */
    random = rand() % (NUMBER_OF_STRINGS-1);
    printf("\n%s", arr[random]);
} 

int main()
{
    int inputIndex;
    int getNameLooper = 10;
    

    /* handle input */
    for(inputIndex = 0; inputIndex <= NUMBER_OF_STRINGS; inputIndex++)
    {
        printf("\nEnter a NAME: \n");
        scanf("%s", arr[inputIndex]);

        if(validate_input(inputIndex) != 0)
        {
            printf("The name %s was already enterd! Exit program. \n" , arr[inputIndex]);
            return 0;
        }
             
    }
        
    printf("\n\nGET NAME:\n");    
    while(getNameLooper >= 0)
    {
        /* call get_name funcation */
        get_name();
        sleep(1);
        getNameLooper--;
    }
    printf("\n");    
    return 0;
}





