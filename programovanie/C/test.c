#include<stdio.h>
#include<math.h>

void operation(int a, int b, char op);

int main()
{
    char op;
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d %c %d", &a ,&op, &b);
    operation(a, b, op);
    return 0;
}

void operation(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        printf("%d + %d = %d\n", a, b, a+b);
        break;
    case '-':
        printf("%d - %d = %d\n", a, b, a-b);
        break;
    case '*': 
        printf("%d * %d = %d\n", a, b, a*b);
        break;
    case '/':
        if (b == 0)
        {
            printf("Cannot divide by zero\n");
            break;
        }
        printf("%d / %d = %.2f\n", a, b, (float)a/b);
        break;
    case '%':
        printf("%d %% %d = %d\n", a, b, a%b);
        break;
    case '^':
        printf("%d ^ %d = %.0f\n", a, b, pow((float)a,(float)b));
        break;
    default:
        printf("Wrong operators :D \n");
        break;
    }
}