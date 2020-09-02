#include<stdio.h>
#include<math.h>


//simple
int scrt = 9;
int guess;
int gsscount = 0;

int main() {
    while (guess != scrt && gsscount < 3) {
        printf("Can you get it:");
        scanf_s("%d", &guess);
        gsscount++;
    }

    //Complex

    int skrt = rand(0, 10);
    int gss;
    int gsscoun = 0;
    int gsslimit = 3;
    int outofgsses = 0;

    printf("Can You guess it:");
    scanf_s("%d", &gss);

    while (gss != skrt && outofgsses == 0) {
        if (gsscoun < gsslimit) {
            printf("\nCome on get it:");
            scanf_s("%d", &gss);
            gsscoun++;
        }
        else {
            outofgsses = 1;
        }
    }
    if (gss == skrt) {
        printf("You Win!");
    }
    else {
        printf("Out Of Counts!");
    }
}