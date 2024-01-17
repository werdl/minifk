#define b break;case
#define s a[1]
#define c l+=*s==91?-1:*s==93?1:0;
main(int l,char**a){int t[30000]={0},*p=t;while(*s){switch(*s){case'>':++p;b'<':--p;b'+':++*p;b'-':--*p;b'.':putchar(*p);b',':*p=getchar();b'[':if(!*p){while(l){s++;c}}b']':if(*p){l=1;while(l){s--;c}}break;}s++;}}