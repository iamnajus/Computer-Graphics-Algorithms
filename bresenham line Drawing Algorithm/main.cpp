#include<iostream>
#include<graphics.h>

using namespace std;
 

int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	int x0,y0,x1,y1,dx,dy,d2x,d2y,diff;
	cout << "Enter the two end points:";
	cin >> x0 >>y0>>x1>>y1;
	
	putpixel(x0,y0,10);
	dx = x1-x0;
	dy = y1-y0;
	diff =  2 *(dy-dx);
	
	int p;
	p = 2 *dy - dx;
	
	int i;
	for (i=0; i<dx ; ++i){
		if (p< 0 ) {
			x0++;
			putpixel(x0,y0,10);
			p+=2*dy;
			delay(100);
		} else {
			x0++;
			y0++;
			putpixel(x0,y0,10);
			p+=2*dy-2*dx;
			delay(100);
		}
	}
	closegraph();
}
