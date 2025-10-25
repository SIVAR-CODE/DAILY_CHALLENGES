#include <stdio.h>
int main() {
   char message[100];	
   printf("enter a message");
   gets(message);
   printf("the given message is: %s",message);
   return 0;
}

