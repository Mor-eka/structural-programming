#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    int pin;
    int correctpin=5569;
    int attempts =0;

    printf("enter your age:");
    scanf("%d", &age);
    if (age<18)
    {
        printf("access denied-minor");

       return 0;
}
 printf("age verified");



while (attempts<3)
{
printf("enter pin:");
scanf("%d", &pin);
if(pin<999||pin>9999)
{
    printf("invalid pin.Pin must be between 999 and 9999");
}
 else if(pin==correctpin)
 {
printf("access granted.Door unlocked");

    return 0;
}
else
{
    attempts++;
    printf("incorrect pin");
    printf("attempts remaining:%d,3-attempts");
    }
}
printf("too many incorrect attempts");
printf("system locked");
return 0;

}
