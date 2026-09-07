#include <stdio.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LENGTH 256

// Global document storage
char lines[MAX_LINES][MAX_LENGTH];
int line_count = 0;

// Function prototypes
void display_doc();
void insert_line(int line_num, const char *text);
void delete_line(int line_num);

int main() {
    int choice, line_num;
    char text[MAX_LENGTH];

    while (1) {
        printf("\n--- LINE EDITOR ---\n");
        printf("1. Display Document\n");
        printf("2. Insert Line\n");
        printf("3. Delete Line\n");
        printf("4. Exit\n");
        printf("Enter choice: ");

        // Safely validate numeric menu input
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n'); // Clear invalid non-numeric text from input buffer
            printf("Invalid input! Please enter a number.\n");
            continue;
        }
        getchar(); // Clear remaining newline character from buffer

        switch (choice) {
            case 1:
                display_doc();
                break;
            case 2:
                printf("Enter line number to insert at: ");
                if (scanf("%d", &line_num) != 1) {
                    while (getchar() != '\n');
                    printf("Invalid line number input!\n");
                    break;
                }
                getchar(); // Clear newline
                printf("Enter text: ");
                fgets(text, MAX_LENGTH, stdin);
                text[strcspn(text, "\n")] = 0; // Remove trailing newline
                insert_line(line_num, text);
                break;
            case 3:
                printf("Enter line number to delete: ");
                if (scanf("%d", &line_num) != 1) {
                    while (getchar() != '\n');
                    printf("Invalid line number input!\n");
                    break;
                }
                getchar(); // Clear newline
                delete_line(line_num);
                break;
            case 4:
                printf("Exiting editor.\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

// 1. DISPLAY FUNCTION
void display_doc() {
    if (line_count == 0) {
        printf("[ Document is empty ]\n");
        return;
    }
    printf("\n--- DOCUMENT CONTENTS ---\n");
    for (int i = 0; i < line_count; i++) {
        printf("%d: %s\n", i + 1, lines[i]);
    }
}

// 2. INSERT FUNCTION
void insert_line(int line_num, const char *text) {
    if (line_count >= MAX_LINES) {
        printf("Error: Document is full!\n");
        return;
    }
    if (line_num < 1 || line_num > line_count + 1) {
        printf("Error: Invalid line number! (Allowed range: 1 to %d)\n", line_count + 1);
        return;
    }

    // Shift existing lines down
    for (int i = line_count; i >= line_num; i--) {
        strcpy(lines[i], lines[i - 1]);
    }

    // Insert new text
    strcpy(lines[line_num - 1], text);
    line_count++;
    printf("Line inserted successfully.\n");
}

// 3. DELETE FUNCTION
void delete_line(int line_num) {
    if (line_count == 0) {
        printf("Error: Document is empty!\n");
        return;
    }
    if (line_num < 1 || line_num > line_count) {
        printf("Error: Invalid line number! (Allowed range: 1 to %d)\n", line_count);
        return;
    }

    // Shift lines up to cover the deleted index
    for (int i = line_num - 1; i < line_count - 1; i++) {
        strcpy(lines[i], lines[i + 1]);
    }

    line_count--;
    printf("Line deleted successfully.\n");
}