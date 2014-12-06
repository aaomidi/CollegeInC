int _findCharacter(char[], char);

void findCharacter() {
    char ch1, string[1024];
    int location = 0;
    printf("Please enter a character.\n");
    scanf("%c", &ch1);
    printf("Please enter a string.\n");
    scanf("%s", string);
    location = _findCharacter(string, ch1);
    printf("Location of the letter %c is %d.\n", ch1, location);
}

int _findCharacter(char string[], char ch1) {
    int i;
    for (i = 0; string[i] != "/0"; i++) {
        if (string[i] == ch1) {
            return i + 1;
        }
    }
    return -1;
}