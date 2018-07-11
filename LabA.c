/*
    Lab3A.c
    Name:Elias Perez
    Date:July 11th, 2018
*/


/*    Student ages
        Declare and zeroize an int array with a dimension equal to the number of students + 1
        Set index 0 with the age* of the instructor
        Fill the elements of the array with the ages* of the students starting with index 1
        Print the array
    Favorite quote
        Declare and initialize a char array with your favorite saying
        Ensure the last index is set to nul ('\0')
        Separate each word in the array with a new line character ('\n' or decimal value 10)

NOTE: * use your best guess
*/
#include <stdio.h>

int main(void)
{
    int Students [12] = {0};
    char quote [] = {"The\ninner\nmachinations\nof\nmy\nmind\nare\nan\nenigma\n"};

    Students[0] = 28;
    Students[1] = 26;
    Students[2] = 32;
    Students[3] = 29;
    Students[4] = 20;
    Students[5] = 29;
    Students[6] = 26;
    Students[7] = 30;
    Students[8] = 34;
    Students[9] = 28;
    Students[10] = 30;
    Students[11] = 29;

    printf("The ages of the class are %d,", Students[0]);
    printf("%d,", Students[1]);
    printf("%d,", Students[2]);
    printf("%d,", Students[3]);
    printf("%d,", Students[4]);
    printf("%d,", Students[5]);
    printf("%d,", Students[6]);
    printf("%d,", Students[7]);
    printf("%d,", Students[8]);
    printf("%d,", Students[9]);
    printf("%d,", Students[10]);
    printf("%d\n", Students[11]);

    printf("%s \n", quote);

    return 0;
}