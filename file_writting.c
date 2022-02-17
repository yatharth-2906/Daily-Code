#include<stdio.h>

int main(void)
{
    //LINK: https://fools.en.dvrdns.org/article/raspberry-pi-the-smart-persons-guide/
    FILE *ptr;
    ptr = fopen("Rasp.txt","w");
    fprintf(ptr,"The Link for the research is: https://fools.en.dvrdns.org/article/raspberry-pi-the-smart-persons-guide/ \n");
}
