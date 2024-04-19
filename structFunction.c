#include<stdio.h>
#include <stdlib.h>
#include<math.h>

struct info{
   char* name;
   int age;
};
void showMe (struct info x);

int main()
{
    struct info x;

    x.name= "Attila";
    x.age=24;

    showMe(x);

    return 0;
}

void showMe(struct info x) {
   printf("Name:%s\n", x.name);
   printf("Age:%d\n", x.age);
}