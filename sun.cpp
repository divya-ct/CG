#include<graphics.h>
#include <iostream>
using namespace std;
int main()
{
	
	int gd = DETECT, gm;
	initgraph(&gd, &gm,NULL);
	int midx,midy,r=10;     int midx,midy,r=50;
	midx=getmaxx()/2;        
	                        midy=310;
	while(r<=50)            while(r>=10)
	{
		cleardevice();
		setcolor(WHITE);
		line(0,310,160,150);
		line(160,150,320,310);
		line(320,310,480,150);
		line(480,150,640,310);
		line(0,310,640,310);
		                              setcolor(14);
		arc(midx,310,225,133,r);      arc(midx,midy,0,180,r);
		floodfill(midx,300,15);       floodfill(midx,midy+5,15);
		if(r>20)                      if(r<40)
		{
			setcolor(7);          setcolor(12);
			floodfill(2,2,15);
			setcolor(6);          setcolor(14);
			floodfill(150,250,15);
			floodfill(550,250,15);
			setcolor(2);
			floodfill(2,450,15);
		}

		delay(50);
		r+=2;                           r-=2;
	}
	getch();
	closegraph();
	return 0;
}
