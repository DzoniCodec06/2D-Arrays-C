#include <stdio.h>
#include <string.h>

int r;
char value[15];
char command;

int runing = 1;

char strings[12][20] = {
    "Hello1", "Hello2", "Hello3", "Hello4",
    "Hello5", "Hello6", "Hello7", "Hello8",
    "Hello9", "Hello10", "Hello11", "Hello12"
};


void change_matrix() {
    printf("Index: ");
    scanf("%d", &r);
    printf("Value: ");
    scanf("%s", value);

    strcpy(strings[r], value);
    printf("String changed at Index of: %d with value of: %s", r, value);
}

void show_matrix() {
    for (int i = 0; i <= 11; i++) {
        printf("%s\n", strings[i]);
    }
}


int main()
{
    while(runing) {

        printf("Commands: S - Show Matrix | C - Change Matrix | Q - Quit\n");
        printf("Command: ");
        scanf("%c", &command);

        switch(command) {
            case 'q':
                runing = 0;
                break;
            case 'c':
                change_matrix();
                break;
            case 's':
                show_matrix();
                break;
        }
    }
    
    return 0;
}