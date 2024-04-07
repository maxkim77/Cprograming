#include 

struct good {
    char name[10];
    int age;
 };
 
 void main(){
 	struct good s[] = {"Kim",28,"Lee",38,"Seo",50,"Park",35};
    
    struct good *p;
    p = s;
    p++;
    printf("%sn", p-> name);
    printf("%sn", p-> age);
}