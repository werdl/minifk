#define b  break;case // define b to end the current case and start a new one
#define s a[1] // define s to be the second argument to main
main(int l, char **a) // define main with two arguments
{
    int t[30000] = {0}, *p = t; // define t to be an array of 30000 ints, and p to be a pointer to the first element of t
    while (*s) // iterate over the second argument to main
    {
        switch (*s) // switch on the current character
        {
        case '>': // if the current character is '>'
            ++p;
            b '<' : --p; // if the current character is '<'
            b '+' : ++*p; // if the current character is '+'
            b '-' : --*p; // if the current character is '-'
            b '.' : putchar(*p); // if the current character is '.'
            b ',' : *p = getchar(); // if the current character is ','
            b '[' : if (!*p) // if the current character is '['
            {
                while (l) // iterate until l is 0
                {
                    s++;
                    if (*s == 93) // if the current character is ']'
                    
                    {
                        l--;
                    }
                    else if (*s == 91) // if the current character is '['
                    {
                        l++;
                    }
                }
            }
            b ']' : if (*p) // if the current character is ']'
            {
                l = 1;
                while (l) // iterate until l is 0
                {
                    s--;
                    if (*s == 91) // if the current character is '['
                    {
                        l--;
                    }
                    else if (*s == 93) // if the current character is ']'
                    {
                        l++;
                    }
                }
            }
            break;
        }
        s++;
    }
}