//
// Created by Tin Aung Lin on 10/12/2022.
//
#include "stdio.h"
#include "stdlib.h"

char data[4800];
int index = 0;

void read();
void countWinHtut();
void countNCC();

int main()
{
    read();
    countWinHtut();
    countNCC();

    return 0;
}

void read()
{
    FILE *fptr = fopen("words.txt", "r");
    if (fptr == NULL)
    {
        printf("File cannot be opened!");
        exit(0);
    }
    else
    {
        while (!feof(fptr))
        {
            char c = fgetc(fptr);
            data[index] = c;
            //printf("Data: %c\n", data[index]);
            index++;
        }
    }
}

void countWinHtut()
{
    int count = 0;
    for (int i =0; i <index; i++)
    {
       if (data[i] == 'w' && data[i+1] == 'i' && data[i+2] == 'n' && data[i+3] == 'h' && data[i+4] == 't' && data[i+5] == 'u' && data[i+6] == 't')
       {
           count++;
       }
    }
    printf("\"Win Htut\" is found (%d) times in 'words.txt'.\n", count);
}

void countNCC()
{
    int count = 0;
    for (int i =0; i <index; i++)
    {
        if (data[i] == 'N' && data[i+1] == 'a' && data[i+2] == 't' && data[i+3] == 'i' && data[i+4] == 'o' && data[i+5] == 'n' && data[i+6] == 'a' && data[i+7] == 'l' && data[i+8] == 'C' && data[i+9] == 'y' && data[i+10] == 'b' && data[i+11] == 'e' && data[i+12] == 'r' && data[i+13] == 'C' && data[i+14] == 'i' && data[i+15] == 't' && data[i+16] == 'y')
        {
            count++;
        }
    }
    printf("\"NationalCyberCity\" is found (%d) time in 'words.txt'.\n", count);
}