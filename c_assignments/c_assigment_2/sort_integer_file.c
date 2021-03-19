/* This is the second assignment in the bootcamp for c. In this program we will
 * read in integers from a file into an array, print them for debugging, sort them using the
 * bubble sort algorithm and then print again to debug and finally write them
 * to a file sorted */

#include <stdio.h> 

// creating a global constant for array size
#define ARRAY_SIZE 10 

// prototypes of functions
void read_integers(int * arr); // will read integers from txt file to an array
void write_integers(int * arr); // will write integers in an array to a txt file
void print_array(int * arr); // print an array of integers to the stdout
void bubble_sort(int * arr); // sort integers in an array

// main function to run the reading, prints, sorting and writing
int main(void)
{
    int arr1[ARRAY_SIZE];
    read_integers(arr1);
    print_array(arr1);
    bubble_sort(arr1);
    print_array(arr1);
    write_integers(arr1);
    return 0;
}

// this will open and read  the integers.txt file into arr
void read_integers(int * arr)
{
    // used for opening and reading file
    FILE * fp;
    int i=0;

    // open file for reading
    fp = fopen("integers.txt", "r");

    // loop for reading integers into file
    for (i=0 ; i < ARRAY_SIZE; i++)
    {
        fscanf(fp, "%d", &arr[i]);
    }

    // now to close the file
    fclose(fp);
}

// this function will write the contents to the file my_integers.txt
void write_integers(int * arr)
{
    FILE * fp;
    int i=0;
    
    fp = fopen("my_integers.txt", "w");

    for ( i=0 ; i < ARRAY_SIZE; i++ )
    {
        fprintf(fp, "%d\n", arr[i]);
    }

    fclose(fp);
}

// now for the function that will print the contents of an array to stdout
void print_array(int * arr)
{
    int i=0;

    for (i=0 ; i < ARRAY_SIZE; i++)
    {
        printf("%d : %d\n", i, arr[i]);
    }
}

// lastly we now have a function for bubble sorting the integers of an array
void bubble_sort(int * arr)
{
    int i=1; // for the for loop
    int swapped=1; // this is to keep track of if swapped or not
    int store=0; // this used to swap values in the arrya
    while( swapped == 1 ) // only loop if a swap happened
    {
        swapped=0; // will exit loop if below code doesnt run
        for( i=1 ; i < ARRAY_SIZE ; i++) // run over the array
        {
            if( arr[i-1] > arr[i] ) // compare sizes
            {
                // swap values
                store=arr[i-1];
                arr[i-1]=arr[i];
                arr[i]=store;
                swapped=1; // records a swap happened
            }
        }
    }

}




























