#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <unistd.h>

int main(){
    int h, m, s, i;
    int round;
    system("cls");
    printf("Hour:Minute:Second(Using space): ");
    scanf("%d%d%d", &h,&m,&s);
    round = (h*60*60) + (m*60) + s;
    for (i = 0; i<round; i++){
        //gotoxy(32,13);
        printf("\t");
        printf("%.2d : %.2d : %.2d ", h, m, s);
        s--;
        sleep(1);
        if (s<0){
            s = 59;
            m--;
        }
        if (m<0){
            m = 59;
            h--;
        }
        system("cls");
    }
    //gotoxy(32,13);
    printf("Kom Sad Ey Pov Rok SS 1 2 Tv ");
    getch();
    return 0;

}