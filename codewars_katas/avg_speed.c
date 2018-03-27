#include <stdio.h>

int gps(int s, double* x, int sz) { //double* x == double x[]
  double tmp_distance, avg_speed, curr_max = 0; //curr_max will be allways be the highest speed.
  for (int i = 1; i < sz; i++) {  //iterate for each element. i = 1 to avoid using an if clause when i = 0
    tmp_distance = x[i] - x[i - 1]; //compute delta(x) for each pair of elements in array(x)
    avg_speed = 3600 * tmp_distance / s; //compute avg_speed in [x units / hour]
    if (avg_speed > curr_max) { //compare to see if this avg_speed is the highest of all
    curr_max = avg_speed; //Let curr_max be set to the highest value
    }
   }
   return (int) curr_max; //Cast curr_max to int in order to return the int part only!
}
