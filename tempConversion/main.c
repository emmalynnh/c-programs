#include <stdio.h>
#include <stdlib.h>

int main()
{
    int degree,Celsius,Fahrenheit;
    char temp;

    printf("Enter temprature degree type: ");
    scanf("%c", &temp);
    if (temp == 'F') {
        printf("Enter temprature digit: ");
        scanf("%d", &degree);
        Celsius = 5 * (degree-32) / 9;
        printf("%d degrees Celsius\n", Celsius);
    } else if ((temp == 'C')) {
        printf("Enter temprature digit: ");
        scanf("%d", &degree);
        Fahrenheit = (degree * 9 / 5) + 32;
        printf("%d degrees Fahrenheit\n", Fahrenheit);

    } else {
        printf("Please enter F or C\n");
    }

	return 0;
}
