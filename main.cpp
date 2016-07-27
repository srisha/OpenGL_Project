#include <stdio.h>
#include <math.h>
#include <glut.h>
void Mountain();
void City();
void Airport();
void Airport1();
void Sea();
void Final();
void sun(GLfloat x,GLfloat Y);
GLfloat YY1=860;
GLfloat x1=500;
int count1=0;
GLfloat a = 1.001;
GLfloat carX=.1;
GLfloat x=50,y=150,nl=0;
GLfloat gfPosSX = 250.0;
GLfloat gfPosSY = 600.0;
GLfloat gfPosX = 830.0;
GLfloat gfPosY = 309.0;
GLfloat gfPosX1 =800.0;
GLfloat gfPosY1 =340.0;
GLfloat gfPosX2 =0.0;
GLfloat gfPosY2 = 5.0;
GLfloat gfDeltaX = 4.0;
GLfloat gfDeltaY = 0.0;
GLfloat sx=900,sy=400,lx=1000,ly=250;
int count=0,scount=0;
float radius=5,radiusC=3;
GLfloat gfDeltaX1 = 4.0;
GLfloat gfDeltaY1 = 0.0;
void Timer(int i)
{
  glutPostRedisplay();
    glutTimerFunc(30, Timer, 0);
}
void Plane() {
	  float angle;
	  float x2,y2;

	if(count1==0)
		{
			
	if(gfPosX<30)
		gfPosX=-1000;
	}
			glBegin(GL_POLYGON);
	glColor3f(0,0,0);
for (angle=1.0f;angle<360.0f;angle+=0.2)
{
    x2 =gfPosX +sin(angle)*radius;
     y2 = gfPosY+cos(angle)*radius;
    glVertex2f(x2,y2);
}
glEnd();
	
if(gfPosX1==500)
{
	 gfDeltaY = 1.0;
     gfDeltaY1 = 1.0;

}
	  glBegin(GL_POLYGON);
	 glColor3f(10.9,10.9,10.9);
	glVertex2f(gfPosX1,gfPosY1);//1

	glVertex2f(gfPosX1+20,gfPosY1+10);//2

	//3
	glVertex2f(gfPosX1+35,gfPosY1+22);
	//4
	glVertex2f(gfPosX1+55,gfPosY1+20);
	 //5
	glVertex2f(gfPosX1+95,gfPosY1+12);
	//6
	glVertex2f(gfPosX1+125,gfPosY1);
	//7
	glVertex2f(gfPosX1+105,gfPosY1-15);
	//8
	glVertex2f(gfPosX1+70,gfPosY1-28);
	//9
	glVertex2f(gfPosX1+48,gfPosY1-30);
	//10
	glVertex2f(gfPosX1+20,gfPosY1-25);
    //10.1	
	glVertex2f(gfPosX1+20,gfPosY1-25);

	//11
	glVertex2f(gfPosX1,gfPosY1-15);

	glVertex2f(gfPosX1-10,gfPosY1-7.5);
	
	glEnd();

	 glBegin(GL_POLYGON);
	 glColor3f(1,0,0);
	glVertex2f(gfPosX1+95,gfPosY1+12);//5

	glVertex2f(gfPosX1+110,gfPosY1+11);//12

	//13
	glVertex2f(gfPosX1+125,gfPosY1+40);
	//14
	glVertex2f(gfPosX1+140,gfPosY1+40);
	 //15
	glVertex2f(gfPosX1+120,gfPosY1);
	glEnd();

	//Window
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_TRIANGLES);
	//16
	glVertex2f(gfPosX1+20,gfPosY1+10);
	//17
	glVertex2f(gfPosX1+35,gfPosY1+20);
	//18
	glVertex2f(gfPosX1+35,gfPosY1+5);
	
	glEnd();
	glColor3f(0.1,0.1,0.1);
	glBegin(GL_QUADS);
	//19
	glVertex2f(gfPosX1+40,gfPosY1+20);
	//20
	glVertex2f(gfPosX1+55,gfPosY1+17);
//21
	glVertex2f(gfPosX1+55,gfPosY1+5);
	//22
	glVertex2f(gfPosX1+40,gfPosY1+5);
	
   //23
	glVertex2f(gfPosX1+60,gfPosY1+15);
	//24
	glVertex2f(gfPosX1+75,gfPosY1+12);
//25
	glVertex2f(gfPosX1+75,gfPosY1+5);
	
	//26
	glVertex2f(gfPosX1+60,gfPosY1+5);

	//27
	glVertex2f(gfPosX1+80,gfPosY1+10);
	//28
	glVertex2f(gfPosX1+88,gfPosY1+10);
//29
	glVertex2f(gfPosX1+88,gfPosY1-4);
	//30
	glVertex2f(gfPosX1+80,gfPosY1-4);

     //wings
	glColor3f(.36, .25, 0.20);

	glVertex2f(gfPosX1+25,gfPosY1-5);
	glVertex2f(gfPosX1+60,gfPosY1-8);
	glVertex2f(gfPosX1+80,gfPosY1-45);
	glVertex2f(gfPosX1+65,gfPosY1-45);

	glEnd();
	//
	//
    glutSwapBuffers();
	if(count1==0)
	{
	gfPosX1 -= gfDeltaX1;
		gfPosX -= gfDeltaX;

	if(gfPosX1<450&count==0){
	gfPosY1 +=  gfDeltaX;
	gfPosY += gfDeltaX;

	}
	}
	if(count1==1)
	{
		if(gfPosX1<250)
		{
			gfDeltaX1=0;
			gfDeltaX=0;
            scount++;
		}
		gfPosX1-=gfDeltaX1*.5
			;
		gfDeltaY=2;
		  gfPosY=gfPosY1-31;
		  gfPosX=gfPosX1+30;
		if(gfPosX1>500){
    	gfPosX1 -= gfDeltaX1*.5;
	   	gfPosY1 -=  gfDeltaX1;
     	gfPosY -= gfDeltaX;
		}
		glFlush();
	}

	
	if(gfPosX1<450&&count1>0){
			gfDeltaX1=0;
			gfDeltaX=0;
		
	}
 
}
void drawhouse1()
{
	int x=0,y=300;
	glColor3f(0.0, 0.0, 1.0);
glBegin(GL_QUADS);

glColor3f(0.0,0.0,0.0);
glVertex2f(x,y);
glVertex2f(x,y+200);
glVertex2f(x+70,y+200);
glVertex2f(x+70,y);

  glColor3f(00,.0,0.0);
  glVertex2f(x+40,y);
  glVertex2f(x+40,y+300);
  glVertex2f(x+100,y+300);
  glVertex2f(x+100,y);

  glColor3f(00,.0,0.0);
  glVertex2f(x+100,y);
  glVertex2f(x+100,y+270);
  glVertex2f(x+150,y+270);
  glVertex2f(x+150,y);
  //end of 1 house
  

  //2

  glBegin(GL_QUADS);
  x=840;
  y=300;
glColor3f(0.0,0.0,0.0);
glVertex2f(x,y);
glVertex2f(x,y+200);
glVertex2f(x+70,y+200);
glVertex2f(x+70,y);

  glColor3f(00,.0,0.0);
  glVertex2f(x+40,y);
  glVertex2f(x+40,y+300);
  glVertex2f(x+100,y+300);
  glVertex2f(x+100,y);

  glColor3f(00,.0,0.0);
  glVertex2f(x+100,y);
  glVertex2f(x+100,y+270);
  glVertex2f(x+150,y+270);
  glVertex2f(x+150,y);


  glEnd();
}
void drawbuildings()
{
	int x=300,y=300;
	int x1=310,y1=420,x2=315,y2=540;
		glBegin(GL_QUADS);
	glColor3f(0.0,0.0,0.0);
glVertex2f(x,y);
glVertex2f(x,y+150);
glVertex2f(x+100,y+150);
glVertex2f(x+100,y);

glVertex2f(x1,y1);
glVertex2f(x1,y1+120);
glVertex2f(x1+80,y1+120);
glVertex2f(x1+80,y1);


glVertex2f(x2,y2);
glVertex2f(x2,y2+100);
glVertex2f(x2+70,y2+100);
glVertex2f(x2+70,y2);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f(0,0,0);
int t1=310,t2=640;
glVertex2f(t1,t2);
glVertex2f(t1+35,t2+75);
glVertex2f(t1+80,t2);
glEnd();

	 
	   
}
void window()
{
	int z=0,x1,y1,x=0,dx,y=0;
	int x4=840,y4=0;
	int k=0;
	glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);


 //2
 glVertex2f(x4+12,y4+400);
glVertex2f(x4+12,y4+425);
glVertex2f(x4+22,y4+425);
 glVertex2f(x4+22,y4+400);


 //3
 glVertex2f(x4+11,y4+450);
glVertex2f(x4+11,y4+475);
glVertex2f(x4+20,y4+475);
 glVertex2f(x4+20,y4+450);

 //4
 glVertex2f(x4+26,y4+450);
glVertex2f(x4+26,y4+475);
glVertex2f(x4+36,y4+475);
 glVertex2f(x4+36,y4+450);

 //6
 glVertex2f(x4+28,y4+400);
glVertex2f(x4+28,y4+425);
glVertex2f(x4+37,y4+425);
 glVertex2f(x4+37,y4+400);


//completion of 2 bulding window
	
	
	
	while(z<2){
		if(z==1)
		{
			dx=840;
		
		}
		glBegin(GL_QUADS);
glColor3f(1.0,1.0,1.0);


 //2
 glVertex2f(x+12,y+400);
glVertex2f(x+12,y+425);
glVertex2f(x+22,y+425);
 glVertex2f(x+22,y+400);

 //3
 glVertex2f(x+11,y+450);
glVertex2f(x+11,y+475);
glVertex2f(x+20,y+475);
 glVertex2f(x+20,y+450);

 //4
 glVertex2f(x+26,y+450);
glVertex2f(x+26,y+475);
glVertex2f(x+36,y+475);
 glVertex2f(x+36,y+450);

 //6
 glVertex2f(x+28,y+400);
glVertex2f(x+28,y+425);
glVertex2f(x+37,y+425);
 glVertex2f(x+37,y+400);




 
 int i=0,y5;
 y5=y;
 x+=50;
 y+=340;
while(i<=16)
 {
	 glVertex2f(x,y);
glVertex2f(x,y+30);
glVertex2f(x+10,y+30);
 glVertex2f(x+10,y);
 
 y=y+50;
 if(i<4){
 if(i==3)
	  x=53;
 else
	 x=50;
 }
  if(i==4)
	 {
		 x=x+840;
   y=y5+350;
  }
 if(i==8)
  {
	  x=950;
  y=y5+360;
  }
   if(i==12)
  {x=920;
  y=y5+365;
  }

  i++;

}
i=0;
x1=76;
y1=370;
while(i<=3)
 {
	 glVertex2f(x1,y1);
glVertex2f(x1,y1+30);
glVertex2f(x1+10,y1+30);
 glVertex2f(x1+10,y1);
 
 y1=y1+50;

i++;
if(i==20)
	x1=80;
else
	x1=76;
 }

          int x2=105,y2=340;
		  i=0;
		  while(i<4)
 {
	 glVertex2f(x2,y2);
glVertex2f(x2,y2+30);
glVertex2f(x2+10,y2+30);
 glVertex2f(x2+10,y2);
 
 y2=y2+50;
 i++;
 if(i==1)
	 x2=x2+12;
 if(i==2)
	 x2=105+15;

  if(i==3)
	 x2=105+17;
   if(i==4)
	 x2=106+10;
    
	 

   z++;
}
	k++;
	x=x+400;
	x1=x1+400;
	x2=x2+400;
	//}
	glEnd();
	}

}
void footpath()
{
	int x=0,y=268,i=0;
	glBegin(GL_QUADS);
	while(x!=1000){
		if(i%2==0)
	glColor3f(0.0,0.0,0.0);
		else
			glColor3f(1.0,1.0,1.0);               //first stripe
		glVertex2f(x,y);

	glVertex2f(x,y+18);
	glVertex2f(x+18,y+18);
	glVertex2f(x+18,y);
	x=x+10;
	i++;
	}
	x=0;
	y=250;
	while(x!=1000){
		if(i%2!=0)
	glColor3f(0.0,0.0,0.0);
		else
			glColor3f(1.0,1.0,1.0);
		glVertex2f(x,y);

	glVertex2f(x,y+18);
	glVertex2f(x+18,y+18);
	glVertex2f(x+18,y);
	x=x+10;
	i++;
	}
	glEnd();
}
void car(int px,int py,float color)
{
	glPointSize(5);
  float angle,x1;
	  float x2,y2;
	  x1=x+px+5;
	 

	
	glBegin(GL_POLYGON);
	
		glColor3f(0+color,+color,10+color);
 		glVertex2f(x+px,y+py);//1
		glVertex2f(x+px,y+10+py);//2
        glVertex2f(x+5+px,y+py+10);//3
        glVertex2f(x+px+8,y+py+15);//4
        glVertex2f(x+px+15,y+py+15);//5
        glVertex2f(x+px+18,y+py+10);//6
        glVertex2f(x+px+23,y+py+10);//7
        glVertex2f(x+px+23,y+py);//8
		glVertex2f(x+px,y+py);//9

glEnd();

 glBegin(GL_POLYGON);
	   glColor3f(0,0,0);
 
	   for (angle=1.0f;angle<360.0f;angle+=0.2)
   {
    x2 =x1+sin(angle)*radiusC;
     y2 = y+py-1+cos(angle)*radiusC;
    glVertex2f(x2,y2);
    }
	   glEnd();

	   glBegin(GL_POLYGON);
	   for (angle=1.0f;angle<360.0f;angle+=0.2)
       {
    x2 =x1+12+sin(angle)*radiusC;
     y2 = y+py-1+cos(angle)*radiusC;
    glVertex2f(x2,y2);
    }
     glEnd();
x=x+carX;
if(x>2000)
	x=0;
	}
void lamps(int x,int y)
{
	int z,x1,y1;
    glColor3f(0,0,0);
	glBegin(GL_QUADS);
	glVertex2f(x,y);
	glVertex2f(x,y+100);
	glVertex2f(x+5,y+100);
	glVertex2f(x+5,y);
	glColor3f(135.0,210.0,255.0);
	glVertex2f(x,y+100);
	glVertex2f(x-4,y+125);
	glVertex2f(x+9,y+125);
	glVertex2f(x+5,y+100);
	glEnd();
}
void twintower()
{
	glBegin(GL_QUADS);
	glColor3f(0.0,0.0,0.0);
	int x=450,x2,y2,y=300,x1=180,y1=300,x3,x4,x5,y3,y4,y5;
	int i=0;
	x3=x+20;
	y3=y+20;

	x5=x1;
	y5=y1;
	//twin towers window
	glColor3f(0.0,0.0,0.0);

	glVertex2f(x,y);
	glVertex2f(x,y+350);
	glVertex2f(x+80,y+350);
	glVertex2f(x+80,y);
	
	x2=465;
	y2=345;
	glVertex2f(x2,y2);
	glVertex2f(x2,y2+350);
	glVertex2f(x2+50,y2+350);
	glVertex2f(x2+50,y2);
	
	x2=475;
	y2=385;
	glVertex2f(x2,y2);
	glVertex2f(x2,y2+350);
	glVertex2f(x2+30,y2+350);
	glVertex2f(x2+30,y2);
	
	
	x2=482;
	y2=485;
	glVertex2f(x2,y2);
	glVertex2f(x2,y2+350);
	glVertex2f(x2+6,y2+350);
	glVertex2f(x2+6,y2);
	
	x2=482+6+4;
	y2=550;
	glVertex2f(x2,y2);
	glVertex2f(x2,y2+350);
	glVertex2f(x2+6,y2+350);
	glVertex2f(x2+6,y2);
	
	//first tower
	glVertex2f(x1,y1);
	glVertex2f(x1,y1+400);
	glVertex2f(x1+80,y1+400);
	glVertex2f(x1+80,y1);

	x2=195;
	y2=380;
	glVertex2f(x2,y2);
	glVertex2f(x2,y2+350);
	glVertex2f(x2+50,y2+350);
	glVertex2f(x2+50,y2);
	
	x2=205;
	y2=420;
	glVertex2f(x2,y2);
	glVertex2f(x2,y2+350);
	glVertex2f(x2+30,y2+350);
	glVertex2f(x2+30,y2);
	
	
	x2=222;
	y2=500;
	glVertex2f(x2,y2);
	glVertex2f(x2,y2+430);
	glVertex2f(x2+6,y2+460);
	glVertex2f(x2+6,y2);
	
	x2=210;
	y2=450;
	glVertex2f(x2,y2);
	glVertex2f(x2,y2+440);
	glVertex2f(x2+6,y2+410);
	glVertex2f(x2+6,y2);
	
	y3=y3+45;
	y4=y3;
	while(i<=9)
 {
	 glBegin(GL_QUADS);
	 glColor3f(1,1,1);
	 glVertex2f(x3,y3);
     glVertex2f(x3,y3+30);
     glVertex2f(x3+10,y3+30);
     glVertex2f(x3+10,y3);
	
	 y3=y3+50;
	 if(i==4)
	 {
		 x3=500;
	     y3=y4+30;
	 }
		 i++;
	 
	}
	int y6,x6;
	y5=y5+60;
	y6=y5;
	x5=x5+18;
	x6=x5;
	i=0;
	while(i<=12)
 {
	 glBegin(GL_QUADS);
	 glColor3f(1,1,1);
	 glVertex2f(x5,y5);
     glVertex2f(x5,y5+30);
     glVertex2f(x5+10,y5+30);
     glVertex2f(x5+10,y5);
	
	 y5=y5+50;
	 if(i==6)
	 {
		 x5=x6+30;
	     y5=y6+30;
	 }
		 i++;
	 
	}
	
	glEnd();
}
void road()
{
glBegin(GL_QUADS);
glColor3f(.5,.5,.5);
glVertex2f(0,150);
glVertex2f(0,250);
glVertex2f(1000,250);
glVertex2f(1000,150);
glEnd();
int xs=0;
for(int i=0;i<35;i++)
{
	
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex2f(10+xs,280+46-125);
glVertex2f(10+xs,380-46-125);
glVertex2f(35+xs,380-46-125);
glVertex2f(35+xs,280+46-125);
glEnd();
xs=xs+40;
}
}
void Display(void)
{
	int x,y;
	glClearColor(1.0,1.0,0,1);
glClear(GL_COLOR_BUFFER_BIT);	
//Draw();
drawhouse1();
window();
footpath();
drawbuildings();
twintower();
road();
//for lamp post :)
x=0;
y=0;
for(int i=0;i<8;i++){
lamps(x+270,y+300);
lamps(x+290,y+300);
if(i==2)
	x=x+300;
    if(i>2)
		x+=60;

}
glFlush();
}
void Initialize() {
	
	if(gfPosX1<0||count>0)
	{
		
		if(gfPosX1<0)
		{
		gfPosX1=1000;
	    gfPosY1=850;
		count++;
		}
		glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	switch(count)
	{
	case 1:if(!scount){
        gfDeltaX1 = 4.0;
		City();break;}
	case 2:if(!scount){
		Mountain();break;
		   }
	case 3:if(!scount){
		Sea();break;}
	case 4:gfDeltaX1=4.7;
		if(!scount||lx>780)
		Airport1();
		   else
			   Final();
		break;
		   
		   }
	}
	else{
		glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(1.0, 1.0, 0.0, 1.0);
	Airport();
	}
//	Mountain();
}
void City(){
	glBegin(GL_QUADS);
glColor3f(1,.5,0);
glVertex2f(0,0);
glColor3f(0,0,1);
glVertex2f(0,1000);
glColor3f(0,0,1);
glVertex2f(1000,1000);
glColor3f(1,0.5,0);
glVertex2f(1000,0);
glEnd();
int x,y;
glColor3f(1,.6,0);
sun(925,610);

drawhouse1();
window();
footpath();
drawbuildings();
twintower();
road();

car(0,10,.1);
car(175,10,.5);
car(150+85,10,.6);
car(400,10,.7);
car(700,10,5);
car(100,75,.7);
car(150,75,.54);
car(850,75,.12);
car(750,75,6);
car(500,75,.56);
car(0,10,.78);
car(-175,10,4);
car(-150-85,10,.45);
car(-400,10,.70);
car(-700,10,.20);
car(-100,75,5);
car(-150,75,4);
car(-850,75,47);
car(-750,75,5);
car(-500,75,0);
//
//for lamp post :)
x=0;
y=0;
for(int i=0;i<8;i++){
lamps(x+270,y+300);
lamps(x+290,y+300);
if(i==2)
	x=x+300;
    if(i>2)
		x+=60;

}

glColor3f(1,1,1);
	 char *a="Busting Cities...";
    glRasterPos2f( 70 , 100 );
    for(int i = 0; a[i] !='\0'; i++)
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, a[i]);




Plane();

glFlush();

}
void Airport()
{

	glBegin(GL_QUADS);
glColor3f(0,1,0);
glVertex2f(0,0);
glVertex2f(0,400);
glVertex2f(1000,400);
glVertex2f(1000,0);
glEnd();
int i;
glBegin(GL_QUADS);
glColor3f(1,.5,0);
glVertex2f(0,400);
glColor3f(0,0,1);
glVertex2f(0,1000);
glColor3f(0,0,1);
glVertex2f(1000,1000);
glColor3f(1,0.5,0);
glVertex2f(1000,400);
glEnd();
//runway
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex2f(85-3,280-4);
glVertex2f(110-3,380+3);
glVertex2f(1000+3,380+3);
glVertex2f(1000+3,280-4);
glEnd();
glBegin(GL_QUADS);
glColor3f(.752941,.752941,.752941);
glVertex2f(85,280);
glVertex2f(110,380);
glVertex2f(1000,380);
glVertex2f(1000,280);
glEnd();

//stripes
int xs=0;
for(i=0;i<35;i++)
{
	
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex2f(105+xs,280+46);
glVertex2f(105+xs,380-46);
glVertex2f(135+xs,380-46);
glVertex2f(135+xs,280+46);
glEnd();
xs=xs+40;
}

glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex2f(50-3,160-4);
glVertex2f(75-3,260+3);
glVertex2f(1000+3,260+3);
glVertex2f(1000+3,160-4);
glEnd();
glBegin(GL_QUADS);
glColor3f(.752941,.752941,.752941);
glVertex2f(50,160);
glVertex2f(75,260);
glVertex2f(1000,260);
glVertex2f(1000,160);
glEnd();
xs=0;
for(i=0;i<35;i++)
{
	
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex2f(63+xs,160+46);
glVertex2f(63+xs,260-46);
glVertex2f(93+xs,260-46);
glVertex2f(93+xs,160+46);
glEnd();
xs=xs+40;
}



glBegin(GL_QUADS);
glColor3f(.1,.1,.1);
glVertex2f(400,400);
glVertex2f(400,500);
glVertex2f(1000,500);
glVertex2f(1000,400);
glEnd();

glBegin(GL_QUADS);
glColor3f(.1,.5,1);
glVertex2f(415,415);
glVertex2f(415,485);
glVertex2f(1000,485);
glVertex2f(1000,415);
glEnd();
//windows
int x=0,y=0;
for( i=0;i<25;i++){
	glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex2f(425+x,415+20);
glVertex2f(425+x,485-20);
glVertex2f(435+x,485-20);
glVertex2f(435+x,415+20);
glEnd();
x=x+25;
if(x>6)
	x=x+10;
}


//tower control
glBegin(GL_QUADS);
glColor3f(.1,.1,.2);
glVertex2f(250,400);
glVertex2f(250,600);
glVertex2f(275,600);
glVertex2f(275,400);
glEnd();

glBegin(GL_QUADS);
glColor3f(.1,.1,.2);
glVertex2f(225+15,600);
glVertex2f(225+15,630);
glVertex2f(300-15,630);
glVertex2f(300-15,600);
glEnd();
glBegin(GL_QUADS);
glColor3f(0,.1,1);
glVertex2f(225+15,607);
glVertex2f(225+15,613);
glVertex2f(300-15,613);
glVertex2f(300-15,607);
glEnd();

glBegin(GL_QUADS);
glColor3f(.1,.1,.2);
glVertex2f(250+8,630);
glVertex2f(250+8,670);
glVertex2f(275-8,670);
glVertex2f(275-8,630);
glEnd();

glColor3f(1,1,1);
	 char *a="Our Planes Fly to...";
    glRasterPos2f( 70 , 100 );
    for(int i = 0; a[i] !='\0'; i++)
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, a[i]);


Plane();

glFlush();

}
void Airport1()
{
	if(count1==0)
	count1++;

	int i;

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2f(0,400);
glColor3f(0,0,0);
glVertex2f(0,1000);
glColor3f(0,0,0);
glVertex2f(1000,1000);
glColor3f(0,0,0);
glVertex2f(1000,400);
glEnd();

glColor3f(.8,.9,.91);
sun(200,850);
	glBegin(GL_QUADS);
glColor3f(0,.5,0);
glVertex2f(0,0);
glVertex2f(0,400);
glVertex2f(1000,400);
glVertex2f(1000,0);
glEnd();

//runway
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex2f(85-3,280-4);
glVertex2f(110-3,380+3);
glVertex2f(1000+3,380+3);
glVertex2f(1000+3,280-4);
glEnd();
glBegin(GL_QUADS);
glColor3f(.752941,.752941,.752941);
glVertex2f(85,280);
glVertex2f(110,380);
glVertex2f(1000,380);
glVertex2f(1000,280);
glEnd();

//stripes
int xs=0;
for(i=0;i<35;i++)
{
	
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex2f(105+xs,280+46);
glVertex2f(105+xs,380-46);
glVertex2f(135+xs,380-46);
glVertex2f(135+xs,280+46);
glEnd();
xs=xs+40;
}

glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex2f(50-3,160-4);
glVertex2f(75-3,260+3);
glVertex2f(1000+3,260+3);
glVertex2f(1000+3,160-4);
glEnd();
glBegin(GL_QUADS);
glColor3f(.752941,.752941,.752941);
glVertex2f(50,160);
glVertex2f(75,260);
glVertex2f(1000,260);
glVertex2f(1000,160);
glEnd();
xs=0;
for(i=0;i<35;i++)
{
	
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex2f(63+xs,160+46);
glVertex2f(63+xs,260-46);
glVertex2f(93+xs,260-46);
glVertex2f(93+xs,160+46);
glEnd();
xs=xs+40;
}



glBegin(GL_QUADS);
glColor3f(.1,.1,.1);
glVertex2f(400,400);
glVertex2f(400,500);
glVertex2f(1000,500);
glVertex2f(1000,400);
glEnd();

glBegin(GL_QUADS);
glColor3f(.1,.5,1);
glVertex2f(415,415);
glVertex2f(415,485);
glVertex2f(1000,485);
glVertex2f(1000,415);
glEnd();
//windows
int x=0,y=0;
for( i=0;i<25;i++){
	glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex2f(425+x,415+20);
glVertex2f(425+x,485-20);
glVertex2f(435+x,485-20);
glVertex2f(435+x,415+20);
glEnd();
x=x+25;
if(x>6)
	x=x+10;
}


//tower control
glBegin(GL_QUADS);
glColor3f(.8,.8,.7);
glVertex2f(250,400);
glVertex2f(250,600);
glVertex2f(275,600);
glVertex2f(275,400);
glEnd();

glBegin(GL_QUADS);
glColor3f(.8,.8,.7);
glVertex2f(225+15,600);
glVertex2f(225+15,630);
glVertex2f(300-15,630);
glVertex2f(300-15,600);
glEnd();
glBegin(GL_QUADS);
glColor3f(0,.1,1);
glVertex2f(225+15,607);
glVertex2f(225+15,613);
glVertex2f(300-15,613);
glVertex2f(300-15,607);
glEnd();
glColor3f(1,1,1);
glBegin(GL_POINTS);
glVertex2f(lx,ly-500);
glEnd();
lx=lx-1;
glBegin(GL_QUADS);
glColor3f(.8,.8,.7);
glVertex2f(250+8,630);
glVertex2f(250+8,670);
glVertex2f(275-8,670);
glVertex2f(275-8,630);
glEnd();
Plane();
glFlush();


}
void Sea(){
	

	glBegin(GL_QUADS);
glColor3f(1,.5,0);
glVertex2f(0,400);
glColor3f(1,1,0);
glVertex2f(0,1000);
glColor3f(1,1,0);
glVertex2f(1000,1000);
glColor3f(1,.5,0);
glVertex2f(1000,400);
glEnd();
glColor3f(.91,.2,0);
sun(650,410);

float angle,x2,y2;
float radius=100;


glBegin(GL_QUADS);
glVertex2f(0,0);
glVertex2f(0,400);
glVertex2f(1000,400);
glVertex2f(1000,0);

glEnd();
glBegin(GL_QUADS);

glColor3f(0.1,0.0,.819608);
glVertex2f(0,0);
glVertex2f(0,400);
glVertex2f(1000,400);
glVertex2f(1000,0);

glEnd();

glBegin(GL_QUADS);

glColor3f(0.819608,0,0);
glVertex2f(sx,sy);
glVertex2f(sx-20,sy+50);
glVertex2f(sx+80,sy+50);
glVertex2f(sx+60,sy);

glEnd();

glBegin(GL_TRIANGLES);

glColor3f(0,0,0.819608);

glVertex2f(sx+35,sy+50);
glVertex2f(sx+35,sy+135);
glVertex2f(sx+75,sy+50);
glEnd();

sx=sx-1;
Plane();
radius=100;
gfPosSX=100;
	gfPosSY=400;
	glBegin(GL_POLYGON);
	glColor3f(.36,0.25,0.20);
for (angle=1.0f;angle<5.3f;angle+=0.2)
{
    x2 =gfPosSX -sin(angle)*radius;
     y2 = gfPosSY-cos(angle)*radius;
    glVertex2f(x2,y2);
}
glEnd();


glBegin(GL_QUADS);

glColor3f(0.8,0.0,.0);
glVertex2f(110,400);
glVertex2f(111,600);
glVertex2f(120,600);
glVertex2f(121,400);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0,1.0,.0);
glVertex2f(111,600);
glVertex2f(66,600);
glVertex2f(66,630);
glVertex2f(114.5,600);

glVertex2f(165,630);
glVertex2f(165,600);
glVertex2f(120,600);
glEnd();
glEnd();

glColor3f(1,1,1);
	 char *a="and Paradise.";
    glRasterPos2f( 70 , 100 );
    for(int i = 0; a[i] !='\0'; i++)
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, a[i]);




glFlush();


}
void Mountain() {
glBegin(GL_QUADS);
glColor3f(1,1,1);
glVertex2f(0,0);
glColor3f(0,0,.8);
glVertex2f(0,1000);
glColor3f(0,0,.8);
glVertex2f(1000,1000);
glColor3f(1,1,1);
glVertex2f(1000,0);
glEnd();

glColor3f(.91,.91,1);
sun(700,850);

glBegin(GL_POLYGON);
glColor3f(0,1,0);
glVertex2f(0,0);
glVertex2f(0,300);
glVertex2f(100,500);
glVertex2f(240,600);
glVertex2f(400,550);
glVertex2f(550,880);
glVertex2f(770,650);
glVertex2f(900,900);
glVertex2f(1000,800);
glVertex2f(1000,0);
glEnd();
GLfloat x=100,y=-100;

//hollywood
glLineWidth(10);
glColor3f(1,1,1);
glBegin(GL_LINE_STRIP);
//H
glVertex2f(200+x,500+y);
glVertex2f(200+x,620+y);
glVertex2f(200+x,560+y);
glVertex2f(250+x,560+y);
glVertex2f(250+x,500+y);
glVertex2f(250+x,620+y);

glEnd();
//O
glBegin(GL_LINE_STRIP);

glVertex2f(260+x,500+y);
glVertex2f(260+x,620+y);
glVertex2f(310+x,620+y);
glVertex2f(310+x,500+y);
glVertex2f(260+x,500+y);
glEnd();
//L
glBegin(GL_LINE_STRIP);

glVertex2f(320+x,500+y);
glVertex2f(320+x,620+y);
glVertex2f(320+x,500+y);
glVertex2f(370+x,500+y);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(380+x,500+y);
glVertex2f(380+x,620+y);
glVertex2f(380+x,500+y);
glVertex2f(430+x,500+y);
glEnd();
//Y
glBegin(GL_LINE_STRIP);
glVertex2f(465+x,500+y);
glVertex2f(465+x,560+y);
glVertex2f(430+x,620+y);
glVertex2f(465+x,560+y);
glVertex2f(500+x,620+y);
glEnd();
//W
glBegin(GL_LINE_STRIP);
glVertex2f(510+x,620+y);
glVertex2f(525+x,500+y);
glVertex2f(540+x,570+y);
glVertex2f(555+x,500+y);
glVertex2f(570+x,620+y);
glEnd();
//O
glBegin(GL_LINE_STRIP);
glVertex2f(260+320+x,500+y);
glVertex2f(260+320+x,620+y);
glVertex2f(310+320+x,620+y);
glVertex2f(310+320+x,500+y);
glVertex2f(260+320+x,500+y);
glEnd();
//O
glBegin(GL_LINE_STRIP);

glVertex2f(260+380+x,500+y);
glVertex2f(260+380+x,620+y);
glVertex2f(310+380+x,620+y);
glVertex2f(310+380+x,500+y);
glVertex2f(260+380+x,500+y);
glEnd();

//D
glBegin(GL_LINE_STRIP);

glVertex2f(700+x,500+y);
glVertex2f(700+x,620+y);
glVertex2f(735+x,620+y);
glVertex2f(750+x,600+y);
glVertex2f(750+x,520+y);
glVertex2f(735+x,500+y);
glVertex2f(700+x,500+y);
glEnd();

glColor3f(1,1,1);
	 char *a="Famous Places...";
    glRasterPos2f( 70 , 100 );
    for(int i = 0; a[i] !='\0'; i++)
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, a[i]);








Plane();
glFlush();

}
void sun(GLfloat x,GLfloat Y)
{
	float radius=50,angle,x2,y2;
		glBegin(GL_POLYGON);
for (angle=1.0f;angle<360.0f;angle+=0.2)
{
    x2 = x+sin(angle)*radius;
     y2 = Y+cos(angle)*radius;
    glVertex2f(x2,y2);
}
glEnd();
}
void Final()
{
	glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex2f(0,0);
glColor3f(.4,0,0);
glVertex2f(0,1000);
glColor3f(.7,0,0);
glVertex2f(1000,1000);
glColor3f(.4,0,0);
glVertex2f(1000,0);
glEnd();

if(nl<150)
{
//
glLineWidth(10);
glColor3f(1,1,1);
glBegin(GL_LINE_STRIP);
//NA
glVertex2f(200,500);
glVertex2f(250,650);
glVertex2f(275,500);
glVertex2f(325,650);
glVertex2f(325,500);
glVertex2f(325,550);
glVertex2f(305,550);
glEnd();
//I
glBegin(GL_LINE_STRIP);
glVertex2f(335,500);
glVertex2f(335,600);
glEnd();
//R
glBegin(GL_LINE_STRIP);
glVertex2f(345,500);
glVertex2f(345,595);
glVertex2f(365,595);
glVertex2f(385,585);
glVertex2f(385,550);
glVertex2f(365,535);
glVertex2f(345,535);
glVertex2f(365,535);
glVertex2f(385,500);

glEnd();

//W
glBegin(GL_LINE_STRIP);
glVertex2f(395,600);
glVertex2f(410,500);
glVertex2f(425,570);
glVertex2f(440,500);
glVertex2f(455,600);
glEnd();

//A
glBegin(GL_LINE_STRIP);
glVertex2f(450,500);
glVertex2f(470,600);
glVertex2f(490,500);
glEnd();
glBegin(GL_LINES);

glVertex2f(475,530);
glVertex2f(455,530);
glEnd();
//Y
glBegin(GL_LINE_STRIP);
glVertex2f(515,500);
glVertex2f(515,550);
glVertex2f(490,600);
glVertex2f(515,550);
glVertex2f(540,600);
glEnd();

//S
glBegin(GL_LINE_STRIP);
glVertex2f(550,500);
glVertex2f(590,500);
glVertex2f(590,550);
glVertex2f(550,550);
glVertex2f(550,595);
glVertex2f(590,595);
glEnd();
//O

glColor3f(1,1,1);
	 char *a="Nirvana Airways.";
    glRasterPos2f(600,500);
    for(int i = 0; a[i] !='\0'; i++)
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, a[i]);
	 char *b="Smile Every Mile...";
    glRasterPos2f(620,475);
    for(int i = 0; b[i] !='\0'; i++)
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, b[i]);
}
if(nl>=150&&nl<250)
{
	glColor3f(1,1,1);
		 char *c="The End.";
    glRasterPos2f(500,500);
    for(int i = 0; c[i] !='\0'; i++)
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c[i]);
}
if(nl>250)
	exit(0);
	nl=nl+1;



glFlush();
}
void mouse(int btn,int state,int ,int )
{
	if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
	glutDisplayFunc(Initialize);
}
void myinit(void)
{
	glClearColor(1.0,1.0,1.0,1.0);
	glColor3f(1.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,1000.0,0.0,1000.0);

	
	glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex2f(0,0);
glColor3f(0.4,0.0,0);
glVertex2f(0,1000);
glColor3f(0.7,0.0,0);
glVertex2f(1000,1000);
glColor3f(0.4,0.0,0);
glVertex2f(1000,0);
glEnd();


glColor3f(0,0,0);
	 char *a="LEFT CLICK TO CONTINUE";
    glRasterPos2f( 700 , 250 );
    for(int i = 0; a[i] !='\0'; i++)
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, a[i]);



	
glColor3f(0,0,0);
	 char *b="S R I S H A    M A H U L I";
    glRasterPos2f( 150 , 300 );
    for(int i = 0; b[i] !='\0'; i++)
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, b[i]);

	
glColor3f(0,0,0);
	 char *c="1 K S 1 0 C S 1 0 0";
    glRasterPos2f( 150 , 230 );
    for(int i = 0; c[i] !='\0'; i++)
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c[i]);


	glColor3f(0,0,0);
	 char *D="A I R C R A F T    A D ";
    glRasterPos2f( 450 , 800 );
    for(int i = 0; D[i] !='\0'; i++)
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, D[i]);
	int x=225,y=0;

	//NA
	glLineWidth(10);
glColor3f(1,1,1);
glBegin(GL_LINE_STRIP);
glVertex2f(200+x,500+y);
glVertex2f(250+x,650+y);
glVertex2f(275+x,500+y);
glVertex2f(325+x,650+y);
glVertex2f(325+x,500+y);
glVertex2f(325+x,550+y);
glVertex2f(305+x,550+y);
glEnd();
//I

	 char *s="Smile Every Mile...";
    glRasterPos2f(225+325+10,500+y);
    for(int i = 0; s[i] !='\0'; i++)
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, s[i]);


glFlush();
}
int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1500,1500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Aircraft Ad");
	glutDisplayFunc(myinit);
	glutMouseFunc(mouse);
	Timer(1);
	glutMainLoop();
	return 0;

}
