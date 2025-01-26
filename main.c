#include <stdio.h>

void addieren(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}
void subtrieren(int a, int b) {
    printf("%d - %d = %d\n", a, b, a - b);
}
void multiplicieren(int a, int b) {
    printf("%d * %d = %d\n", a, b, a * b);
}
void dividieren(int a, int b) {
    printf("%d / %d = %d\n", a, b, a / b);
}
int main() {
    int eingabe1;
    int eingabe2;
    int eingabe3;
    printf("Willkommen im Taschenrechner\n");
    printf("Was moechten sie machen?+ - * /(1,2,3,4): ");
    scanf("%d", &eingabe1);
    if (eingabe1 == 1) {
        printf("Du Addierst\n");
        printf("Gebe die erste zahl ein: ");
        scanf("%d", &eingabe2);
        printf("Gebe die zweite zahl ein: ");
        scanf("%d", &eingabe3);
        addieren(eingabe2, eingabe3);
    }
    if (eingabe1 == 2) {
        printf("Du Subtrahierst\n");
        printf("Gebe die erste zahl ein: ");
        scanf("%d", &eingabe2);
        printf("Gebe die zweite zahl ein: ");
        scanf("%d", &eingabe3);
        subtrieren(eingabe2, eingabe3);
    }
    if (eingabe1 == 3) {
        printf("Du Multiplizieren\n");
        printf("Gebe die erste zahl ein: ");
        scanf("%d", &eingabe2);
        printf("Gebe die zweite zahl ein: ");
        scanf("%d", &eingabe3);
        multiplicieren(eingabe2, eingabe3);
    }
    if (eingabe1 == 4) {
        printf("Du Dividierst\n");
        printf("Gebe die erste zahl ein: ");
        scanf("%d", &eingabe2);
        printf("Gebe die zweite zahl ein: ");
        scanf("%d", &eingabe3);
        dividieren(eingabe2, eingabe3);
    }
    return 0;
}