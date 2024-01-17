#define b break;case
#define s a[1]
main(int l,char**a){int t[30000]={0},*p=t;while(*s){switch(*s){case'>':++p;b'<':--p;b'+':++*p;b'-':--*p;b'.':putchar(*p);b',':*p=getchar();b'[':if(!*p){while(l){s++;if(*s==93)l--;else if(*s==91)l++;}}b']':if(*p){l=1;while(l){s--;if(*s==91)l--;else if(*s==93)l++;}}break;}s++;}}