#include <stdio.h>

struct Remainder{
    int dd;
    int mm;
    int yy;
    int impo;
    char note[100];
};
struct Remainder R;

void AddNote();
int checkNote(int dd, int mm, int yy);
void ShowNote(int mm, int yy);

int main(void)
{
    char ch;
    int mon, year;

    while((ch = getchar()) != 'q')
    {
        switch (ch)
        {
        case 'a':
            AddNote();
            break;
        case 's':
            printf("MM/YY");
            scanf("%d%d", &mon, &year);
            ShowNote(mon, year);
            break;
        }
    }
    return 0;

}

int checkNote(int dd, int mm, int yy){
    FILE *fp;
    fp = fopen("note.dat","rb");
    if(fp == NULL){
        printf("Error in Opening the file");
    }
    while(fread(&R,sizeof(R),1,fp) == 1){
        if(R.dd == dd && R.mm == mm && R.yy == yy){
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    return 0;
}

void AddNote(){
    FILE *fp;
    fp = fopen("note.dat","ab+");
    int i;
    system("cls");
    printf("Enter the date(DD/MM/YY): ");
    scanf("%d%d%d",&R.dd, &R.mm, &R.yy);
    printf("Enter the Note(100 character max): ");
    fflush(stdin);
    scanf("%[^\n]",R.note);
    printf("Enter the Eisenhower Matrix: (UI1/NI2/UU3/NU4)");
    scanf("%d", &R.impo);
    if(fwrite(&R,sizeof(R),1,fp)){
        puts("Note is saved sucessfully");
        fclose(fp);
    }else{
        puts("\aFail to save!!\a");
    }
    printf("Press any key............\n");
    getch();
    fclose(fp);
}

void ShowNote(int mm, int yy){
    FILE *fp;
    int i = 0, isFound = 0;
    system("cls");

    fp = fopen("note.dat","rb");
    if(fp == NULL){
        printf("Error in opening the file\n");
    }

    while(fread(&R,sizeof(R),1,fp) == 1){
        if(R.yy == yy && R.mm == mm){
            printf("Note %d Day = %d: %s\n", i+1, R.dd,  R.note);
            printf("%d\n", R.impo);
            isFound = 1;
            i++;
        }
    }
    if(isFound == 0){
        printf("This Month contains no note\n");
    }
    printf("Press any key to back.......\n");
    getch();

}