include <stdio.h>

int main() {
    int day;
    printf ("enter day\n");
    scanf("%d", &day);
    switch(day)
    {
     case 1:
          printf ("Monday \n");
          break;
   case 2: 
        printf("Tuesday \n");
        break;
   case 3:
        printf ("Wednesday \n");
        break;
   default:
        printf ("Invalid day \n");
    }
    return 0;
}