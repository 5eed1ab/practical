/*
▒▒░░░░░   ░▒▓█████▒░░░  ░░  ░░▓▒▒ ░▒▒░ ░░▓▓░░▓▒░░░░ ▒░ ░  ▒████████▓▒░ ░░░░░░░▒▒
▒▒▒░░░░░░▒███▓▓▒▒▒▓███▒░    ░▒▒░▒░░▓ ░░░▒▒▒▓▓▓▓▒░ ░░░░▒████▒▓░▓▓▓▓██▓░░░▓▒░░░░▒▒
░▒▒░░░░░ ░▓█▒░░▒▒ ░█░▒▓█▓░░   ░▓▒░▒░▒▒░░░░░▒▒█▓░░░░░▓███▒░█░▒▒░ ░░▓▓░   ░▒▓▒░▒▒░
▒░░░░░░░  ▒█░  ░░░███░▒▒▒▒░░  ░▒▒░▒▒▒░░░░░▒▒▓▓▒░ ░░█▓▓▒▒▒███░░░░  █▒      ░░▒▒▒▒
▓░▒▒░░░░ ░ ░▓░  ░░███░░░░░█░  ░░░▒░░░░░░░▒▒▒▓▓▒ ░░▒██▒░▒░███░░░░ ▓▒    ░ ░░▒▓▓▒▒
▒░░▒░░░     ░▒▓  ░ █░░░ ░██▓░░░▒▒░ ░   ░░░▒░▒▒▒░░░▓██▓░░▒░█ ░░ ▓░   ░░░░ ░░▒▓▓▒▒
▒░░▒▒▒░░░░      ▒▓▒▒▓▓▓▓▓▒▒▒░░▒░░░░░░░░░░▒▒▒▓▓▒▒▒▒▓▓▒▓▒▓▓▓▓▓░░     ░░░░░▒░▒▓▓▓▓▒
*/

#include<stdio.h>
#include<math.h>
#include<limits.h>
int main(){
	printf("Hello Practical Ca7\n");
	int i = 0;
	float pi = 4 * atan(1.0);
	char character = 65;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%s\n",alphabet);
	while(alphabet[i] != '\0'){
	  printf("%c",alphabet[i]);
	  i++;
	}
	printf("\n");
	for(i=0;i<26;i++){
	  printf("%c %d %b %c %3d %b\n",
	          character+i,character+i,character+i,
	          character+32+i,character+32+i,character+32+i
		  );
	}
	printf("\n");
	printf("pi = %.20f\n",pi);

	printf("CHAR_MIN : %d\n", CHAR_MIN);
	printf("CHAR_MAX : %d\n", CHAR_MAX);
	printf("UCHAR_MAX : %d\n", UCHAR_MAX);
	printf("INT_MIN : %d\n", INT_MIN);
	printf("INT_MAX : %d\n", INT_MAX);
	
	for(i=INT_MAX-10;i<=INT_MAX;i++){
		printf("odometer : %i\n", i);
		if(i==INT_MIN+10){
		break;
		}
	}

	return 0;
}
