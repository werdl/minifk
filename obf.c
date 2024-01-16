#define b break;
#define c case
#define s a[1]
main(int _,char**a){
int t[30000]={0};int*p=t;while(*s){switch(*s){c'>':++p;b;c'<':--p;b;c'+':++*p;b;c'-':--*p;b;c'.':printf("%c",*p);b;c',':*p=getchar();b;c'[':if(!*p){int l=1;while(l>0){s++;if(*s==']'){l--;}else if(*s=='['){l++;}}}b;c']':if(*p){int l=1;while(l>0){s--;if(*s=='['){l--;}else if(*s==']'){l++;}}}b;}s++;}}