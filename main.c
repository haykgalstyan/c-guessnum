#include <stdio.h>
#include <stdlib.h>

const int MAX = 10;

int askNum();

int checkNum(int guess, int num);

int askAndCheck(int num);

int getRandNum();


int main() {
    printf("Hello, guess a number between 1 and %d.\n", MAX);

    const int num = getRandNum();

    while (!askAndCheck(num)) {}

    return 0;
}


int askAndCheck(int num) {
    return checkNum(askNum(), num);
}


int askNum() {
    const int len = 3;
    char in[len];
    fgets(in, len, stdin);
    return (int) strtol(in, NULL, 10);
}


int checkNum(int guess, int num) {
    if (guess < num) {
        printf("Too low\n");
        return 0;
    } else if (guess > num) {
        printf("Too high\n");
        return 0;
    }

    printf("Correct!");
    return 1;
}


int getRandNum() {
    return rand() % MAX;
}