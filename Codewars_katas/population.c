int nbYear(int p0, double percent, int aug, int p) {
    int curr_pop = p0, yr_counter = 0;
    while (curr_pop < p) {
      curr_pop = (int) (curr_pop * (1 + percent / 100) + aug);
      yr_counter++;
  }
  return yr_counter;
}
