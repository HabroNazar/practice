#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[20];
    printf("Введіть слово: ");
    scanf("%s", s);
    int len = strlen(s);
    int count[26] = {0};
    for (int i = 0; i < len; i++) {
        count[tolower(s[i]) - 'a']++;
    }
    long fact[15];
    fact[0] = 1;
    for (int i = 1; i <= 14; i++) {
        fact[i] = fact[i - 1] * i;
    }
    long result = fact[len];
    for (int i = 0; i < 26; i++) {
        result /= fact[count[i]];
    }
    printf("Кількість анаграм: %ld\n", result);
    return 0;
}
