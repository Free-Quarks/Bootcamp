#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LEN 256
#define MAX_NUM_WORDS 1024


// Additional functions implemented for code
void read_words(char * arr);

/**
 * The driver function. It reads input from stdin and calls functions to
 * clean/process the input. Sanitized input words and then placed in an array
 * of strings. The array of words is then passed to sortList which sorts the
 * words in alphabetical order. Finally the array of strings is passed to
 * printWordCounts which prints out each word along with its number of
 * occurrences to the console.
 * @return Exit status code of 0
 */
int main() {
  char wd[MAX_WORD_LEN] = {0};
  char wdList[MAX_NUM_WORDS];
  char *ptr;
  int listSize = 0;
  read_words(wdList);
  /* YOUR CODE HERE */
  return 0;
}


// this will open and read  the integers.txt file into arr
void read_words(char * arr)
{
    // used for opening and reading file
    FILE * fp;
    int i=0;

    // open file for reading
    fp = fopen("/home/lieffersj/Bootcamp/c_assignments/c_assigment_3/tests/test01", "r");

    // loop for reading integers into file
    for (i=0 ; i < 4; i++)
    {
        fscanf(fp, "%c", &arr[i]);
        printf("| %c |\n", arr[i]);
    }

    // now to close the file
    fclose(fp);

}
