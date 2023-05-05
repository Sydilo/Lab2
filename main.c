#include <stdio.h>

int main() {
    double amount, euro_rate = 40.05, dollar_rate = 37.05;
    printf("Введіть суму грошей в гривнях: ");
    scanf("%lf", &amount);

    double euro_amount = amount / euro_rate;
    double dollar_amount = amount / dollar_rate;

    printf("%.2f грн = %.2f євро\n", amount, euro_amount);
    printf("%.2f грн = %.2f доларів\n", amount, dollar_amount);

    return 0;
}

