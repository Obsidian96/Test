/*TITLE : Ko...korewa... BAOH da !
 AUTHOR :  OBSIDIAN
 WHAT IS THIS ?  : An advanced fraction calculator  */

#include <stdio.h>
#include <stdlib.h>
//void ecrire_fichier ()

void add()
{
	float result1, result2,result3, frac11, frac12, frac21, frac22; // result1 = nom result   result2 den result

	printf("\nNow, choose the fraction's terms !  ( float-enter*4 )\n");
	scanf("%f %f  %f %f", &frac11, &frac12, &frac21, &frac22);
		if(frac12==frac22)		/*si les denominateurs sont egaux*/
			{
				result2=frac12;		/*le denominateur de la somme est egal au denominateur de frac1*/
				result1=frac11+frac21;	/*le numerateur est egal a la somme des 2 autres numerateurs*/
				printf(" \n You wanted (%0.2f/%0.2f ) + (%0.2f/%0.2f)\n And the result is %0.2f/%0.2f \n Or in decimal %0.2f \n " , frac11, frac12, frac21, frac22, result1, result2, result3);
			}
		else				/*si les denominateurs ne sont pas egaux*/
			{
				result2=frac12*frac22;		/*le denominateur  est  egal au produit des 2 autres*/
				result1=(frac11*frac22)+(frac21*frac12); 	/*le numerateur est  egal à (frac1.num)(frac2.den)+(frac2.num)(frac1.den)*/
				result3=result1/result2;
				printf(" \n You wanted (%0.2f/%0.2f ) + (%0.2f/%0.2f)\n And the result is %0.2f/%0.2f \n Or in decimal %0.2f\n " , frac11, frac12, frac21, frac22, result1, result2,result3);
			}

}

void substract()
{
    float result, result1, result2, frac11, frac12, frac21, frac22;
        printf("\nNow, choose the fraction's terms !  ( float-enter*4 )\n");
        scanf("%f %f  %f %f", &frac11, &frac12, &frac21, &frac22);
        printf("%f %f  %f %f", frac11, frac12, frac21, frac22);
        result1 = frac11/frac12;
        result2 = frac21/frac22;
        result = result1 - result2;
        printf("Et hop : %f - %f = %f\n",result1, result2, result);
}
void divide()
{
    float result, result1, result2, frac11, frac12, frac21, frac22;
        printf("\nNow, choose the fraction's terms !  ( float-enter*4 )\n");
        scanf("%f %f  %f %f", &frac11, &frac12, &frac21, &frac22);
        printf("%f %f  %f %f", frac11, frac12, frac21, frac22);
        result1 = frac11/frac12;
        result2 = frac21/frac22;
        result = result1/result2;
        printf("Et hop : %f / %f = %f\n",result1, result2, result);
}
void product()
{
    float result, result1, result2, frac11, frac12, frac21, frac22;
        printf("\nNow, choose the fraction's terms !  ( float-enter*4 )\n");
        scanf("%f %f  %f %f", &frac11, &frac12, &frac21, &frac22);
        printf("%f %f  %f %f", frac11, frac12, frac21, frac22);
        result1 = frac11/frac12;
        result2 = frac21/frac22;
        result = result1 * result2;
        printf("Et hop : %f * %f = %f\n",result1, result2, result);
}
/// MAIN
int main(void)
{
   //List

   int operator;
   operator = 0;
    //Operator choice

    while (42)
   {

        printf(" \n                        OPERATOR SELECTION MENU  \n");
        printf("                        1. Addition        \n");
        printf("                        2. Substraction    \n");
        printf("                        3. Division        \n");
        printf("                        4. Product         \n");
        printf("                        5. Pow             \n");
        printf("                        6. Quit            \n");
        printf("\nSelection : ");
        scanf("\n%d", &operator);
    if(operator <= 6  ) // It include the six for a secret !
       switch(operator)
       {
        case 1:
        add();
      //save();
            break;
        case 2:
        substract();
        //save();
            break;
        case 3:
        divide();
        //save();
            break;
        case 4:
        product();
        //save();
            break;

        case 5:
        exit(1);
            break;
        case 6:
        printf("MADE BY STOMATE PRODUCTION\n");
            break;
       }
    else
        printf("1,2,3,4 or 5!!! It's easy to remember right !?\n"); // +1 for the loop

   }
    return 0;
}
