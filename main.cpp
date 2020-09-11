#include<graphics.h>
#include<stdio.h>
void heart(void);
void girl(void);
void boy(void);
void flower(void);
void BaseBox(void);
void text(void);
void pixel(void);
main()
{
  initwindow(700,320,"windows BGI",200,300);
  BaseBox();
  heart();
  girl();
  boy();
  flower();
  text();
  getch();
  pixel();
  setcolor(4);
  outtextxy(200,100,"I");
  outtextxy(300,150,"LOVE");
  outtextxy(450,200,"YOU");
  getch();
  closegraph();
}
void girl()
{
    setcolor(15);
    circle(370,120,8);//g neck
    line(370,128,370,180);//g body
    line(370,180,360,220);//g left leg
    line(370,180,380,220);//g  right leg
    line(370,140,345,155);//g right hand
}
void boy()
{
    setcolor(15);
    circle(305,150,8);//m neck
    line(305,158,305,190);//m body
    line(305,190,325,205);//m right leg upper
    line(325,205,325,220);//m right leg down
    line(305,190,315,210);//m left leg upper
    line(315,210,305,220);//m left leg down
    line(305,178,340,165);//m  left hand
}
void flower()
{
    setcolor(4);
    circle(340,155,3);//f
    circle(340,155,4);//f
    circle(340,155,5);//f
    setcolor(2);
    line(340,159,340,170);//f  leg
     line(341,159,341,170);
}
void heart()
{
   setcolor(4);
   ellipse(300,150,45,160,50,100);//d left
   ellipse(370,150,20,135,50,100);//d right
   line(253,113,270,220);//d left
   line(252,113,269,220);//d left
   line(415,113,400,220);//d right
   line(416,113,401,220);//d right
}

void BaseBox()
{   int i;
    setcolor(1);
    for(i=0;i<=30;i++)
    rectangle(220,220+i,445,280-i);//b box
    setcolor(4);
    rectangle(2,280,698,297);
     for(i=0;i<8;i++)
     {rectangle(3,281+i,150,296-i);
      rectangle(510,281+i,698,296-i);
     }
}
void text()
{   setcolor(2);
    outtextxy(230,230,"HAPPY");
    outtextxy(300,245,"PURPOSE");
    outtextxy(400,260,"DAY");
    outtextxy(150,281," PRESS  ENTER  AND  PLEASE  WAIT  FEW  SECONDS");
}
void pixel()
{ int i,j;
     for(i=0;i<=700;i++)
    {for(j=1;j<=300;j++)
      putpixel(i,j,0);
    }
}




