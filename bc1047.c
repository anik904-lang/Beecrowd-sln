#include <stdio.h>

int main() {
    int hi, mi, hf, mf;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    int start = hi * 60 + mi;
    int end = hf * 60 + mf;

    if (end <= start) end += 24 * 60;

    int duration = end - start;
    int hours = duration / 60;
    int minutes = duration % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);

    return 0;
}
