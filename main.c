#include <stdio.h>

void call_by_value(int x) {
    printf("Innerhalb von call_by_value x = %d VOR der Addition von 10.\n", x);
    x = x + 10;
    printf("Innerhalb von call_by_value x = %d NACH der Addition von 10.\n", x);
}

int main() {
    int y=10;

    printf("y = %d VOR dem Aufruf durch die Funktion call_by_value.\n", y);
    call_by_value(y);
    printf("y = %d NACH dem Aufruf durch die Funktion call_by_value.\n", y);
    return 0;
}