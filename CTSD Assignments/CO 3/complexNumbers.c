#include <stdio.h>

struct complexNumber{
  int real;
  int img;
};
void sum(struct complexNumber *c1, struct complexNumber *c2, int *sumReal, int *sumImg){
  *sumReal = c1->real + c2->real;
  *sumImg = c1->img + c2->img;
}
void product(struct complexNumber *c1, struct complexNumber *c2, int *prodReal, int *prodImg){
  *prodReal = (c1->real)*(c2->real) - (c1->img)*(c2->img);
  *prodImg = (c2->img)*(c1->real) + (c2->real)*(c1->img);
}
int main(){
  int sumReal = -1, sumImg = -1, prodReal = -1, prodImg = -1; 
  struct complexNumber cmp1, cmp2;
  printf("Enter the Real and Imaginary part of both complex Numbers :\n");
  printf("Real part of 1st CN : ");
  scanf("%d", &cmp1.real);
  printf("Imaginary part of 1st CN : ");
  scanf("%d", &cmp1.img);
  printf("Real part of 2nd CN : ");
  scanf("%d", &cmp2.real);
  printf("Imaginary part of 2nd CN : ");
  scanf("%d", &cmp2.img);
  
  sum(&cmp1, &cmp2, &sumReal, &sumImg);  // send whole structure as an argument
  product(&cmp1, &cmp2, &prodReal, &prodImg);

  printf("\nGiven Complex Numbers :\n");
  printf("Complex 1 : %d + (%d)i\n", cmp1.real, cmp1.img);
  printf("Complex 2 : %d + (%d)i\n", cmp2.real, cmp2.img);

  printf("\nSum of Complexes : %d + (%d)i\n", sumReal, sumImg);
  printf("Product of Complexes : %d + (%d)i\n", prodReal, prodImg);
  return 0;
}