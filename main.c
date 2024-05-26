#include "lr.h"
#define YES 1
#define NO 0
#define  MAXLINE 1000
#define N 10
#define  N 3

// первая лаба

int lab1()
{
 float v0, t, g, h;
 printf("t=");
 scanf("%f", &t);
 printf("g=");
 scanf("%f", &g);
 printf("h=");
 scanf("%f", &h);
 v0 = ((h - (g* (t*t)))/2)/t;
 printf("v0 = %f\n", v0);
 return 0;
}

// доп задание к первой

int labd1()
{
 float const g = 9.8;
 float v0, t, h;
 printf("t=");
 scanf("%f", &t);
 printf("h=");
 scanf("%f", &h);
 v0 = ((h - (g* (t*t)))/2)/t;
 printf("v0 = %f\n", v0);
 return 0;
}

// вторая лаба

int lab2()
{
 float s;
 float a;
 float c;
 float b;
 float x;
 float eps;
 int sign;
 printf("eps=");
 scanf("%f", &eps);
 printf("x=");
 scanf("%f", &x);
 s = 0;
 sign = 1;
 c += 1;
 b = x;
 a = c / b;
 while(a > eps)
 {
 s += a*sign;
 sign = sign;
 c += 1;
 b = b * x;
 a = c / b;
 }
 printf("s = %f\n", s);
 return 0;
}

// доп задние ко второй

int labd2()
{
 float s;
 float a;
 float x;
 int n;
 int i;
 int sign;
 printf("n=");
 scanf("%d", &n);
 printf("x=");
 scanf("%f", &x);
 s = 0;
 sign = 1;
 i = 0;
 while(i < n)
 {
 a = (n - 1)/x*(n - 1);
 s += a*sign;
 sign = sign;
 i = i + 1;
 }
 printf("s = %f\n", s);
 return 0;
}

// третья лаба

int lab3()
{
 int a, flag, ctr, found, l;
 ctr = 0;
 flag = NO;
 found = NO;
 while ((a = getchar()) != EOF) {
 if (a == ' ' || a == '.' || a == '\n' || a == ',') {
 l=0;
 if (flag == YES) {
 if (found == YES) {
 ctr++;
 }
 }
 flag = NO;
 }
 else {
 l+=1;
 if (l % 2 != 0) {
 found = YES;
 }
 else {
 found = NO;
 }
 flag = YES;
 }
 }
 printf ("%d words", ctr);

 return 0;
}

// четвертая лаба

int lab4()
{
 char line[MAXLINE];
 gets(line);
 int i;
 int start;
 int cnt;
 int max;
 i = 0;
 cnt = 0;
 max = 0;
 while (line[i] != '\0')
 {
 if ((line[i] != ' ') && (line[i] != '.') && (line[i] != ','))
 {
 cnt++;
 if (cnt > max)
 {
 max = cnt;
 start = i - max + 1;
 }
 }
 else
 cnt = 0;
 i++;
 }
 i = start;
 while (i < (MAXLINE - max))
 {
 line[i] = line[i+max];
 i++;
 }
 puts (line);
}

// доп задание к четвертой

int labd4()
{
char line[MAXLINE];
gets(line);
int i;
int start;
int cnt;
int max;
i = 0;
cnt = 0;
max = 0;
while (line[i] != '\0')
{
if ((line[i] != ' ') && (line[i] != '.') && (line[i] != ',') && (line[i] != 'a') && (line[i] != 'o') && (line[i] != 'u') && (line[i] != 'e') && (line[i] != 'i') && (line[i] != 'y'))
{
cnt++;
if (cnt > max)
{
max = cnt;
start = i - max + 1;
}
}
else
cnt = 0;
i++;
}
i = start;
while (i < (MAXLINE - max))
{
line[i] = line[i+max];
i++;
}
puts (line);
}

// пятая лаба

int lab5()
{
int x[N];
int i;
int pol, otr;

for (i = 0; i < N; i++) {
    scanf("%d", &x[i]);
}

for (i = 0; i < N; i++) {
    if (x[i] > 0) {
        pol++;
    }
    else {
        otr++;
    }
}

if (otr < pol) {
    for (i = 0; i < N; i++) {
        if (x[i] < 0) {
            x[i] = 0;
        }
    }
}
else {
    for (i = 0; i < N; i++) {
        if (x[i] > 0) {
            x[i] = 0;
        }
    }
}
for (i = 0; i < N; i++) {
    printf("%d", x[i]);
}


return 0;
}

// доп задание к пятой

int labd5()
{
 int x[N];
 int i;
 int pol, otr;

 for (i = 0; i < N; i++) {
 scanf("%d", &x[i]);
 }

 for (i = 0; i < N; i++) {
 if (x[i] > 0) {
 pol++;
 }
 else {
 otr++;
 }
 }

 if (otr < pol) {
 for (i = 0; i < N; i++) {
 if (x[i] < 0) {
 x[i] = 0;
 }
 }
 }
 else {
 for (i = 0; i < N; i++) {
 if (x[i] > 0) {
 x[i] = 0;
 }
 }
 }
 {
 if (otr = pol) {
 for (i = 0; i < N; i++) {
 if (x[i] < 0 || x[i] > 0) {
 x[i] = 0;
 }
 }
 }
 }
 for (i = 0; i < N; i++) {
 printf("%d", x[i]);
 }
 return 0;
}

// шестая лаба

int lab6()
{
    int x[N][N];
    int y[N][N];
    int i, j, k, l;
    int max = 0;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &x[i][j]);
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
        {
            y[i][j] = x[i][j];
        }
        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++)
            {
                if (x[i][j] > max)
                    max = x[i][j];
            }
            for (i = 0; i < N; i++)
                for (j = 0; j < N; j++)
                {
                    if (x[i][j] == max)
                    {
                        k = i;
                        l = j;
                        break;
                    }
                }
                for (j = 0, i = 0; j < N; j++)
                {
                    y[i][l] = x[k][j];
                    i++;
                }
                for (i = 0, j = 0; i < N; j++)
                {
                    y[k][j] = x[i][l];
                    i++;
                }
                for (i = 0; i < N; i++)
                    for (j = 0; j < N; j++)
                    {
                        x[i][j] = y[i][j];
                    }
                    printf("ответ\n");
                    for (i = 0; i < N; i++)
                    {
                        for (j = 0; j < N; j++)
                            printf("%4d", x[i][j]);
                        printf("\n");
                    }
}


// седьмая лаба

int lab7()
{
    unsigned long num=0,R;
    scanf("%lu", &R);
    while(R)
    {
        num^=(R&15);
        R=R>>4;
        num=num<<4;
    }
    num=num>>4;
    printf("%lu\n", num);
    return 0;
}
