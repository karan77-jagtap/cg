include<graphics.h>

using namespace std;
class WalkingMan{
    int rhx, rhy;
    public:
        void draw(int);
        void draw(int, int);
};

void WalkingMan::draw(int i){
    line(20,380,580,380); // platform
    
    if(i%2==0){
        line(250+i,380,250+i,340); //left leg
        line(254+i,380,254+i,340); //right leg
        line(248+i,380,235+i,370); //left hand
        line(258+i,380,275+i,370); //right hand
        delay(20);
    } else {
        line(255+i,380,255+i,340); //left leg
        line(248+i,380,235+i,370); //left hand
        line(258+i,380,275+i,370); //right hand
        delay(20);
    }
    
    line(250+i,340,250+i,280); //body
    circle(250+i,270,10); // head
    line(235+i,330,50+i,330); // hand
    line(50+i,330,50+i,280); // umbrella stick
    line(15+i,280,85+i,280); // umbrella right
    arc(50+i,280,180,360,35); // umbrella body
    arc(55+i,330,0,180,5); // umbrella handle
}

void WalkingMan::draw(int x, int y){
    int j;
    rhx = x;
    rhy = y;
    for(j=0; j<100; j++){
        outtextxy(rand()%rhx, rand()%(rhy-50), ":)");
    }
    setcolor(WHITE);
}

int main(){
    int gd=DETECT, gm;
    int rhx, rhy, j;
    WalkingMan obj;
    
    initgraph(&gd, &gm, "");
    for(int i=0; i<500; i+=5){
        obj.draw(i);
        rhx = getmaxx();
        rhy = getmaxy();
        obj.draw(rhx, rhy);
        delay(150);
        cleardevice();
    }
    getch();
    return 0;
}