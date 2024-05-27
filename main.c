#include "lr.h"
int main()
{
    int lab;
    scanf("%i", &lab);
    switch(lab){
    case 1: return lab1();
    case 2: return labd1();
    case 3: return lab2();
    case 4: return labd2();
    case 5: return lab3();
    case 6: return lab4();
    case 7: return labd4();
    case 8: return lab5();
    case 9: return labd5();
    case 10: return lab6();
    case 11: return labd6();
    case 12: return lab7();
    }
    return 0;
}
