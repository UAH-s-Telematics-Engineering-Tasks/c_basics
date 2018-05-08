#include "headers.h"

void compute_statistics(struct student arr[], int num_elms) {
  float avg_grade = 0;
  int counter[5] = {0};
  for (int i = 0; i < num_elms; i++) {
    avg_grade += arr[i].grade / num_elms; //Average = each_grade / total.
    /*switch (arr[i].grade) {
      case arr[i].grade == 10 ? arr[i].grade : 0:
        counter[0]++;
        break;
      case arr[i].grade < 10 && arr[i].grade >= 9 ? arr[i].grade : 0:
        counter[1]++;
        break;
      case arr[i].grade < 9 && arr[i].grade >= 7 ? arr[i].grade : 0:
        counter[2]++;
        break;
      case arr[i].grade < 7 && arr[i].grade >=5 ? arr[i].grade : 0:
        counter[3]++;
        break;
      case arr[i].grade < 5 ? arr[i].grade : 0:
        counter[4]++;
        break;*/
    if (arr[i].grade == 10) {counter[0]++;};
    if (arr[i].grade < 10 && arr[i].grade >= 9) {counter[1]++;};
    if (arr[i].grade < 9 && arr[i].grade >= 7) {counter[2]++;};
    if (arr[i].grade < 7 && arr[i].grade >= 5) {counter[3]++;};
    if (arr[i].grade < 5) {counter[4]++;};
    }
    print_statistics(avg_grade, counter, num_elms);
  }


void print_statistics(float avg, int arr[], int n) {
  char achievements[NUM_GRADES][20] = {"Distinction", "A", "B","C", "F"};
  printf("Average grade: %g\n", avg);
  for(int i = 0; i < 5; i++) {
    printf("Percentage of %s: %g\n", achievements[i], (float) arr[i] / n * 100);
  }
}
