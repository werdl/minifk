#define b break; // define b as break, so we can use it in the switch statement
#define c case // define c as case, so we can use it in the switch statement
#define s a[1] // define s as the first argument
main(int _, char **a) // main function
{
    int t[30000] = {0},*p = t; // initialize p as a pointer to the first element of t (the tape)
    while (*s) { // iterate over s
        switch (*s) { // switch on the current character
            c '>' : 
                ++p; // increment p
                b;
            c '<' : 
                --p; // decrement p
                b;
            c '+' : 
                ++*p; // increment the value pointed to by p
                b;
            c '-' : 
                --*p; // decrement the value pointed to by p
                b;
            c '.' : 
                putchar(*p); // print the value pointed to by p
                b;
            c ',' : 
                *p = getchar(); // set the value pointed to by p to the next character from stdin
                b;
            c '[' : 
                if (!*p) { // if the value pointed to by p is 0
                    int l = 1; // initialize l to 1
                    while (l > 0) { // while l is greater than 0
                        s++; // increment s
                        if (*s == ']') { // if the current character is ]
                            l--; // decrement l
                        }
                        else if (*s == '[') { // if the current character is [
                            l++; // increment l
                        }
                    }
                }
                b;
            c ']' : 
                if (*p) { // if the value pointed to by p is not 0
                    int l = 1;
                    while (l > 0) { // while l is greater than 0
                        s--; // decrement s
                        if (*s == '[') { // if the current character is [
                            l--; // decrement l
                        }
                        else if (*s == ']') { // if the current character is ]
                            l++; // increment l
                        }
                    }
                }
                b;
        }
        s++;
    }
}