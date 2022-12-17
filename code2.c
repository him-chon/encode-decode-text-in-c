#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

   //   char c = 'a';
//   char az[27];
//   for (int i = 0; i < 26; i++) {
//      az[i] = c;
//      c++;
//   }
//   printf("%s", az);
   int increment = 1;
   char word[27];

   for (int i = 0; i < num_e; i++){
      printf("Enter the word to be encrypted: ");
      scanf("%s", word);
      int x = 0;
      while (word[x] != NULL) {
         for (char c = 'a'; c <= 'z'; c++)
            if (word[x] == c) {
               for (int j = 1; j <= increment; j++) {
                  c++;
               }
               printf("%c",c);
            }
         x++;
      }
   }


   for (int i = 0; i < strlen(word); i++) {
      for (char c = 'a'; c <= 'z'; c++)
         if (word[i] == c) {
            for (int j = 1; j <= increment; j++) {
               c++;
            }
            printf("%c",c);
         }
   }
   return 0;
}

int num_e = (int) argv[2];
int num_d = (int) argv[3];

for (int i = 0; i < int (int) argv[2]; i++) {

}