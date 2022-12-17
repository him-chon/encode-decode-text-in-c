#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
   if (argc != 4) {
      printf("In correct no. of arguments");
      exit(0);
   }
   unsigned int seed_no = atoi(argv[1]);
   int no_w_enc = atoi(argv[2]);
   int no_w_dec = atoi(argv[3]);
   int key;
   char az[] = "abcdefghijklmnopqrstuvwxyz";
   char word[32];

   // Set seed for random number generator
   srand(seed_no);

   // Generate random number between 1 and 25 inclusive
//   printf("Seed no. is %d\n", seed_no);
   key = (rand() % (25)) + 1;
//   printf("Key is %d\n", key);
//   printf("no. word to encode is %d\n", no_w_enc);
//   printf("no. word to decode is %d\n", no_w_dec);


//   // Populate key character array with displaced alphabets (by increment of key)
//   for (int a = 0; a < 26; a++){
//      int new_id = a + key;
//      if (new_id > 25)
//         new_id -= 25;
//      az_enc[a+key] = az[a];
//   }

   // Take user input and print encrypted word
   for (int i = 0; i < no_w_enc; i++) {
      printf("Enter a word to encrypt: ");
      scanf("%31s", word);
      for (int j = 0; j < strlen(word); j++) {
         for (int a = 0; a < 26; a++) {
            if (word[j] == az[a]) {
               int new_id = a + key;
               if (new_id > 25)
                  new_id -= 26;
               printf("%c", az[new_id]);
               break;
            }
         }
      }
      printf("\n");
   }

   // Take user input and print decrypted word
   for (int i = 0; i < no_w_dec; i++) {
      printf("Enter a word to decrypt: ");
      scanf("%31s", word);
      for (int j = 0; j < strlen(word); j++) {
         for (int a = 0; a < 26; a++) {
            if (word[j] == az[a]) {
               int new_id = a - key;
               if (new_id < 0)
                  new_id += 26;
               printf("%c", az[new_id]);
               break;
            }
         }
      }
      printf("\n");
   }
}
