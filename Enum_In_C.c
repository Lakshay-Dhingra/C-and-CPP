#include<stdio.h>

int main()
{
    enum days{sun,mon,tue,wed,thu,fri,sat};
    printf("%d %d",mon,fri);
    
    enum months{jan=23,feb,mar,apr=1,may,jun,jul=1};
    printf("\n%d %d %d %d %d",jan,mar,apr,may,jul);
    
//    enum week{sun,monday}; //-->Give Error
    return 0;
}
