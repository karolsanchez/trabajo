

//ejercicio 10 switch
#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>
#include <math.h>
//#include <iostream.h>


            int main() {
            int opciones=9;

while(opciones!=0){


                 printf("                       ******************************************\n");
                 printf("                       *         Universidad Uniregmiton- 2019  *\n");
                 printf("                       *            Faculta De Ingenieria       *\n");
                 printf("                       *             Karol Sanchez Vanegas      *\n");
                 printf("                       ******************************************\n\n\n\n");

                 printf("                                        Menú Principal\n\n");
                 printf("1.  Calcula el área del cuadrado dado uno de sus lados.\n");
                 printf("2.  Calcula el área del circulo dado su radio.\n");
                 printf("3.  Calcula la edad de una persona ingresando la fecha de nacimiento.\n");
                 printf("4.  Muestra los dias de la semana ingresando un número .\n");
                 printf("5.  Calcula la cuota mensual de un préstamo.\n");
                 printf("6.  Calcula el alquiler de sillas.\n");
                 printf("7.  Calcula la nomina de una empresa.\n");
          	 printf("8.  Muestra si es primo o no.\n");
                 printf("9.  Muestra si es par o impar.\n");
		 printf("10. Muestra el día de la semana correspondiente.\n");
                 printf("11. Muestra el nombre del mes correspondiente.\n");
		 printf("12. Muestra de menor a mayor.\n");
		 printf("13. MUestra de mayor a menor.\n");
	         printf("14. Pide un número y muestra si es positivo o negativo.\n");
		 printf("15. Calcula el aumento en dolares de un trabajador.\n");
		 printf("16. Calcula el impuesto de un producto.\n");
		 printf("17. Muestra los números de forma ascendente.\n");
		 printf("18. Muestra los números de forma descendente.\n");
                 printf("19. Muestra los números la sumatoria de ellos.\n");
         	 printf("20. Muestra suma de los números impares.\n");
		 printf("21. Muestra suma de asteriscos.\n");
 		 printf("22. Muestra tabla de multiplicar.\n");
		 printf("23. Muestra promedio de calificaciones.\n\n");
		 printf("Digite una opción del menú principal : ");
                 scanf("%i", &opciones);








switch (opciones){

	case 1:
         do{
            double areaCuadrado, lado;

                 printf("Ingrese el lado del cuadrado : ");
                 scanf("%lf", &lado);

                  areaCuadrado = lado * lado;

                 printf("El area del cuadro es : %lf\n", areaCuadrado);
                 printf("Desea continuar ingrese (9),regrese al menú principal con (8) para salir (0) : ");
                 scanf("%i", &opciones);

         }while(opciones==9);
                 break;



       case 2:
         do{
            float areaCir, radio;

                 printf("Ingrese el radio del circulo : " );
                 scanf("%f", &radio);

                 areaCir = M_PI * pow(radio, 2);

                 printf("El area del circulo es : %f\n", areaCir);
		printf("Desea continuar ingrese (9),regrese al menú principal con (8) para salir (0) : ");
		scanf("%i", &opciones);

         }while(opciones==9);
                 break;



       case 3:
         do{
            int edad, anio;

                 printf("Ingrese su anio de nacimiento : \n ");
                 scanf("%i", &anio);

                 edad=2019-anio;

                 printf("Su edad es : %i\n", edad);
                 printf("Desea continuar ingrese (9),regrese al menú principal con (8) para salir (0) : ");
                 scanf("%i", &opciones);
         }while(opciones==9);
                 break;



       case 4:
         do{
            const char* dias[] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
            int  idia;

                 printf("Ingrese un número del 1 al 7 :  ");
                 scanf("%i", &idia);
                 printf("El dia de la semana es : %s\n", dias[idia-1]);
                 printf("Desea continuar ingrese (9),regrese al menú principal con (8) para salir (0) : ");
		scanf("%i", &opciones);
         }while(opciones==9);
                 break;




       case 5:
         do{
            double c_m_prestamo, valor_prestamo, intereses;
            int n_cuotas_prestamo;


                 printf("Ingrese el valor del prestamo : ");
                 scanf("%lf", &valor_prestamo);
                 printf("Ingrese el numero de cuotas : ");
                 scanf("%i", &n_cuotas_prestamo);
                 printf("Ingrese el valor de intereses : ");
                 scanf("%lf", &intereses);

                 c_m_prestamo=(valor_prestamo/n_cuotas_prestamo)+intereses;

                 printf("La cuota mensual a pagar es : %0.2lf\n", c_m_prestamo);
                 printf("Desea continuar ingrese (9),regrese al menú principal con (8) para salir (0) : ");
                 scanf("%i", &opciones);
         }while(opciones==9);
                 break;



       case 6:
         do{
            int sillas, precioSilla, sin_iva;
            float costoTotal, iva;

                 precioSilla=290;

		 printf("\n");
	         printf("                   Alquiler de sillas Don Amir\n      ");
	         printf("\nIngrese la cantidad de sillas a alquilar : ");
	         scanf("%i",&sillas);

	         sin_iva=sillas*precioSilla;
	         iva=sin_iva*0.19;
	         costoTotal=sin_iva+iva;

	         printf("Cantidad de sillas es : %i\n",sillas);
	         printf("Precio por silla es   : $ %i\n",precioSilla);
	         printf("Valor total de las sillas sin iva : $ %i\n ",sin_iva);
       	         printf("Valor total del 19 porciento del iva es : $ %0.2f\n",iva);
	         printf("Valor total sillas con el iva es  : $  %0.2f\n",costoTotal);
                 printf("Desea continuar ingrese (9),regrese al menú principal con (8) para salir(0) : ");
                 scanf("%i", &opciones);
         }while(opciones==9);
                 break;

case 7:
         do{

            double salarioNeto,precioHdiurna,precioHnocturna,totalHorasEx,valorhorahabitual,salarioMensual,prestamos;
	    int exdiurna,exnocturna;
            char nombre[20];

                 printf("Ingrese el nombre del empleado : ");
                 scanf("%s", &nombre);
                 printf("Ingrese el salario mensual del empleado : ");
                 scanf("%lf",&salarioMensual);
                 printf("Ingrese las horas extras diurnas : ");
                 scanf("%i",&exdiurna);
                 printf("Ingrese las horas extras nocturnas : ");
                 scanf("%i",&exnocturna);
                 printf("Ingrese el valor de Prestamos : ");
                 scanf("%lf",&prestamos);

                 valorhorahabitual=(salarioMensual*1)/205;
                 precioHdiurna=(valorhorahabitual+(valorhorahabitual*0.2))*exdiurna;
                 precioHnocturna=(valorhorahabitual+(valorhorahabitual*0.4))*exnocturna;
                 totalHorasEx=precioHdiurna+precioHnocturna;
                 salarioNeto=salarioMensual+totalHorasEx-prestamos;

                 printf("\nSalario mensual de %s es : %0.2lf",nombre,salarioMensual);
       	         printf("\nHoras extras trabajadas diurna es : %i",exdiurna);
	         printf("\nHoras extras trabajadas nocturna es : %i",exnocturna);
	         printf("\nValor de prestamos es : %0.2lf",prestamos);
                 printf("\nValor por hora habitual es : %0.2lf",valorhorahabitual);
	         printf("\nValor de las horas extras diurnas es : %0.2lf",precioHdiurna);
                 printf("\nValor de las horas extras nocturnas es : %0.2lf",precioHnocturna);
                 printf("\nValor total a pagar de todas las horas extras es: %0.2lf",totalHorasEx);
                 printf("\nSalario Neto de %s es : %0.2lf\n",nombre,salarioNeto);
                 printf("Desea continuar ingrese (9),regrese al menú principal(8) para salir (0) : ");
                 scanf("%i", &opciones);
         }while(opciones==9);
                 break;

case 8:
do{

int numero;

   printf("Ingrese un número del 1 al 5 : ");
   scanf("%i", &numero);

   if(numero >= 1 && numero <= 5) {
     if(numero == 4){
     printf("El %i no es un número primo.\n ",numero);
     }
     else {
     printf("El %i es un número primo,\n ",numero); }
   }
   else{
   printf("Error,ingrese número valido : "); }

       printf("Desea continuar ingrese (9),regrese al menú principal con (8) para salir (0) : ");
       scanf("%i", &opciones);
}while(opciones==9);
break;

case 9:
do{

  int numero;

   printf("Ingrese un numero : ");
   scanf("%i", &numero);

   if(numero %2 == 0) {
   printf("El numero %i es par\n",numero); }
  else { 
   printf("El numero %i es impar\n",numero);
   }
printf("Desea continuar ingrese (9),regrese al menú principal con (8) para salir (0) :  ");
scanf("%i", &opciones);
}while(opciones==9);
break;

case 10:
do{

int numero;

   printf("Digite un número del 1 al 7 : ");
   scanf("%i",&numero);

   if(numero ==1){
   printf("El dia es Lunes\n"); }
   else  if(numero ==2) {
   printf("El dia es  Martes\n"); }
   else if(numero ==3) {
   printf("El dia es Miercoles\n"); }
   else if(numero ==4) {
   printf("El dia es Jueves\n"); }
   else if(numero ==5) {
   printf("El dia es Viernes\n"); }
   else if(numero ==6) {
   printf("El dia es Sabado\n"); }
   else if(numero ==7) {
   printf("El dia es Domingo\n"); }
   else {
   printf("Ingrese un número valido\n "); }

 printf("Desea continuar ingrese (9),regresa al menú principal con (8) para salir (0) : ");
scanf("%i", &opciones);
}while(opciones==9);
break;

case 11:
do{
 int numero;

   printf("Digite un número del 1 al 12 : ");
   scanf("%i", &numero);

   if(numero ==1) {
   printf("Enero\n"); }
   else if(numero ==2) {
   printf("Febrero\n");}
   else if(numero ==3) {
   printf("Marzo\n"); }
   else if(numero ==4) {
   printf("Abril\n"); }
   else if(numero ==5) {
   printf("Mayo\n"); }
   else if(numero ==6) {
   printf("Junio\n"); }
   else if(numero ==7) {
   printf("Julio\n"); }
   else if(numero ==8) {
   printf("Agosto\n"); }
   else if(numero ==9) {
   printf("Septiembre\n"); }
   else if(numero ==10) {
   printf("Octubte\n"); }
   else if(numero ==11) {
   printf("Noviembre\n"); }
   else if(numero ==12) {
   printf("Diciembre\n"); }
   else {
   printf("No es un número valido\n"); }

printf("Desea continuar ingrese (9),regresa al menú principal con (8) para salir (0) : ");
scanf("%i", &opciones);
}while(opciones==9);
break;

case 12:
do{
int numero1, numero2, numero3;

   printf("Digite el primer número  : ");
   scanf("%i", &numero1);
   printf("Digite el segundo número : ");
   scanf("%i", &numero2);
   printf("Digite el terce número   : ");
   scanf("%i", &numero3);

if(numero1 < numero2 ){

      if  (numero3 < numero1 ) {
         printf("Los números de menor a mayor son : %i,%i,%i\n",numero3,numero1,numero2); }
      else if (numero3 > numero2){
         printf("Los números de menor a mayor son : %i,%i,%i\n",numero1,numero2,numero3 ); }
      else {
         printf("Los números de menor a mayor son : %i,%i,%i\n",numero1,numero3,numero2); }
}
else {

        if  (numero3 < numero2 ) {
          printf("Los números de menor a mayor son : %i,%i,%i\n",numero3,numero2,numero1); }
       else if (numero3 > numero1){
         printf("Los números de menor a mayor son : %i,%i,%i\n",numero2,numero1,numero3 ); }
       else {
         printf("Los números de menor a mayor son : %i,%i,%i\n",numero2,numero3,numero1); }
     }
printf("Desea continuar ingrese (9),regresa al menú principal con (8) para salir (0) : ");
scanf("%i", &opciones);
}while(opciones==9);
break;

case 13:
do{
 int num1,num2,num3;

    printf("Ingrese el primer número  : ");
    scanf("%d",&num1);
    printf("Ingrese el segundo número : ");
    scanf("%d",&num2);
    printf("Ingrese el tercer números : ");
    scanf("%d",&num3);

    if((num1>num2) && (num1>num3)) {

	if(num2>num3){
        printf("\n%d\n",num1);
        printf("%d\n",num2);
        printf("%d\n",num3); }
       else if(num3>num2){
        printf("\n%d\n",num1);
        printf("%d\n",num3);
        printf("%d\n",num2); }
       else{
        printf("\n%d\n",num1);
        printf("%d-",num3);
        printf("%d\n",num2); }
    }
    else if(num2>num1 && num2>num3) {

       if (num1>num3){
        printf("\n%d\n",num2);
        printf("%d\n",num1);
        printf("%d\n",num3); }
       else if(num3>num1){
        printf("\n%d\n",num2);
        printf("%d\n",num3);
        printf("%d\n",num1); }
       else{
        printf("\n%d\n",num2);
        printf("%d-",num3);
        printf("%d\n",num1); }
    }
    else if(num3>num1 && num3>num2) {

       if(num1>num2){
        printf("\n%d\n",num3);
        printf("%d\n",num1);
        printf("%d\n",num2); }
       else if(num2>num1){
        printf("\n%d\n",num3);
        printf("%d\n",num2);
        printf("%d\n",num1); }
       else{
        printf("\n%d\n",num3);
        printf("%d-",num2);
        printf("%d\n",num1); }
    }
    else{
        printf("\n%d-",num1);
        printf("%d-",num2);
        printf("%d",num3); }
printf("Desea continuar ingrese (9),regresa al menú principal con (8) para salir (0) : ");
scanf("%i", &opciones);
}while(opciones==9);
break;

case 14:
do{
int numero;

   printf("Digite un número : ");
   scanf("%i",&numero);

   if(numero > 0){
   printf("El número es positivo\n "); }
   else if(numero <0){
   printf("El número es negativo\n"); }
   else{
   printf("El número es 0\n"); }

printf("Desea continuar ingrese (9),regresa al menú principal con (8) para salir (0) : ");
scanf("%i", &opciones);
}while(opciones==9);
break;

case 15:
do{
double salarioAnual,aumento;
        int antiguedad,importe;
        importe=40000;

        printf("Ingese los anios de antiguedad en la empresa : ");
        scanf("%i",&antiguedad);

        if(antiguedad>=10){
                aumento=importe*0.10;
                salarioAnual=importe+aumento; }
        else if(antiguedad>=5){
                aumento=importe*0.07;
                salarioAnual=importe+aumento; }
        else if(antiguedad>=3){
            aumento=importe*0.05;
                salarioAnual=importe+aumento; }
        else{
                aumento=importe*0.03;
                salarioAnual=importe+aumento; }

        printf("Tiempo de antiguedad del empleado en la empresa es : %i\n",antiguedad);
        printf("Valor del aumento en euros es : %0.2lf\n",aumento);
        printf("Salario anual en euros  es: %0.2lf\n",salarioAnual);

printf("Desea continuar ingrese (9),regresa al menú principal con (8) para salir (0) : ");
scanf("%i", &opciones);
}while(opciones==9);
break;

case 16:
do {

   float importeB, importeN, impuesto;

   printf("Digite el valor bruto : ");
   scanf("%f", &importeB);

   if (importeB > 15000.0) {
      impuesto = importeB * 0.16;
   } else {
      impuesto = importeB * 0.10;
   }

   importeN = importeB + impuesto;

   printf("el impoerte neto es %0.2f\n", importeN);
printf("Desea continuar ingrese (9),regresa al menú principal con (8) para salir (0) : ");
scanf("%i", &opciones);


} while( opciones==9);
break;

case 17:
do {
       int i;

            for(i=1; i<=100; i++)
            {
               printf("El valor es : %i\n",i);
            }

printf("Desea continuar ingrese (9),regresa al menú principal con (8) para salir (0) : ");
scanf("%i", &opciones);

}while (opciones==9);
break;

case 18:
do {
      	 int i;

            for(i=100; i>=1; i--)
            {
               printf("El valor es : %i\n",i);
            }


printf("Desea continuar ingrese (9),regresa al menú principal con (8) para salir (0) : ");
scanf("%i", &opciones);

}while (opciones==9);
break;

case 19:
do {
         int i, suma=0;

              for(i=1; i<=100; i++)
              {
                   suma=i + suma;

                   printf("Los números del 1 al 100 : %i\n", i);
             }
                    printf("La suma de los números del 1 al 100 : %i\n", suma);


printf("Desea continuar ingrese (9),regresa al menú principal con (8) para salir (0) : ");
scanf("%i", &opciones);

}while (opciones==9);
break;


case 20:
do {
                   int i;
                   int suma=0,cantidad=0;

              for(i=1; i<=100; i+=2)
              {

                   suma=i+suma;
                   cantidad=100/2;
              }

                   printf("La suma de los número impares del 1 al 100 es : %i\n", suma);
                   printf("La cantidad de número impares del 1 al 100 es : %i\n" ,cantidad);

printf("Desea continuar ingrese (9),regresa al menú principal con (8) para salir (0) : ");
scanf("%i", &opciones);

}while (opciones==9);
break;

case 21:
do {
          int i, numero;

                     printf("Ingrese un número: ");
                     scanf("%i", &numero);

            for(i=0; i!=numero; i++)
            {
                     printf("*\n",numero);
            }
printf("Desea continuar ingrese (9),regresa al menú principal con (8) para salir (0) : ");
scanf("%i", &opciones);

}while (opciones==9);
break;

case 22:
do {
      int i,numero;

	printf("Ingrese un número para ver la tabla de multiplicar : ");
	scanf("%i",&numero);

	printf("\n");
	for(i=1;i<=10;i++){
		printf("%ix%i=%i\n",numero,i,numero*i);
	}

printf("Desea continuar ingrese (9),regresa al menú principal con (8) para salir (0) : ");
scanf("%i", &opciones);

}while (opciones==9);
break;

case 23:
do {

  int i,cantidad;
  float suma=0,promedio=0,nota;

printf("Digite la cantidad de calificaciones : ");
scanf("%i",&cantidad);

for(i=1;i<=cantidad;i++){

	printf("Ingrese la nota %i : ",i);
	scanf("%f",&nota);
	suma+=nota;
}

        promedio=suma/cantidad;

printf("La suma de las notas es: %0.2f\n",suma);
printf("El promedio Final de las notas es: %0.2f\n",promedio);



printf("Desea continuar ingrese (9),regresa al menú principal con (8) para salir (0) : ");
scanf("%i", &opciones);

}while (opciones==9);
break;



}

}
}





