#include <stdio.h>

struct Remainder
{
    int yy;
    int mm;
    char note[100];
}R;


int main(void)
{
    FILE *fp;
    fp = fopen("test.dat", "a+");
    printf("year month: \n");
    scanf("%d%d", &R.yy, &R.mm);
    printf("Note: \n");
    fflush(stdin);
    scanf("%[^\n]",R.note);
    fwrite(&R, sizeof(R), 1, fp);
    fclose(fp);
    return 0;
}