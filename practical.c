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
void h2(char heading[]);
int BitShiftMask(char c);
void Odometer();
int main(){
  int i =0;
  float pi = 4 * atan(1.0);
  char character = 'A';
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printCa7(character);
  printf("character: %p → %c → %d\n", (void*)&character, character, character);
  printf("%s",alphabet);
  h2("alphabet with printf %s\n");
  while(alphabet[i] != '\0'){
    printf("%c",alphabet[i]);
    i++;
  }
  h2("alphabet[i] with while until \'\\0\' null terminator\n");
  h2("alphabet[i] with for(i=0;i<26;i++): address → char → decimal → hex → binary\n");

  for(i=0;i<26;i++){
    char lowercase = BitShiftMask(alphabet[i]);
    printf("%p → %c → %d → %x → %b | %p → %c → %3d → %x → %b\n",
      (void *)&alphabet[i],alphabet[i],alphabet[i],alphabet[i],alphabet[i],
      (void *)&lowercase,lowercase,lowercase,lowercase,lowercase
    );
  }
  h2("character with for(character=65;character<91;character++):\n");
  for(character=65;character<91;character++){
    char lowercase = BitShiftMask(character);
    printf("%p → %c → %d → %x → %b | %p → %c → %3d → %x → %b\n",
      (void *)&character,character,character,character,character,
      (void *)&lowercase,lowercase,lowercase,lowercase,lowercase
    );
  }
  printf("\ncharacter: %p → %c → %d after for loop\n\n",
    (void*)&character, character, character);
  h2("Using math.h for float pi = 4 * atan(1.0)\n");
  printf("pi = %.20f\n\n",pi);
  h2("Using limits.h to discover: \n");
  printf("INT_MAX : %11d\n", INT_MAX);
  printf("INT_MIN : %11d\n", INT_MIN);
  printf("\ni: %p → %d outside Odometer\n",(void *)&i,i);
  h2("Odometer is an example of an integer overflow.\n");
  Odometer();
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
void h2(char heading[])
{
  printf(" ## %s",heading);
}
void Odometer()
{
  /* When an integer reaches its maximum limit and you try to add one to it, 
     it overflows. Instead of crashing, it typically wraps around to the 
     lowest possible negative number (or zero) and counts back up. 
  */
  int i;
  for(i=INT_MAX-2;i<=INT_MAX;i++){
    printf("i: %p → %11i → %x → %032b\n", (void *)&i,i,i,i);
    if(i==INT_MIN+2){
      break;
    }
  }
}
