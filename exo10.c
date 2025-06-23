#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a = 0;
    int b = 0;
    int s;
    char ops[] = "-+*\\%%q";
    char expression[50];
    char op;
    while (1)
    {
        a = 0;
        b = 0;
        printf("Entrer une operation:  (+,-,*,\\,%%) and q to go out: \n");
        scanf("%s", &expression);
        int i = 0;
        while (expression[i] != '\0')
        {
            for (int j = 0; j < 6; j++)
            {
                if (expression[i] == ops[j])
                {
                    op = expression[i];
                    s = i;
                }
            }
            i++;
        }
        for (int j = 0; j < s; j++)
        {
            a = a * 10 + (expression[j] - '0');   
        }
        for (int j = s+1; j < i; j++)
        {
            b = b * 10 + (expression[j] - '0');
        }
        if (op == '+')
        {
            s = a + b;
        }
        else if (op == '-')
        {
            s = a - b;
        }
        else if (op == '*')
        {
            s = a * b;
        }
        else if (op == '\\')
        {
            s = a / b;
        }
        else if (op == '%')
        {
            s = a % b;
        }else if (op == 'q')
        {
            break;
        }
        system("cls");
        printf("le resultat de %d %c %d est le suivant: %d\n", a, op, b, s);
    }
    return 0;
}
