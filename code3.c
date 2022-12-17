#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[]) {
   if (argc != 4) {
      printf("In correct no. of arguments");
      exit(0);
   }
   unsigned int sd = atoi(argv[1]);
   int num_e = atoi(argv[2]);
   int num_d = atoi(argv[3]);
   srand(sd);
   int increment = rand() % 25 + 1;
   char word[27];
   for (int i = 0; i < num_e; i++) {
      int x = 0;
      printf("Enter a word to encrypt: ");
      scanf("%s", word);
      while (word[x] != '\0') {
         char nc[2];
         nc[1] = '\0';
         for (char c = 'a'; c < '{'; c++) {
            if (word[x] == c) {
               nc[0] = c;
               nc[0] += increment;
               if (strcmp(nc, "z") > 0)
                  nc[0] -= 26;
               printf("%c", nc[0]);
            }
         }
         x++;
      }
      printf("\n");
   }

   for (int i = 0; i < num_d; i++) {
      int x = 0;
      printf("Enter a word to be decrypt: ");
      scanf("%s", word);
      while (word[x] != '\0') {
         char nc[2];
         nc[1] = '\0';
         for (char c = 'a'; c < '{'; c++) {
            if (word[x] == c) {
               nc[0] = c;
               nc[0] -= increment;
               if (strcmp(nc, "a") < 0)
                  nc[0] += 26;
               printf("%c", nc[0]);
            }
         }
         x++;
      }
      printf("\n");
   }

   return 0;
}