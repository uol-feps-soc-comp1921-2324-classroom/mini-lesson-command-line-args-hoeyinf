#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    // checks that only 3 arguments were entered (1 command + 2 ints)
    if (argc != 3)
    {
        // outputs correct format
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 0;
    }

    // checks if the two arguments are valid ints, outputs relevant info if not
    // specifically checks if it's an invalid string or a float
    int invalid = 0;
    if ((atoi(argv[1]) == 0 && *argv[1] != '0') || atoi(argv[1]) != atof(argv[1]))
    {
        printf("<num1> must be an integer. '%s' is not valid\n", argv[1]);
        invalid = 1;
    }
    if ((atoi(argv[2]) == 0 && *argv[2] != '0') || atoi(argv[2]) != atof(argv[2]))
    {
        printf("<num2> must be an integer. '%s' is not valid\n", argv[2]);
        invalid = 1;
    }

    // ends program if there was an invalid input
    if (invalid == 1)
    {
        return 0;
    }

    // calculates and prints the sum
    int sum = atoi(argv[1]) + atoi(argv[2]);
    printf("Sum: %d\n", sum);

    return 0;
}
