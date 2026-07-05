#include<stdio.h>
#include<math.h>
#include<limits.h>
int main(){
	printf("Practical Ca7");
	printf("%68s", "1000001\n");
	int i = 0;
	float pi = 4 * atan(1.0);
	char character = 65;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const char banner[] =
"▒▒░░░░░   ░▒▓█████▒░░░  ░░  ░░▓▒▒ ░▒▒░ ░░▓▓░░▓▒░░░░ ▒░ ░  ▒████████▓▒░ ░░░░░░░▒▒\n"
"▒▒▒░░░░░░▒███▓▓▒▒▒▓███▒░    ░▒▒░▒░░▓ ░░░▒▒▒▓▓▓▓▒░ ░░░░▒████▒▓░▓▓▓▓██▓░░░▓▒░░░░▒▒\n"
"░▒▒░░░░░ ░▓█▒░░▒▒ ░█░▒▓█▓░░   ░▓▒░▒░▒▒░░░░░▒▒█▓░░░░░▓███▒░█░▒▒░ ░░▓▓░   ░▒▓▒░▒▒░\n"
"▒░░░░░░░  ▒█░  ░░░███░▒▒▒▒░░  ░▒▒░▒▒▒░░░░░▒▒▓▓▒░ ░░█▓▓▒▒▒███░░░░  █▒      ░░▒▒▒▒\n"
"▓░▒▒░░░░ ░ ░▓░  ░░███░░░░░█░  ░░░▒░░░░░░░▒▒▒▓▓▒ ░░▒██▒░▒░███░░░░ ▓▒    ░ ░░▒▓▓▒▒\n"
"▒░░▒░░░     ░▒▓  ░ █░░░ ░██▓░░░▒▒░ ░   ░░░▒░▒▒▒░░░▓██▓░░▒░█ ░░ ▓░   ░░░░ ░░▒▓▓▒▒\n"
"▒░░▒▒▒░░░░      ▒▓▒▒▓▓▓▓▓▒▒▒░░▒░░░░░░░░░░▒▒▒▓▓▒▒▒▒▓▓▒▓▒▓▓▓▓▓░░     ░░░░░▒░▒▓▓▓▓▒\n"
"";
	printf("%s",banner);
	printf("%s",alphabet);
	printf(": printf %%s alphabet[] = \"ABCDEFGHIJKLMNOPQRSTUVWXYZ\";\n");
	while(alphabet[i] != '\0'){
	  printf("%c",alphabet[i]);
	  i++;
	}
	printf(": loop through alphabet[i] until \'\\0\' null terminator\n\n");
	printf("for loop adding 1 each pass 26 times\n");
	for(i=0;i<26;i++){
	  /* Bit Shift Mask: character | (1 << 5) 
	                     - creates a binary number where only the 6th bit is set
						 - The | operator ensures that the 6th bit is always set 
						        (effectively converting uppercase to lowercase)
                  *      
	  			7654 3210  
	 'A' → 65 → 0100 0001
	 'a' → 97 → 0110 0001
	              *
	 Space Literal: character | ' '; 
	                        (The ASCII value of a space character is exactly 32)
					character | 32;
     In the ASCII character encoding system, the binary representations of 
	 uppercase and lowercase letters differ by exactly one bit: 
	 the 6th bit from the right (bit index 5, valued at 2⁵ = 32)
	  */
	  char lowercase = character | (1 << 5);
	  printf("%c → %d → %b |  %c → %3d → %b\n",
	          character+i,character+i,character+i,
	          lowercase+i,lowercase+i,lowercase+i
		  );
	}
	printf("\n");
	printf("Using math.h for float pi = 4 * atan(1.0)\n");
	printf("pi = %.20f\n\n",pi);
    
	printf("Using limits.h to discover: \n");
	printf("INT_MAX : %11d\n", INT_MAX);
	printf("INT_MIN : %11d\n\n", INT_MIN);

	
	printf("Odometer is an example of an integer overflow.\n");
	/*
	When an integer reaches its maximum limit and you try to add one to it, 
	it overflows. Instead of crashing, it typically wraps around to the lowest 
	possible negative number (or zero) and counts back up. 
	*/
	for(i=INT_MAX-2;i<=INT_MAX;i++){
		printf("odometer : %i\n", i);
		if(i==INT_MIN+2){
		break;
		}
	}

	return 0;
}
