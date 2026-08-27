#include <stdio.h>
#include <string.h>

int check_pass(const char *input) {
    char secret[] = {0x13, 0x07, 0x1A, 0x16, 0x00}; // Clé XOR avec 0x55 -> "FLAG"
    if (strlen(input) != 4) return 0;
    for (int i = 0; i < 4; i++) {
        if ((input[i] ^ 0x55) != secret[i]) return 0;
    }
    return 1;
}

int main() {
    char buf[32];
    printf("Entrez le mot de passe : ");
    if (scanf("%31s", buf) != 1) return 1;
    if (check_pass(buf)) {
        puts("Accès accordé !");
    } else {
        puts("Accès refusé.");
    }
    return 0;
}
