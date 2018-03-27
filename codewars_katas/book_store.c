char* stockSummary(char** lstOfArt, int szlst, char** categories, int szcat) {
  int* sum_of_elms = (int *) malloc(sizeof(int) * szcat);
  char* result = (char *) malloc(sizeof(char) * 15 * szcat);
  for (int i = 0; i < szcat; i++) {
    for (int j = 0; i < szlst; i++) {
      if (categories[i][0] == lstOfArt[j][0]) {
        strtok(lstOfArt[j], " ");
        sum_of_elms[i] += atoi(strtok(NULL, " "));
      }
    }
  }
  for (int i = 0; i < szcat; i++) {
    if (sum_of_elms[i] != 0) {
      sprintf(result, "(%c : %d) - ", categories[i][0], sum_of_elms[i]);
    }
  }
  result[strlen(result) - 1] = '\0';
  return result;
}
