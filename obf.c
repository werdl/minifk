#define b break
#define c case 
#define s a[1]
main(int l,char**a){int t[30000]={0},*p=t;while(*s){switch(*s){c'>':++p;b;c'<':--p;b;c'+':++*p;b;c'-':--*p;b;c'.':putchar(*p);b;c',':*p=getchar();b;c'[':if(!*p){while(l){s++;if(*s==93){l--;}else if(*s==91){l++;}}}b;c']':if(*p){l=1;while(l){s--;if(*s==91){l--;}else if(*s==93){l++;}}}b;}s++;}}