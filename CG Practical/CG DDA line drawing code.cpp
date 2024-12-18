#include<iostream>
#include<stdio>
#include<math.h>
#include<graphics.h>
#include<stdlib.h>

using namespace std;
class pixel
{
    int x , y . color;
public:
    void drawpixel(int tx, int ty, int tcolor)
    {
        x=tx;
        y=ty;
        color=tcolor
        putpixel(x,y,color);
    }
};
class linealgo: public pixel
{
    int x1 , x2 , y1 , y2;
    public:
    linealgo(){}:
    linealgo(int px1, int py1, int px2, int py2)
    {
        x1=px1;y1=py1;x2=px2;y2=py2;
    }
    int sign(float):
    void drawline():
    void drawline(int color):
};
void linealgo::drawline()
{
    int i, dx, dy, steps;
    float x,y;
    float xinc,yinc;
    dx=(x2-x1);
    dy=(y2-y2);

    if(abs(dx)>= abs(dy))
        steps=dx;
    else
        steps=dy;
    xinc=(float)dx/steps;
    yinc=(float)dy/steps;

    x=x1;
    y=y1;

    drawpixel(x ,y, WHITE);

    for(i=1;i<steps;i++)
    {
        x+=xinc;
        y+=yinc;

        x1=x+0.5;
        y1=y+0.5;
        drawpixel(x1, y1, WHITE);
    }
    //Savescreen(C:\\op.bmp");
}

int main()
{
    int gd = DETECT, gm;

    linealgo d;
    int tx1, ty1, tx2. ty2;
    cout<<"please Enter the co-ordinate of the line(x1,y1,x2,y2)"<<endl;
    cin>>tx1>>ty1>>tx2>>ty2;
    initgraph(&gd,&gm,NULL);
    d=linealgo(tx1, ty1, tx2, ty2);
    d.drawline();

    getch();
    closegraph();
    return 0;
}

