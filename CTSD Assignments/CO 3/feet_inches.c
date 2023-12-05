#include <stdio.h>

struct height{
  int feet;
  float inch;
};

int toFeet(float totalInch){
  return (totalInch / 12);
}

float toInch(float totalInch){
  float inches = totalInch - (toFeet(totalInch) * 12);
  return inches;
} 

void getFeetInch(struct height *h1, float totalInch){
  h1->feet = toFeet(totalInch);
  h1->inch = toInch(totalInch);
}

int main(){
  struct height h1;
  float cm, totalInch;
  printf("Enter total height (in cm) : ");
  scanf("%f", &cm);
  totalInch = cm / 2.54;
  getFeetInch(&h1, totalInch);
  
  printf("\nHeight in feet and inches :\n");
  printf("%d feet, %.2f inches\n", h1.feet, h1.inch);
  return 0;
}