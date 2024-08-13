#include <stdio.h>
#include <string.h>
struct empolyee
{
    int id;
    char name[50];
    float salary;
}e1,e2;

int main()
{
    e1.id=101;
    strcpy(e1.name,"abhi");
    e1.salary=56000;
    
    e2.id=102;
    strcpy(e2.name,"avnthika");
    e2.salary=12600;
    
    printf("empolyee 1 id : %d\n",e1.id);
    printf("empolyee 1 name : %s\n",e1.name);
    printf("empolyee 1 salary: %f\n",e1.salary);
    
    printf("empolyee 2 id : %d\n",e2.id);
    printf("empolyee 2 name : %s\n",e2.name);
    printf("empolyee 2 salary: %f\n",e2.salary);

    return 0;
}