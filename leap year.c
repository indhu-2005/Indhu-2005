
#include <stdio.h>
int main(){
  int a;
  scanf("%d",&a);
  printf("%d",a);
 if ((a%4==0) && (a%100!=0)||(a%400==0))
  printf ("It is leap year");
else {
    printf("not a leap year ");
}
  return 0;
} 