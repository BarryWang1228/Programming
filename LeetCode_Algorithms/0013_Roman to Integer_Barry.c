#include <stdio.h>
#include <string.h>

int romanToInt(char* s)
{
    char* InputStr = s;
    int size = strlen(InputStr);
    int Value = 0, index = 0;
    int CurrentlyChar = 0, PreviousChar = 2000;
    // Check if the input string is NULL
    if(size == 0)
    {
        return 0;
    }
    while( InputStr[index] != '\0' )
    {
        switch(InputStr[index])
        {
            case 'M':
                CurrentlyChar = 1000;
                break;
            case 'D':
                CurrentlyChar = 500;
                break;
            case 'C':
                CurrentlyChar = 100;
                break;
            case 'L':
                CurrentlyChar = 50;
                break;
            case 'X':
                CurrentlyChar = 10;
                break;
            case 'V':
                CurrentlyChar = 5;
                break;
            case 'I':
                CurrentlyChar = 1;
                break;
            default:
                return 0;
                break;
        }
        if( CurrentlyChar > PreviousChar )
        {
            Value = Value + CurrentlyChar - 2*PreviousChar;
        }
        else
        {
            Value = Value + CurrentlyChar;
        }
        PreviousChar = CurrentlyChar;
        index += 1;
    }
    return Value;
}

int main()
{
    char input_Roman_num[16];
    printf("Please input a Roman number between 1 to 3999 : \nInput : ");
    gets(input_Roman_num);
    int IntNum = romanToInt(input_Roman_num);
    printf("The Integer number convert from input Roman value is : %d\n",IntNum);
    system("PAUSE");
    return 0;
}
