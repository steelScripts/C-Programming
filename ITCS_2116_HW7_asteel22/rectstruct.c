#include "stdio.h"
#include "string.h"
#include "ctype.h"
#include "stdlib.h"

struct point
{
 int x;
 int y;
};
struct rectangle
{
 struct point upper_left;
 struct point lower_right;
};

float calc_area(struct rectangle r){
  float length, width, area;
  length = (float)(r.lower_right.x - r.upper_left.x);
  width = (float)(r.upper_left.y - r.lower_right.y);
  return length * width;
}

struct rectangle move(struct rectangle r, int x_dist, int y_dist) {
  r.lower_right.x += x_dist;
  r.upper_left.x += x_dist;  
  r.lower_right.y += y_dist;
  r.upper_left.y += y_dist;
  return r;
}

void test() {
  struct rectangle r1;
  r1.lower_right.x = 0;
  r1.upper_left.x = 0;  
  r1.lower_right.y = 0;
  r1.upper_left.y = 0;
  printf("Rectangle Coordinates: "
   "\n\t upper_left = (%d,%d)"
   "\n\t lower_right = (%d,%d)\n\n",
   r1.upper_left.x, r1.upper_left.y,
   r1.lower_right.x, r1.lower_right.y);
  
  printf("Area = %d\n\n", calc_area(r1));
  
  
  struct rectangle r2 = move(r1, 10, 20);
  
  printf("Moved Rectangle Coordinates: "
   "\n\t upper_left = (%d,%d)"
   "\n\t lower_right = (%d,%d)\n",
   r2.upper_left.x, r2.upper_left.y,
   r2.lower_right.x, r2.lower_right.y);
}

int main(void) {
    // Disable stdout buffering
    test();
    
    return 0;
}