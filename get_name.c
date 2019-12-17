#include "header.h"

/*
char *target = a var to copy the data to
char *source = a string value to copy from
this function copy data between two char*
*/
void copy_string(char *target, char *source)
{
    /* as long as there are values in the char* array, run loop */
    while(*source)
    {
        *target = *source;        
        source++;        
        target++;
    }    
    /* put null in the last cell to close the string */
    *target = '\0';
}

/*
char* str = first string to compare
char* compare = second string to compare
loop throw all chars of both strings and check if the result of substrating both chars ASCII code is 0.
if result is 0 then the chars are equle and move to the next char. 
returns a non-zero value in case of strings not beeing equles.
*/
int compare (char* str, char* compare)
{
    int result;

    while (*str || *compare) 
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

/*
int validateIndex = an index in the array to validate
this function returns 0 in case of a successful input, and returns 1 in case of invalid input.
*/
int validate_input (int validateIndex)
{
    int i = 0;
    int counter = 0; /* how many times a name is in the array */
    char dummy[MAX_STRING_SIZE]; /* allocate a dummy var so the data in the original input wont be spoiled */    

    /* copy strings, so the real value in the array will be kept */
    copy_string(dummy, arr[validateIndex]);
    
    while(i <= validateIndex)
    {
        /* 
        if the name appers 2 times in the array - the input is invalid. 
        1 time for its original, 
        1 time for duplication.
        */
        if(compare(dummy,arr[i]) == 0)
            counter++;

        if(counter == 2)
        {
            printf("\nCompare: %s = %s\n", dummy, arr[i]);            
            return 1;
        }

        i++;
    }

    return 0;
}

/*
this void function prints a random name from the array of names. 
*/
void get_name() 
{ 
    time_t t;          
    int random;
    
    /* intializes random number generator */
    srand((unsigned) time(&t));

    /* get 1 random number from 0 to NUMBER_OF_STRINGS-1 */
    random = rand() % (NUMBER_OF_STRINGS-1);
    /* print the random name */
    printf("\n%s", arr[random]);
} 

int main()
{
    int inputIndex; /* how many inputs are enterd */
    int getNameLooper = 10; /* how many time to run the get name function */
    
    /* handle input */
    for(inputIndex = 0; inputIndex <= NUMBER_OF_STRINGS; inputIndex++)
    {
        printf("\nEnter a NAME: \n");
        scanf("%s", arr[inputIndex]);

        /* check if value is valid */
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





