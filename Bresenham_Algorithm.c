#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
# define Round(a) ((int)a+0.5)
void lineBress(int x1,int y1,int x2,int y2)
{
	int dx=abs(x2-x1);
	int dy=abs(y2-y1);
	int steps,k,i,x,y,xend;
	int p=2*dy-dx;
	int two_dy=2*dy;
	int two_dydx=2*(dy-dx);
	
	if(x1>x2)
	{
		x=x2;
		y=y2;
		xend=x1;
	}
	else
	{
		x=x1;
		y=y1;
		xend=x2;
	}
	putpixel(x,y,WHITE);
	while(x<xend)
	{
		x++;
		if(p<0)
		p+=two_dy;
		else
		{
			y++;
			p+=two_dydx;
		}
		putpixel(x,y,WHITE);
	}	
}
int main()
{
 	int gd = DETECT, gm; 
 	initgraph (&gd, &gm, "C:\\TURBOC3\\BGI");    
 	lineBress(3,3,15,17);
 	getch();
 	return 0;
}
