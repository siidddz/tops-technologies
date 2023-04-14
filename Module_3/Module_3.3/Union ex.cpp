/*difference between Structure and Union.

struct [name of the structure]
   {
       type member1;
       type member2;
       type member3;
   };
*/
#include<stdio.h>

union item
{
    int x;
    float y;
    char ch;
};

main( )
{
    union item it;
    it.x = 12;
    it.y = 20.2;
    it.ch = 'a';
    
    printf("%d\n", it.x);
    printf("%f\n", it.y);
    printf("%c\n", it.ch);
}
