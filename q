^e96c2ed (Andres Reyna      2021-04-12 18:07:11 -0500  1) #include <stdio.h>
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500  2) 
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500  3) unsigned getbits(unsigned x, int p, int n);
^e96c2ed (Andres Reyna      2021-04-12 18:07:11 -0500  4) 
^e96c2ed (Andres Reyna      2021-04-12 18:07:11 -0500  5) int main()
7889818b (Andres Reyna      2021-04-13 18:45:54 -0500  6) {
7889818b (Andres Reyna      2021-04-13 18:45:54 -0500  7)     /* CHAPTER ONE EXCERCISES FUNCTIONS */
^e96c2ed (Andres Reyna      2021-04-12 18:07:11 -0500  8)     // oneFourteen();
^e96c2ed (Andres Reyna      2021-04-12 18:07:11 -0500  9)     // oneThirteen();
^e96c2ed (Andres Reyna      2021-04-12 18:07:11 -0500 10)     // oneFifteen();
^e96c2ed (Andres Reyna      2021-04-12 18:07:11 -0500 11)     // longestLine();
^e96c2ed (Andres Reyna      2021-04-12 18:07:11 -0500 12)     // test();
^e96c2ed (Andres Reyna      2021-04-12 18:07:11 -0500 13)     //sevenTeen();
^e96c2ed (Andres Reyna      2021-04-12 18:07:11 -0500 14)     // eighTeen();
^e96c2ed (Andres Reyna      2021-04-12 18:07:11 -0500 15)     // nineTeen();
00000000 (Not Committed Yet 2021-04-20 22:17:06 -0500 16)     // twenty();
00000000 (Not Committed Yet 2021-04-20 22:17:06 -0500 17)     // ################# PENDING ###############
00000000 (Not Committed Yet 2021-04-20 22:17:06 -0500 18)     // twentyOne();
00000000 (Not Committed Yet 2021-04-20 22:17:06 -0500 19)     // twentyTwo();
00000000 (Not Committed Yet 2021-04-20 22:17:06 -0500 20)     // twentyThree();
00000000 (Not Committed Yet 2021-04-20 22:17:06 -0500 21)     // twentyFour();
7889818b (Andres Reyna      2021-04-13 18:45:54 -0500 22) 
7889818b (Andres Reyna      2021-04-13 18:45:54 -0500 23)     /* CHAPTER TWO EXCERSICES FUNCTIONS */
c141f8ed (Andres Reyna      2021-04-15 12:44:35 -0500 24)     // chapter2_first();
c141f8ed (Andres Reyna      2021-04-15 12:44:35 -0500 25)     // chapter2_second();
c1833426 (Andres Reyna      2021-04-15 17:08:15 -0500 26)     // chapter2_third();
c1833426 (Andres Reyna      2021-04-15 17:08:15 -0500 27)     // chapter2_fourth();
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500 28)     // chapter2_fifth();
00000000 (Not Committed Yet 2021-04-20 22:17:06 -0500 29)     // chapter2_sixth();
00000000 (Not Committed Yet 2021-04-20 22:17:06 -0500 30) 
00000000 (Not Committed Yet 2021-04-20 22:17:06 -0500 31)     // ################# PENDING ###############
00000000 (Not Committed Yet 2021-04-20 22:17:06 -0500 32)     // chapter2_seventh(); ***** FIX *****
00000000 (Not Committed Yet 2021-04-20 22:17:06 -0500 33)     // chapter2_eighth(); ***** FIX *****
00000000 (Not Committed Yet 2021-04-20 22:17:06 -0500 34)     // chapter2_nineth();
00000000 (Not Committed Yet 2021-04-20 22:17:06 -0500 35)     chapter2_tenth();
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500 36) 
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500 37)     // unsigned int n = 28;
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500 38)     // unsigned int x = getbits(n, 5, 3);
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500 39)     // printf("n %d\n", n);
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500 40)     // printf("Bits: %d\n", x);
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500 41)     /* CLEAR SCREEN
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500 42) 
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500 43)     char s[1000];
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500 44)     int len = getline(s, 1000);
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500 45)     while(len < 10)
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500 46)     {
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500 47)         clearScreen();
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500 48)         len = getline(s, 1000);
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500 49)     }
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500 50)     printf("Finally ends!");
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500 51)     */
^e96c2ed (Andres Reyna      2021-04-12 18:07:11 -0500 52)     return 0;
c141f8ed (Andres Reyna      2021-04-15 12:44:35 -0500 53) }
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500 54) 
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500 55) unsigned getbits(unsigned x, int p, int n)
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500 56) {
50826838 (Andres Reyna      2021-04-16 09:26:46 -0500 57)     return (x >> (p + 1 - n)) & ~(~0 << n);
bebb7f0e (Andres Reyna      2021-04-18 12:54:16 -0500 58) }
