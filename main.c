main(int _,char**a){
    int t[30000] = {0};

    char*s=malloc(1000);
    strcpy(s,a[1]);

    int *p = t;

    while (*s) {
        switch (*s) {
            case '>':
                ++p;
                break;
            case '<':
                --p;
                break;
            case '+':
                ++*p;
                break;
            case '-':
                --*p;
                break;
            case '.':
                printf("%c", *p);
                break;
            case ',':
                *p = getchar();
                break;
            case '[':
                if (!*p) {
                    int l = 1;
                    while (l > 0) {
                        s++;
                        if (*s == ']') {
                            l--;
                        }
                        else if (*s == '[') {
                            l++;
                        }
                    }
                }
                break;
            case ']':
                if (*p) {
                    int l = 1;
                    while (l > 0) {
                        s--;
                        if (*s == '[') {
                            l--;
                        }
                        else if (*s == ']') {
                            l++;
                        }
                    }
                }
                break;
        }
        s++; // Move this line inside the while loop to advance the inp pointer
    }
}