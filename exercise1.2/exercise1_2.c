#include <stdio.h>
#include <math.h>

int isprime(int val);

int main()
{  
    int val;
    double val_sqrt;

    printf("Bir cift sayi giriniz:");
    scanf("%d", &val);

    for (int i = 2; i < val / 2; ++i)
        if (isprime(i) && isprime(val - i)) {
            printf("%d + %d\n", i, val - i);
            break;
        }

    return 0;
}

int isprime(int val)
{
    double val_sqrt;

    if (val % 2 == 0)
        return val == 2;

    val_sqrt = sqrt(val);

    for (int i = 3; i <= val_sqrt; i += 2)
        if (val % i == 0)
            return 0;

    return 1;
}

//Eğer bütün sayılar bulunmak isteniyorsa break ile döngüden çıkmamak gerekir. 

#include <stdio.h>
#include <math.h>

int isprime(int val);

int main()
{  
    int val;
    double val_sqrt;

    printf("Bir cift sayi giriniz:");
    scanf("%d", &val);

    for (int i = 2; i < val; ++i)
        if (isprime(i) && isprime(val - i)) 
            printf("%d + %d\n", i, val - i);

    return 0;
}

int isprime(int val)
{
    double val_sqrt;

    if (val % 2 == 0)
        return val == 2;

    val_sqrt = sqrt(val);

    for (int i = 3; i <= val_sqrt; i += 2)
        if (val % i == 0)
            return 0;

    return 1;
}
