#define b  \
    break; \
    case       // Define the 'b' macro
#define s a[1] // Define the 's' macro
#define c l += *s == 91 ? -1 : *s == 93 ? 1 \
                                        : 0; // Define the 'c' macro, which is a shorthand for the following code:
/*
    if (*s == 91) // If the current command is '['
    {
        l--; // Decrement the adjustment position
    }
    else if (*s == 93) // If the current command is ']'
    {
        l++; // Increment the adjustment position
    }
*/
main(int l, char **a)
{
    int t[30000] = {0}, *p = t; // define the 30000-byte array and the pointer. The pointer points to the first element of the array. 30000 is an arbitrary number
    while (*s)                  // Loop until the end of the code
    {
        switch (*s) // Check the current command
        {
        case '>': // Increment the pointer
            ++p;
            b '<' : --p;            // Decrement the pointer
            b '+' : ++*p;           // Increment the value at the pointer
            b '-' : --*p;           // Decrement the value at the pointer
            b '.' : putchar(*p);    // Output the value at the pointer
            b ',' : *p = getchar(); // Input a value and store it at the pointer
            b '[' : if (!*p)        // Jump forward to the corresponding ']' if the value at the pointer is zero
            {
                while (l) // Loop until the corresponding ']' is found
                {
                    s++;          // Move to the next command
                    if (*s == 91) // If the current command is '['
                    {
                        l--; // Decrement the adjustment position
                    }
                    else if (*s == 93) // If the current command is ']'
                    {
                        l++; // Increment the adjustment position
                    }
                }
            }
            b ']' : if (*p) // Jump back to the corresponding '[' if the value at the pointer is non-zero
            {
                l = 1;    // Set the adjustment position to 1
                while (l) // Loop until the corresponding '[' is found
                {
                    s--;          // Move to the previous command
                    if (*s == 91) // If the current command is '['
                    {
                        l--; // Decrement the adjustment position
                    }
                    else if (*s == 93) // If the current command is ']'
                    {
                        l++; // Increment the adjustment position
                    }
                }
            }
            break;
        }
        s++; // Move to the next command
    }
}