#include <stdio.h>

struct Point{
  int x;
  int y;
};

void checkCoordinate(struct Point *p){
  if (p->x > 0 && p->y > 0)
    printf("Point(%d, %d) is in 1st Quadrant\n", p->x, p->y);
  else if (p->x < 0 && p->y > 0)
    printf("Point(%d, %d) is in 2nd Quadrant\n", p->x, p->y);
  else if (p->x < 0 && p->y < 0)
    printf("Point(%d, %d) is in 3rd Quadrant\n", p->x, p->y);
  else if (p->x > 0 && p->y < 0)
    printf("Point(%d, %d) is in 4th Quadrant\n", p->x, p->y);
  else 
    printf("Point(%d, %d) is at ORIGIN\n", p->x, p->y);
}

int main(){

  struct Point p;

  printf("Abscissa of point : "); 
  scanf("%d", &p.x);
  printf("Ordinate of point : ");
  scanf("%d", &p.y);

  checkCoordinate(&p);

  return 0;
}