#include<iostream>
#include<graphics.h>


int main()
{

int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\tc\\bgi");


for (int i=1;i<=300;++i){

/**Wheel For the Truck**/
	
	//Left Wheel
	circle(60+i,370,16); 
	circle(60+i,370,12); 
	line(52+i,362,68+i,378);
	line(52+i,378,68+i,362);
	line(49+i,370,71+i,370);
	line(60+i,359,60+i,381);
	
	//Right Wheel
	circle(230+i,370,16);
	circle(230+i,370,12);
	line(222+i,362,238+i,378);
	line(222+i,378,238+i,362);
	line(219+i,370,241+i,370);
	line(230+i,359,230+i,381);
	
	//Rim for the tires
	arc(60+i,370,0,180,20);
	arc(230+i,370,0,180,20);
	
	
/**Outer Body For The Truck**/
	
	//Bottom Part
	line(30+i,370,40+i,370);
	line(80+i,370,210+i,370);
	line(250+i,370,270+i,370);
	
	//Vertical Parts
	line(30+i,270,30+i,370);
	line(270+i,350,270+i,370);
	line(190+i,270,190+i,370);
	line(200+i,290,200+i,370);
	line(240+i,290,260+i,328);  
	
	//Top Part 
	line(30+i,270,190+i,270);
	line(190+i,310,200+i,310);
	line(200+i,290,240+i,290);
	
	//Arc for Front
	arc(240+i,350,0,50,30);
	
/**Window for Truck**/
	//Main window Background
	line(210+i,295,236+i,295);
	line(210+i,295,210+i,345);
	line(210+i,345,235+i,345);
	line(235+i,345,250+i,328);
	line(236+i,295,250+i,328);
	
	//Windows Interior
	line(210+i,328,250+i,328);
	line(215+i,335,220+i,335);
	
/* Interior design inside the truck */
	line(30+i,343,190+i,343);
	line(30+i,347,190+i,347);
	outtextxy(50+i,300,"SUJAN PICKUP");

/**Stop Sign For the truck**/
	
	//Pole for the sign
	line(576,300,576,390);
	line(574,300,574,390);
	//Sign Post
	circle(575,270,30);
	circle(575,270,27);
	outtextxy(560,260,"STOP");

/**Road for the Truck**/
	line(0,390,578,390);
	line(0,392,576,392); 
	line(578,390,550,465);
	line(576,392,548,465);

delay(10);
if (i < 300) {
cleardevice(); }
}
/** Hold the graph till i press any key **/
while(!kbhit()) {delay(1000);} 

return 0;
}

