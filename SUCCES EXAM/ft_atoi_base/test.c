#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_digit(char c) {
    return (c >= '0' && c <= '9');
}

int is_lower_alpha(char c) {
    return (c >= 'a' && c <= 'f');
}

int is_upper_alpha(char c) {
    return (c >= 'A' && c <= 'F');
}

int char_to_digit(char c) {
    if (is_digit(c)) {
        return c - '0';
    }
    else if (is_lower_alpha(c)) {
        return c - 'a' + 10;
    }
    else if (is_upper_alpha(c)) {
        return c - 'A' + 10;
    }
    else {
        return -1;
    }
}

int atoi_base(const char *str, int str_base) {
    int result = 0;
    int sign = 1;

    // Check for negative sign
    if (*str == '-') {
        sign = -1;
        str++;
    }

    // Calculate the integer value of the string
    while (*str != '\0') {
        int digit = char_to_digit(*str);
        if (digit < 0 || digit >= str_base) {
            break;
        }
        result = result * str_base + digit;
        str++;
    }

    return sign * result;
}

int main() {
    const char *str = "Ceci permet de découvrir le fonctionnement de ton ft_atoi_base.";
    int base = 16;

    int result = atoi_base(str, base);

    printf("Result: %d\n", result);

    return 0;
}
