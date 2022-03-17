#ifndef SERVER_H
#define SERVER_H

void foo(int a);
void foo(char c);
void foo(double d);

#endif

/*
Try 7 possibilities by removing functions
we have foo(65) in main

all three   -- foo(int) - exact match
int char    -- foo(int) - exact
int double  -- foo(int) - exact
char double -- ambiguity - no ranking of std conversion
int         -- foo(int) - exact
char        -- foo(char)- std conversion
double      -- foo(double) - std conversion
*/