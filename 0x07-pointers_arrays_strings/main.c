#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main() {
    char *s1 = "Hello, world!";
    char *s2 = "world";
    char *s3 = "WORLD";
    char *s4 = "HOLA, MUNDO";
    char *s5 = "banana";
    char *s6 = "na";
    char *s7 = "naaa";
    char *s8 = "";
    char *s9 = "apple";
    char *s10 = "APPLES";

    char *result1;
    char *result2;
    char *result3;
    char *result4;
    char *result5;
    char *result6;
    char *result7;
    char *result8;
    char *result9;
    char *result10;

    result1 = _strstr(s1, s2);
    printf("Result 1: %s\n", result1);

    result2 = _strstr(s1, s3);
    printf("Result 2: %s\n", result2);

    result3 = _strstr(s4, s2);
    printf("Result 3: %s\n", result3);

    result4 = _strstr(s5, s6);
    printf("Result 4: %s\n", result4);

    result5 = _strstr(s5, s7);
    printf("Result 5: %s\n", result5);

    result6 = _strstr(s1, s8);
    printf("Result 6: %s\n", result6);

    result7 = _strstr(s1, s1);
    printf("Result 7: %s\n", result7);

    result8 = _strstr(s1, s9);
    printf("Result 8: %s\n", result8);

    result9 = _strstr(s3, s2);
    printf("Result 9: %s\n", result9);

    result10 = _strstr(s3, s10);
    printf("Result 10: %s\n", result10);

    return 0;
}

