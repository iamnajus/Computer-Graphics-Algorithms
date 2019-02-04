#include <iostream>
#include<graphics.h>
using namespace std;

void plot(int xc,int yc,int x,int y );

int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	
	int rad,xc,yc,x,y;
	
	cout << "Enter the radius\n";
	cin >>rad;
	
	cout<<"\nEnter the center points:\n";
	cin>>xc>>yc;
	
	//Get the first point
	x = 0;
	y = rad;
	
	//Get the decision parameter
	int p;
	p = (5/4)- rad;
	
	/* PLot first set of points */
	plot(xc, yc, x,y) ;
	
	while(x <y) {
		x++;
		if (p<0){
			p += 2*x+1;
		}else {
			y--;
			p+=2*(x-y)+1;
		}
		plot(xc,yc,x,y);
	}
	
	while(!kbhit()){delay(100);	}
	closegraph();
}

void plot(int xc,int yc,int x, int y){
	putpixel(xc+x,yc+y,10);
	putpixel(xc-x,yc+y,10);
	putpixel(xc+x,yc-y,10);
	putpixel(xc-x,yc-y,10);
	putpixel(xc+y,yc+x,10);
	putpixel(xc-y,yc+x,10);
	putpixel(xc+y,yc-x,10);
	putpixel(xc-y,yc-x,10);
	}
