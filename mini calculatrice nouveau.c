# include<stdio.h>
int main()
{char op;int impos=0;
double x,y,res;
// CHOIX DE L'operation
printf("opperation (+,-,*,/):");
scanf("%c",&op);
// CHOIX DU NOMBRE
printf("\n entrer le premiere nombre\n");
scanf("%lf",&x);
printf("\n entrer le deuxieme nombre\n");
scanf("%lf",&y);
switch(op)
{case'+':res=x+y;break;
case'-':res=x-y;break;
case'*':res=x*y;break;
case'/':if(y!=0) res=x/y;
else{ printf("\n divission par zero imposible\n");
 impos=1; }break;
 default:impos=1;
 printf("\n choix inconnu\n");break;
}
if (impos==0)
printf("resultat:%lf",res);
return 0;
}




