#define package(x) <x>
#include package("arya.h")

int main() {
    // Define variables using your custom terminology
    entity number;
    char_entity a;
    string_entity str = (string_entity) malloc(100 * sizeof(char_entity));

    // Input and output using your custom functions
    display("Enter a number: ");
    take("%d", &number);

    display("You entered: %d\n", number);

    display("Enter a character: ");
    take(" %c", &a);

    display("You entered: %c\n", a);

    display("Enter a string: ");
    take("%s", str);

    display("You entered: %s\n", str);

    // Free the allocated memory
    free(str);

    return 0;
}
