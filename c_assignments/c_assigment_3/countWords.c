/* File: countWords.c
 * Author: Eric Anson (edits/updates made by Paul D. Hein)
 * Purpose: Count the "words" in an input and print out the counts in
 *   alphabetical order of the words. Words are to be converted to lower
 *   case and stripped of all leading and trailing chars that are not
 *   letters.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LEN 256
#define MAX_NUM_WORDS 1024

// TODO: Impelement the following functions as part of your program.
char *stripWd (char *wd);
void chgLow(char *wd);
void printWordCounts(char **wds, int sz);
void sortList(char **wds, int sz);

// NOTE: Use this function for debugging
void printList(char **wds, int sz);


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
  char *wdList[MAX_NUM_WORDS];
  char *ptr;
  int listSize = 0;
  /* YOUR CODE HERE */
  return 0;
}

/**
 * Strips the trailing nonletters from wd. It assumes all letters are lowercase.
 * @param  wd a pointer to the first character in wd
 * @return    a pointer to the first letter in wd or '\0' if wd has no letters.
 */
char *stripWd (char *wd) {
  char *ptr;
  /* YOUR CODE HERE */
  return wd;
}

/**
 * This function changes all upper case letters in wd to lower case.
 * @param wd a pointer to the first character in wd
 */
void chgLow(char *wd) {
  char *ptr;
  /* YOUR CODE HERE */
  return;
}

/**
 * Prints the words contained in the sorted array wds along with the count of
 * occurrences for each unique word.
 * @param wds double pointer to the first character of the first word in wds
 * @param sz  the amount of strings in wds
 */
void printWordCounts(char **wds, int sz) {
  int cnt;
  char **curWrd, *lastWd;
  /* YOUR CODE HERE */
  return;
}

/**
 * Debugging function used for seeing the words stored in an array of strings.
 * @param wds the array of strings to print
 * @param sz  the amount of words in the array of strings
 */
void printList(char **wds, int sz) {
  for (char **word = wds; word < wds+sz; word++) printf("%s\n", *word);
}

/**
 * Use the BubbleSort algorithm to sort an array of strings. Students are
 * expected to adapt the pseudocode provided below into a function that
 * utilizes double pointers to sort an array of strings.
 * @param wds double pointer to the first character of the first word in wds
 * @param sz  the amount of strings in wds
 */
void sortList(char **wds, int sz) {
  char **i, **j, *tmp;
  /* YOUR CODE HERE */
  return;
}

/* =============================================================================
NOTE: The following pseudocode for the BubbleSort algorithm has been
provided for you. Use this as the basis for your sortList function which will
implement BubbleSort upon an array of strings using pointers as necessary.

A = [64, 25, 12, 22, 11]
N = 5

# Traverse through all array elements
for i in 0..N-1:
  # Last i elements are already in place
  for j in 0..N-i-1:
    # Swap if the element found is greater than the next element
    if A[j] > A[j+1] :
      A[j], A[j+1] = A[j+1], A[j]
============================================================================= */
