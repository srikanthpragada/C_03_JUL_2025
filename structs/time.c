// Create a structure to store time and perform required operations
// Date : 22-JUL-2025

#include <stdio.h>


struct time
{
    int h, m, s;
};

void print(struct time t)
{
    printf("%02d:%02d:%02d", t.h, t.m, t.s);
}

int totalseconds(struct time t)
{
    return t.h * 3600 + t.m * 60 + t.s;
}

int equals(struct time t1, struct time t2)
{
    //return t1.h == t2.h && t1.m == t2.m && t1.s == t2.s;
    return totalseconds(t1) == totalseconds(t2);
}

// 0 - t1 == t2, > 0 - t1 > t2, < 0 - t1 < t2
int compare(struct time t1, struct time t2)
{
    return totalseconds(t1) - totalseconds(t2);
}

struct time max(struct time t1, struct time t2)
{
     if (totalseconds(t1) > totalseconds(t2))
           return t1;
     else
           return t2;
}

void main()
{
   struct time t1 = {12, 5, 10};
   struct time t2 = {10, 10, 10};
   struct time t3;

   t3 = max(t1, t2);
   print(t3);


}


