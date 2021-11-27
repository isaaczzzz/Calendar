#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
//#include "connection.h"

struct Settings
{
    int SettingItem;
    int Setting;
} S;

int main(){
    FILE *fp;
    fp = fopen("Settings.dat", "wb+");
    S.SettingItem = 3333332;
    S.Setting = 3;
    if (fwrite(&S, sizeof(S), 1, fp))
    {
        printf("Success\n");
        
    }
    S.SettingItem = 1;
    S.Setting = 2;
    rewind(fp);
    while(fread(&S, sizeof(S), 1, fp) == 1){
    printf("%d\n",S.SettingItem);
    printf("%d\n",S.Setting);
    }
    
    system("pause");
}

void Settings() {
    FILE *fp;
    fp = fopen("Settings.dat", "wb+");
}

void LoadSettings(){
    FILE *fp;
    fp = fopen("Settings.dat", "wb+");

}