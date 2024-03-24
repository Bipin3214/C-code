
#include <stdio.h>
int main() {
   long int year; /*
   printf("Enter a year: ");
   scanf("%d", &year);
*/
for(year=1000;year<10000;year++)
{
   if (year % 400 == 0) {
      printf("%d is a leap year.\n", year);
   }
   
   else if (year % 100 == 0) {
      printf("%d is not a leap year.\n", year);
   }
   
   else if (year % 4 == 0) {
      printf("%d is a leap year.\n", year);
   }
}
   return 0;
}

