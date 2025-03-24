#ifndef COMPUTE_H
#define COMPUTE_H

struct user {
    char name[20];
    char lastName[20];
    char age[3];
};

void startEngine(int highScore, struct user firstUser);
int computePrize(int score, int usedPrize);
void endGame(int score, int highScore, int diY, int diX, struct user firstUser);
void showDinasour(int diY, int diX);
void startMenu();
int computeTime(int delayTime);
int checkGame(int y, int x, int diY, int diX);

#endif // COMPUTE_H