#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

int main() {
    int id1, id2, id3;

    id1 = fork();
    if (!id1) {
        sleep(4);
        printf("Ord_1: %d %d\n", getpid(), getppid());
        exit(0);
    }
    else {
        id2 = fork();
        if (!id2) {
            id3 = fork();
            if (!id3) {
                sleep(6);
                printf("Ord_2: %d %d\n", getpid(), getppid());
                exit(0);
            }
            else {
                printf("Ord_3: %d %d\n", getpid(), getppid());
                sleep(10);
                exit(0);
            }
        }
        else {
            printf("Ord_4: %d %d\n", getpid(), getppid());
            exit(0);
        }
    }
}
