#include <stdio.h>
#define FW_VERSION "1.1.0"

void valve_open(int percent);

int main(void) {
    printf("Engine controller FW %s\n", FW_VERSION);
    valve_open(0);   // séquence d'init : vanne fermée
    return 0;
}
