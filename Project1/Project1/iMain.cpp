#include<iostream>
#include "iGraphics.h"
using namespace std;
void drawhomepage();
void drawStartPage();
void drawAboutPage();
void drawInstructionPage();
void drawScorePage();
void drawEasyPage();
void drawMediumpage();
void drawHardpage();

void startButtonClickHandler();
void aboutButtonClickHandler();
void instructionButtonClickHandler();
void scoreButtonClickHandler();
void backButtonClickHandler();
void easyButtonClickHandler();
void mediumButtonClickHandler();
void hardButtonClickHandler();





int startButtonClick = 0;
int aboutButtonClick = 0;
int startpage = 0;
int homepage = 1;
int aboutpage = 0;
int instructionpage = 0;
int scorepage = 0;
int easypage = 0;
int mediumpage = 0;
int hardpage = 0;
int back1, back2;


int playerx = 470, playery = 0;//hero
float x = 400,  y = 601;//v1
float a = 600,  b = 601;//v2
float c = 550,  d = 601;//v3
int dy = 0, dy1 = 600;








void collision()
{
	//
	if ((playerx + 42 >= x && playerx <= x + 42) && (playery + 90 >= y && playery <= y + 90))
	{
		exit(0);
	}
	 else if ((playerx + 42 >= a && playerx <= a + 42) && (playery + 90 >= b && playery <= b + 90))
	{
		exit(0);
	}
	 else if ((playerx + 42 >= c && playerx <= c + 42) && (playery + 90 >= d && playery <= d + 90))
	{
		exit(0);
	}





}
//for score
//int second = 0;
//int score = 0;


//for coin 
int c1y = 601, c1x = 350;
int c2y = 601, c2x = 550;
int c3y = 601, c3x = 450;
int c1xspeed = 0, c2xspeed = 0, c3xspeed = 0;
int coinscore = 0;

//for coincollision
void coincollision()
{
	//coin1
	if ((playerx + 40 >= c1x && playerx <= c1x + 30) && (playery+ 42 >= c1y && playery <= c1y + 42))
	{
		//coinscore += 5;
		c1xspeed += 10;
		c1x += c1xspeed;
		//c1y = 601, c1x = 300;
	}
	else if ((playerx + 40 >= c2x && playerx <= c2x + 30) && (playery + 42 >= c2y && playery <= c2y + 42))
	{
		//coinscore += 5;
		c2xspeed += 10;
		c2x += c2xspeed;
		//c2y = 601, c2x = 500;
	}
	else if ((playerx + 40 >= c3x && playerx <= c3x + 30) && (playery + 42 >= c3y && playery <= c3y + 42))
	{
		//coinscore += 5;
		c3xspeed += 10;
		c3x += c3xspeed;
		//c3y = 600, c3x = 400;
	}

	//score = second + coinscore;
}





//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::/
void iDraw()
{
	iClear();
	if (homepage == 1)
	{
		drawhomepage();
	}
	else if (startpage == 1)
		drawStartPage();
	else if (aboutpage == 1)
	{
		drawAboutPage();
	}
	else if (instructionpage == 1)
	{
		drawInstructionPage();


	}
	else if (scorepage == 1)
	{
		drawScorePage();

	}
	else if (easypage == 1)
	{
		drawEasyPage();
	}
	else if (mediumpage == 1)
	{
		drawMediumpage();
	}
	else if (hardpage== 1)
	{
		drawHardpage();
	}
}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		cout << "x=" << mx << "y=" << my << endl;
		if (homepage == 1 && (mx >= 370 && mx <= 614) && (my>=506 && my<=587))
		{
			startButtonClickHandler();
		}

		else if (homepage == 1 && (mx >= 360 && mx <= 558) && (my >= 403 && my <= 470))
		{
			aboutButtonClickHandler();
	
		}

		else if (homepage == 1 && (mx >= 348 && mx <= 625) && my >= 302 && my <= 391)
		{
			instructionButtonClickHandler();
		}


		else if (homepage == 1 && (mx >= 359 && mx <= 560) && (my >= 201 && my <= 270))
		{
			scoreButtonClickHandler();




		}


		else if ((startpage == 1 || aboutpage == 1 || instructionpage == 1 || scorepage == 1) && (mx >= 700 && mx <= 998) && (my >= 12 && my <= 113))
		{


			backButtonClickHandler();
		}
		else if (startpage == 1 && (mx >= 370 && mx <= 614) && (my >= 506 && my <= 587))
		{

			easyButtonClickHandler();
		}


		}
	else if (startpage == 1 && (mx >= 360 && mx <= 560) && (my >= 402 && my <= 471))
	{
		mediumButtonClickHandler();
	}
	
	else if (startpage == 1 && (mx >= 348 && mx <= 625) && (my >= 302 && my <= 391))
	{
		hardButtonClickHandler();
	}

	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == '\r')
	{
		
	}
	
	
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{


	if (key == GLUT_KEY_RIGHT)
	{
		playerx = playerx + 15;
		if (playerx > 800)
		{
			playerx = 800;
		}

	}
	if (key == GLUT_KEY_LEFT)
	{
		playerx = playerx - 10;
		if (playerx <160)
		{
			playerx = 160;
		}

	}

	if (key == GLUT_KEY_UP){
		playery = playery + 10;
		if (playery> 512)
		{
			playery = 512;
		}

	}
	if (key == GLUT_KEY_DOWN){
		playery = playery - 10;
		if (playery < 0)
		{
			playery = 0;
		}

	}
}
void drawhomepage()
{
	iSetColor(120, 120, 120);
	iFilledRectangle(0, 0, 1000, 600);
	iShowBMP2(0, 0, "image\\ra1.bmp", 0);
	iShowBMP2(360, 400, "image\\R22.bmp", 0);
	iShowBMP2(370, 500, "image\\R11.bmp", 0);
	iShowBMP2(350, 300, "image\\R11.bmp", 0);
	iShowBMP2(360, 200, "image\\R22.bmp", 0);
	iSetColor(255, 0, 0);
	iText(420, 530, "START", GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(255, 0, 0);
	iText(420, 430, "ABOUT US", GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(0, 0, 255);
	iText(420, 330, "INSTRUCTIONS", GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(0, 255, 0);
	iText(420, 230, "SCORE", GLUT_BITMAP_TIMES_ROMAN_24);

}

void drawStartPage()
{
	iFilledRectangle(0, 0, 1000, 600);
		iShowBMP2(0, 0, "image\\CAR1.bmp", 0);
		iShowBMP2(0, 0, "image\\as1.bmp", 0);
		iShowBMP2(700, 10, "image\\b2.bmp", 0);
		iShowBMP2(370, 500, "image\\R11.bmp", 0);
		iText(420, 530, "EASY", GLUT_BITMAP_TIMES_ROMAN_24);
		iShowBMP2(360, 400, "image\\R22.bmp", 0);
		iText(420, 430, "MEDIUM", GLUT_BITMAP_TIMES_ROMAN_24);
		iShowBMP2(350, 300, "image\\R11.bmp", 0);
		iText(420, 330, "HARD", GLUT_BITMAP_TIMES_ROMAN_24);
		

}
void drawAboutPage()
{
	iFilledRectangle(0, 0, 1000, 600);
	iShowBMP2(0, 0, "image\\ab1.bmp", 0);
	iShowBMP2(700, 10, "image\\b2.bmp", 0);


}
 void drawInstructionPage()
{
	iFilledRectangle(0, 0, 1000, 600);
	iShowBMP2(0, 0, "image\\W1.bmp", 0);
	iShowBMP2(700, 10, "image\\b2.bmp", 0);



}
 void drawScorePage()

 {

	 iFilledRectangle(0, 0, 1000, 600);
	 iShowBMP2(0, 0, "image\\s2.bmp", 0);
	 iShowBMP2(700, 10, "image\\b2.bmp", 0);




 }

 void drawEasyPage()
 {
	 iFilledRectangle(0, 0, 1000, 600);
	// iShowBMP2(0, 0, "image\\ok.bmp", 0);
	 iShowImage(0, dy, 1000, 600, back1);
	 iShowImage(0, dy1, 1000, 600, back2);
	 iShowBMP2(playerx, playery, "image\\eu.bmp", 0);
	 iShowBMP2(x, y, "image\\v1.bmp", 0);
	 iShowBMP2(a, b, "image\\v2.bmp", 0);
	 iShowBMP2(c, d, "image\\v3.bmp", 0);


	 //v1
	 y = y - 0.8;

	 if (y <= -105)
	 {
		 y = 601;
		 x = 310 + rand() % 350;
	 }collision();

	 // v2
	 b = b - .5;
	 if (b <= -105)
	 {
		 b = 601;
		 a = 300 + rand() % 370;
	 }
	 collision();


	 //v3
	 d = d - .9;
	 if (d <=-105)
	 {
		 d = 601;
		 c = 300 + rand() % 360;
	 }

	 collision();

	 // other car collision
	 if ((a <= x && a + 42 >= x) || (c <= x && c + 42 >= x))
	 {
		 x = x + 42;
		 y = y + 42;
	 }
	 if ((x <= a && x+ 42 >= a) || (c <= a &&c + 42 >=a))
	 {
		 a= a + 42;
		 b =b + 42;
	 } 
	 if ((x <= c && x + 42 >= c) || (a <= c &&a + 42 >= c))
	 {
		 c = c + 42;
		 d = d + 42;
	 }






	 iShowBMP2(c1x, c1y, "image\\coin1.bmp", 0);
	 iShowBMP2(c2x, c2y, "image\\coin2.bmp", 0);
	 iShowBMP2(c3x, c3y, "image\\coin3.bmp", 0);
	 c1y = c1y - .7;
	 if (c1y <= 0 || c1x>600 || c1x<350)
	 {
		 c1y = 600;
		 c1x = 380 + rand() % 303;
	 }
	 coincollision();

	 c2y = c2y - .75;
	 if (c2y <= 0 || c2x>600 || c2x<350)
	 {
		 c2y = 600;
		 c2x = 380 + rand() % 551;
	 }
	 coincollision();

	 c3y = c3y - .8;
	 if (c3y <= 0 || c3x>600 || c3x<350)
	 {
		 c3y = 600;
		 c3x = 380 + rand() % 463;
	 }
	 coincollision();


 }


 void drawMediumpage()
 {

	 iFilledRectangle(0, 0, 1000, 600);
	 iShowBMP2(0, 0, "image\\ro.bmp", 0);
	 



 }

 
 void drawHardpage()
 {

	 iFilledRectangle(0, 0, 1000, 600);
	 iShowBMP2(0, 0, "image\\ro.bmp", 0);




 }

















void  startButtonClickHandler()
{

	homepage = 0; startpage = 1;
}


void aboutButtonClickHandler()
{
	homepage = 0;
	startpage = 0;
	aboutpage = 1;
}

void instructionButtonClickHandler()
{
	homepage = 0;
	startpage = 0;
	aboutpage = 0;
	instructionpage = 1;



}
void scoreButtonClickHandler()
{
	homepage = 0;
	startpage = 0;
	aboutpage = 0;
	instructionpage = 0;
	scorepage = 1;


}


void  backButtonClickHandler()
{

	homepage = 1;
	startpage = 0;
	aboutpage = 0;
	instructionpage = 0;
	scorepage = 0;
}

void easyButtonClickHandler()
{
	scorepage = 0;
	homepage = 0;
	startpage = 0;
	aboutpage = 0;
	instructionpage = 0;
	easypage = 1;

}


void mediumButtonClickHandler()

{
	scorepage = 0;
	homepage = 0;
	startpage = 0;
	aboutpage = 0;
	instructionpage = 0;
	easypage = 0;
	mediumpage = 1;
}
void hardButtonClickHandler()

{
	scorepage = 0;
	homepage = 0;
	startpage = 0;
	aboutpage = 0;
	instructionpage = 0;
	easypage = 0;
	mediumpage = 0;
	hardpage = 1;
}

void change()
{
	if (dy <= -600)
	{
		dy = 600;
	}
	dy -= 4;
	if (dy1 <= -600)
	{
		dy1 = 600;
	}
	dy1 -= 4;
}







int main()
{
	
	///srand((unsigned)time(NULL));
	iInitialize(1000, 600, "CAR RACING GAME ");
	///updated see the documentations

	iSetTimer(10, change);
	back1 = iLoadImage("image\\no.jpg");
	back2 = back1;
	iStart();
	return 0;
}