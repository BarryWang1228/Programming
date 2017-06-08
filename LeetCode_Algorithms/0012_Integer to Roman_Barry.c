#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* intToRoman(int num)
{
    int Input = num, remainder = 0, i, index[4] = {0};
    char ten0[20][4] = {"","","","I","","II","","III","","IV","","V","","VI","","VII","","VIII","","IX"};
    char ten1[20][4] = {"","","","X","","XX","","XXX","","XL","","L","","LX","","LXX","","LXXX","","XC"};
    char ten2[20][4] = {"","","","C","","CC","","CCC","","CD","","D","","DC","","DCC","","DCCC","","CM"};
    char ten3[8][4] = {"","","","M","","MM","","MMM"};
    char* ten0to3;
    ten0to3 = malloc(16 * sizeof(char));
    ten0to3[0] = '\0';
    if(Input <= 0)
    {
        return ten0to3;
    }
    else if(Input >= 4000)
    {
        return ten0to3;
    }	
    else
    {
        for(i=0;i<4;i++)
        {
            remainder = Input % 10;
            Input = Input / 10;
            index[i] = 2 * remainder + 1 ;
        }
    }
    strcat(ten0to3,ten3[index[3]]);
    strcat(ten0to3,ten2[index[2]]);
    strcat(ten0to3,ten1[index[1]]);
    strcat(ten0to3,ten0[index[0]]);
    return ten0to3;
}

int main()
{
    int input_num;
	printf("Please input a integer number between 1 to 3999 : \nInput : ");
    scanf("%d", &input_num);
    char* RomanNum = intToRoman(input_num);
    printf("The Roman number convert from input value is : %s\n",RomanNum);
    
	system("PAUSE");
    free(RomanNum);
    return 0;
}
