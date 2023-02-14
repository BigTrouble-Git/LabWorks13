#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>


#define z 2
#define SQR(x) (x)*(x) 

#define ABS(x) ((x)>(0))?(x):(-x)
#define MIN(x,y) ((x)>(y))?(y):(x) // макрос як умовний вираз
#define MAX(x,y) ((x)>(y))?(x):(y) // макрос як умовний вираз
// виведення повідомлення та значення цілого числа
#define PRINTI(w) puts("control output"); \
printf(#w"=%d\n",w)

#define PRINTR(w) puts ("rezult :"); \
printf (#w"=%f\n",(float)w)
void main()
{
	puts("Lab 13.2. Using macros and preprocessing directive");
	int x, y, 
		sqrx_y, 
		absy_x, 
		y_kvad,
		x_kvad,
		x_plus_ykvad,
		x_plus_sqry,
		z_plus_sqrx,
		maxim,
		minim; 
	char ch; 
	
	
	do
	{
#if z == 1  
		puts("define maximum of two numbers");
		puts("Input 2 integer numbers");
		scanf_s("%d", &x);
		PRINTI(x); 
		scanf_s("%d", &y);
		PRINTI(y);

		sqrx_y = SQR(x - y);
		PRINTI(sqrx_y);
		
		absy_x = ABS(y-x);
		PRINTI(absy_x);
		
		minim = MIN(sqrx_y, absy_x);
		PRINTR(minim);
#else 
		{
			puts("define maximum of two numbers");
			puts("Input 2 integer numbers");
			scanf_s("%d", &x);
			PRINTI(x); 
			scanf_s("%d", &y);
			PRINTI(y);
			y_kvad = SQR(y);
			x_kvad = SQR(x);

			x_plus_ykvad = x + y_kvad; 
			PRINTR(x_plus_ykvad);

			z_plus_sqrx = z + x_kvad;
			PRINTR(z_plus_sqrx);

			maxim = MAX(x_plus_ykvad, z_plus_sqrx);
			PRINTR(maxim);
		}
#endif 
		puts("Repeat? y /n "); ch = _getch();
	} while (ch == 'y');
}