#include<stdio.h>
#include<math.h>
#include<limits.h>

const char asciiCa7[] =
"▒▒░░░░░   ░▒▓█████▒░░░  ░░  ░░▓▒▒ ░▒▒░ ░░▓▓░░▓▒░░░░ ▒░ ░  ▒████████▓▒░ ░░░░░░░▒▒\n"
"▒▒▒░░░░░░▒███▓▓▒▒▒▓███▒░    ░▒▒░▒░░▓ ░░░▒▒▒▓▓▓▓▒░ ░░░░▒████▒▓░▓▓▓▓██▓░░░▓▒░░░░▒▒\n"
"░▒▒░░░░░ ░▓█▒░░▒▒ ░█░▒▓█▓░░   ░▓▒░▒░▒▒░░░░░▒▒█▓░░░░░▓███▒░█░▒▒░ ░░▓▓░   ░▒▓▒░▒▒░\n"
"▒░░░░░░░  ▒█░  ░░░███░▒▒▒▒░░  ░▒▒░▒▒▒░░░░░▒▒▓▓▒░ ░░█▓▓▒▒▒███░░░░  █▒      ░░▒▒▒▒\n"
"▓░▒▒░░░░ ░ ░▓░  ░░███░░░░░█░  ░░░▒░░░░░░░▒▒▒▓▓▒ ░░▒██▒░▒░███░░░░ ▓▒    ░ ░░▒▓▓▒▒\n"
"▒░░▒░░░     ░▒▓  ░ █░░░ ░██▓░░░▒▒░ ░   ░░░▒░▒▒▒░░░▓██▓░░▒░█ ░░ ▓░   ░░░░ ░░▒▓▓▒▒\n"
"▒░░▒▒▒░░░░      ▒▓▒▒▓▓▓▓▓▒▒▒░░▒░░░░░░░░░░▒▒▒▓▓▒▒▒▒▓▓▒▓▒▓▓▓▓▓░░     ░░░░░▒░▒▓▓▓▓▒\n";

// Function declarations
void printCa7(int episode);
int BitShiftMask(char c);

int main(){
  int i =0;
  float pi = 4 * atan(1.0);
  char character = 'A';
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printCa7(character);
  printf("%s",alphabet);
  printf(": printf %%s alphabet[] = \"ABCDEFGHIJKLMNOPQRSTUVWXYZ\";\n");
  while(alphabet[i] != '\0'){
    printf("%c",alphabet[i]);
    i++;
  }
  printf(": loop through alphabet[i] until \'\\0\' null terminator\n\n");
  printf("for loop adding 1 each pass 26 times\n");

  for(i=0;i<26;i++){
    char lowercase = BitShiftMask(alphabet[i]);
    printf("%p → %c → %d → %b | %p → %c → %3d → %b\n",
      (void *)&alphabet[i],alphabet[i],alphabet[i],alphabet[i],
      (void *)&lowercase,lowercase,lowercase,lowercase

    );
  }
  printf("\n");
  int c;
  for(c=65;c<91;c++){
    char lowercase = BitShiftMask(c);
    printf("%p → %c → %d → %b | %p → %c → %3d → %b\n",
      (void *)&c,c,c,c,
      (void *)&lowercase,lowercase,lowercase,lowercase
    );
  }
  printf("\n");
  printf("Using math.h for float pi = 4 * atan(1.0)\n");
  printf("pi = %.20f\n\n",pi);
  printf("Using limits.h to discover: \n");
  printf("INT_MAX : %11d\n", INT_MAX);
  printf("INT_MIN : %11d\n\n", INT_MIN);
  printf("Odometer is an example of an integer overflow.\n");
  /* When an integer reaches its maximum limit and you try to add one to it, 
     it overflows. Instead of crashing, it typically wraps around to the lowest 
     possible negative number (or zero) and counts back up. 
  */
  for(i=INT_MAX-2;i<=INT_MAX;i++){
    printf("odometer : %11i\n", i);
    if(i==INT_MIN+2){
      break;
    }
  }
  printf("\n");
  return 0;
}

// Functions
void printCa7(int episode) 
{
    printf("Practical Ca7");
    printf("%67b\n", episode);
    printf("%s",asciiCa7);
}

int BitShiftMask(char c)
{
  char lowercase = c | (1 << 5);
  /* Bit Shift Mask:
    - creates a binary number where only the 6th bit is set
    - The | operator ensures that the 6th bit is always set 
    (effectively converting uppercase to lowercase)
                  *      
                76543210  
    'A' → 65 → 01000001
    'a' → 97 → 01100001
                  */
  return lowercase;
}