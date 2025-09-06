/**
 * Author: Brady Dame
 * Date: 2025-09-06
 * Email: bdame2@huskers.unl.edu
 * 
 * This program takes an analog voltage value between 0-Vref and converts
 * to a 4-bit digital output and displays the results
 */
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {
    double vRef;
    double voltageSignal;
    int digital;

    vRef = atof(argv[1]);
    voltageSignal = atof(argv[2]);

    digital = ((voltageSignal / vRef) * 15);

    printf("The digital equivalent is: %d", digital);

    return 0;
}