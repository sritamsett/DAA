#include<stdio.h>
#include<string.h>
// method to search for pattern
void naiveFindPatrn(char* mainString, char* pattern, int array[], int *index) {
   int patLen = strlen(pattern);
   int strLen = strlen(mainString);
   // outer for loop 
   for(int i = 0; i<=(strLen - patLen); i++) {
      int j;
      // to check for each character of pattern 
      for(j = 0; j<patLen; j++) {      
         if(mainString[i+j] != pattern[j])
            break;
      }
      // to print the index of the pattern is found
      if(j == patLen) {    
         (*index)++;
         array[(*index)] = i;
      }
   }
}
// main method starts
int main() {
   // main string
   char mainString[] = "ABAAABCDBBABCDDEBCABC";
   // pattern to be found
   char pattern[] = "ABC";
   int locArray[strlen(mainString)];
   int index = -1;
   naiveFindPatrn(mainString, pattern, locArray, &index);
    // to print the indices
   for(int i = 0; i <= index; i++) {
      printf("Pattern found at position: %d\n", locArray[i]);
   }
   return 0;
}
