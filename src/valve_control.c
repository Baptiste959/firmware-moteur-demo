#include <stdio.h>

void valve_open(int percent) {
    if (percent > 100) percent = 100;
    printf("Valve opening: %d%%\n", percent);
}
