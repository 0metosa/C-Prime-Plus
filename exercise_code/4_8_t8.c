#include <stdio.h>
#define GALLON_LITER 3.785
#define MILE_KM 1.609
int main(void)
{
    float miles, gallon, km, liter;

    printf("请输入旅行的英里数:");
    scanf("%f", &miles);
    printf("请输入消耗的汽油量(单位:加仑):");
    scanf("%f", &gallon);
    printf("消耗每加仑汽油行驶的英里数(英里/加仑):%.1f\n", miles / gallon);

    km = miles * MILE_KM / 100;
    liter = gallon * GALLON_LITER;

    printf("消耗每百公里消耗汽油量(升/100公里):%.1f", liter / km);

    return 0;
}