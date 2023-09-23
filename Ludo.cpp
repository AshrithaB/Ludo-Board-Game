#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<GL/glut.h>

int f1, f2, g1, g2, k1, k2, l1, l2, ply1, ply2, h1, h2, h3, h4, s1, s2, u, v, r1, op, w, dice1, enter, home = 0, i, ch1, ch, p1, p2, ra1, z, z1, za1;

float a[100][100]={{-0.4,-0.325},{-0.1375,-0.7275},{-0.1375,-0.61},{-0.1375,-0.4925},{-0.1375,-0.375},{-0.1375,-0.2575},{-0.2575,-0.14},{-0.375,-0.14},{-0.495,-0.14},{-0.6110,-0.14},{-0.7275,-0.14},{-0.84,-0.14},{-0.84,0.005},{-0.84,0.1375},{-0.7275,0.1375},{-0.6110,0.1375},{-0.495,0.1375},{-0.375,0.1375},{-0.2575,0.1375},{-0.1375,0.2575},{-0.1375,0.375},{-0.1375,0.4925},{-0.1375,0.61},{-0.1375,0.7275},{-0.1375,0.845},{0,0.845},{0.1375,0.845},{0.1375,0.7275},{0.1375,0.61},{0.1375,0.4925},{0.1375,0.375},{0.1375,0.2575},{0.2575,0.1375},{0.375,0.1375},{0.495,0.14},{0.6110,0.1375},{0.7275,0.1375},{0.84,0.1375},{0.84,0.005},{0.84,-0.14},{0.7275,-0.14},{0.6110,-0.14},{0.495,-0.14},{0.375,-0.14},{0.2575,-0.14},{0.1375,-0.2575},{0.1375,-0.375},{0.1375,-0.4925},{0.1375,-0.61},{0.1375,-0.7275},{0.1375,-0.845},{0,-0.845},{0,-0.7275},{0,-0.61},{0,-0.4925},{0,-0.375},{0,-0.2575}};
float b[100][100]={{-0.4,-0.325},{0.1375,0.7275},{0.1375,0.61},{0.1375,0.4925},{0.1375,0.375},{0.1375,0.2575},{0.2575,0.1375},{0.375,0.1375},{0.495,0.14},{0.6110,0.1375},{0.7275,0.1375},{0.84,0.1375},{0.84,0.005},{0.84,-0.14},{0.7275,-0.14},{0.6110,-0.14},{0.495,-.14},{0.375,-0.14},{0.2575,-0.14},{0.1375,-0.2575},{0.1375,-0.375},{0.1375,-0.4925},{0.1375,-0.61},{0.1375,-0.7275},{0.1375,-0.845},{0,-0.845},{-0.1375,-0.845},{-0.1375,-0.7275},{-0.1375,-0.61},{-0.1375,-0.4925},{-0.1375,-0.375},{-0.1375,-0.2575},{-0.2575,-0.14},{-0.375,-0.14},{-0.495,-0.14},{-0.6110,-0.14},{-0.7275,-0.14},{-0.84,-0.14},{-0.84,0.005},{-0.84,0.1375},{-0.7275,0.1375},{-0.6110,0.1375},{-0.495,0.1375},{-0.375,0.1375},{-0.2575,0.1375},{-0.1375,0.2575},{-0.1375,0.375},{-0.1375,0.4925},{-0.1375,0.61},{-0.1375,0.7275},{-0.1375,0.845},{0,0.845},{0,0.7275},{0,0.61},{0,0.4925},{0,0.375},{0,0.2575}};
float c[10][10]={{-0.5,-0.7},{-0.7,-0.5}};
float d[10][10]={{0.5,0.7},{0.7,0.5}};																																																														
int A[100][100]={{430,527},{630,608},{626,567},{628,528},{626,485},{629,441},{585,397},{544,398},{502,400},{463,397},{420,395},{381,397},{380,350},{377,304},{421,303},{460,304},{501,301},{541,302},{585,300},{627,260},{627,221},{627,177},{627,138},{627,97},{627,58},{676,56},{723,54},{723,96},{725,138},{724,176},{725,216},{723,258},{764,300},{809,303},{850,304},{890,304},{931,303},{972,303},{971,352},{973,398},{932,396},{890,396},{851,395},{811,395},{768,396},{724,441},{725,484},{724,523},{725,562},{725,606},{728,645},{677,645},{677,608},{677,565},{677,522},{677,485},{677,442}};
int B[100][100]={{853,104},{723,96},{725,138},{724,176},{725,216},{723,258},{764,300},{809,303},{850,304},{890,304},{931,303},{972,303},{971,352},{973,398},{932,396},{890,396},{851,395},{811,395},{768,396},{724,441},{725,484},{724,523},{725,562},{725,606},{728,645},{677,645},{629,650},{630,608},{626,567},{628,528},{626,485},{629,441},{585,397},{544,398},{502,400},{463,397},{420,395},{381,397},{380,350},{377,304},{421,303},{460,304},{501,301},{541,302},{585,300},{627,260},{627,221},{627,177},{627,138},{627,97},{627,58},{676,56},{677,97},{677,137},{677,177},{677,219},{677,261}};

const char* col_name = "GLOBAL ACADEMY OF TECHNOLOGY";
const char* dept_name = "DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
const char* header = "A MINI PROJECT ON";
const char* b_title = "BY";
const char* g_title = "GUIDE";
const char* title = "LUDO BOARD GAME";
const char* s_name = "ASHRITHA KUMARI B\n1GA17CS185";
const char* t_name = "DR. BHAGYASHRI R HANJI\nMRS. HASEEBA YASEEN";
const char* start = "PLEASE ENTRY TO START";
const char* enter_msg = "PRESS  ENTER\n";
const char* wait_msg = "please wait...\n";
const char* about_game = "----------------------------------------------------------\t\t\t\t\t\t\t\t\nABOUT THE GAME\n----------------------------------------------------------\n\n\t\nLUDO (from Latin ludo, “I play”) is a simple board game, for two to four players,\nin which the players race their two or four tokens from start to finish according to\ndice rolls.\n\nINSTRUCTIONS :\t\nInput can be provided either from Mouse or from Keyboard.\t\n-> Mouse interaction: Right click on the screen and select the required option.\t\n-> Keyboard interaction: Press 'q' or 'Q' to quit.\t\nInstructions of how to play is displayed while playing";
const char* game_rules = "----------------------------------------------------------\t\t\t\t\t\t\t\t\nRULES OF THE GAME\n----------------------------------------------------------\n\n> At the start of the Ludo board game, the player's two tokens are placed in the\n   start area of their respective color.\n> Players take turns to throw the die.A token can only move out to starting square\n   if the player rolls a six or a one.\n> In each subsequent turn, the player moves a token forward 1 to 6 squares as\n   indicated by the die.\n> When a player throws a 6, the player may bring a new token onto the starting\n   square or may choose to move a token already in play.Any throw of six\n   results in another turn.\n> If a player cannot make a valid move they must pass the die to the next player.\n> If a player\'s token lands on a square containing an opponent\'s token, the\n   opponent\'s token is captured and returned to the starting area.\n> A token may not land on a square that already contains a token of the same\n   colour(unless playing doubling rules).\n> The tokens must move out and travel around the board to make it to home.\n> The first player to get both their tokens onto the home square will be considered\n   as winner.";
const char* inter_guide = "KEYBOARD OPTIONS :\nQ-To Quit.\n\nMOUSE OPTIONS :\nLEFT BUTTON - To Select\nthe coin, Click on the coin of\nPlayer to ROLL DICE and to \nmove.\nRIGHT BUTTON- To Restart.";
const char* draw_msg = "\t\t\tMATCH IS DRAW ! \n\n\n\n\n\n\n\n\n\n\n\n\n\n\nQ = QUIT   ENTER = RESTART";
const char* win1_msg = "\t\t\tCONGRATULATIONS  !\n\n\nPLAYER  1  WON  THE  GAME.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nQ = QUIT   ENTER = RESTART";
const char* win2_msg = "\t\t\tCONGRATULATIONS  !\n\n\nPLAYER  2  WON  THE  GAME.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nQ = QUIT   ENTER = RESTART";
void *en = GLUT_BITMAP_TIMES_ROMAN_24;

//void init();
//void myReshape(int w, int h);
//void dice(int y);
//void myMouse(int btn, int state, int x, int y);
//void key(unsigned char key, int x, int y);
//void call(int w);
//void display_result(const char* msg);
//void check_cond();
//void draw_box(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4,GLenum mode = GL_LINE_LOOP);
//void draw_line(float x1, float y1, float x2, float y2);
//void draw_arrow(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, float x5, float y5, float x6, float y6);
//void draw_semicircle(float x1, float y1, float x2, float y2, int a, int b, float rx, float ry, float r);
//void draw_circle(int a, int b, float rx, float ry, float r);
//void display_text_ludoboard();
//void players_turn();
//void display2();
//void player1(int ch);
//void player2(int ch1);
//void draw_ludoboard();
//void arrow();
//void wait();
//void display();
//void display_msg(float x, float y, float z, const char* msg, float a, float b, float c, void* font = GLUT_BITMAP_TIMES_ROMAN_24);
//void enter_display2(const char* about);
//void load_box();
//void display_enter1(const char* msg);
//void options(int id1);


void init()
{
	glClearColor(1,0.8,0.5,1);
	glEnable(GL_DEPTH_TEST);
	glutInitDisplayMode(GLUT_RGBA);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(1355,703);
	glutCreateWindow("LUDO - BOARD GAME");
}

void myReshape(int w,int h)
{
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if(w<=h)
		glOrtho(-1.0,1.0,-1.0*(GLfloat)h/(GLfloat)w,2.0*(GLfloat)h/(GLfloat)w,-20.0,20.0);
	else
		glOrtho(-1.0*(GLfloat)w/(GLfloat)h,1.0*(GLfloat)w/(GLfloat)h,-1.0,1.0,-20.0,20.0);
	glMatrixMode(GL_MODELVIEW);
	glutPostRedisplay();
}

void wait()
{
	for (int i = 1;i < 1000;i++)
		for (int j = 1;j < 9000;j++);
}

void draw_box(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, GLenum mode = GL_LINE_LOOP)
{
	glBegin(mode);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glVertex2f(x3, y3);
	glVertex2f(x4, y4);
	glEnd();
}

void draw_line(float x1, float y1, float x2, float y2)
{
	glBegin(GL_LINES);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glEnd();
}

void draw_arrow(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, float x5, float y5, float x6, float y6)
{
	glBegin(GL_LINE_STRIP);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glVertex2f(x3, y3);
	glEnd();
	glFlush();
	glBegin(GL_LINE_STRIP);
	glVertex2f(x4, y4);
	glVertex2f(x5, y5);
	glVertex2f(x6, y6);
	glEnd();
}

void draw_semicircle(float x1, float y1, float x2, float y2, int a, int b, float rx, float ry, float r)
{
	float ang;
	int i;
	glBegin(GL_LINE_LOOP);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	for (i = a;i <= b;i++)
	{
		ang = (3.1415 / 6) * i;
		glVertex2f(rx + (r * cos(ang)), ry + (r * sin(ang)));
	}
	glEnd();
	glFlush();
}

void draw_circle(int a, int b, float rx, float ry, float r)
{
	float ang;
	int i;
	for (i = a;i <= b;i++)
	{
		ang = (3.1415 / 6) * i;
		glVertex2f(rx + (r * cos(ang)), ry + (r * sin(ang)));
	}
}

void display_msg(float x, float y, float z, const char* msg, float a, float b, float c, void* font = GLUT_BITMAP_TIMES_ROMAN_24)
{
	int i;
	float dup_x = x;
	glPushMatrix();
	glLoadIdentity();
	glColor3f(a, b, c);
	glRasterPos3f(x, y, z);
	for (i = 0;msg[i] != '\0';i++)
	{
		if (msg[i] == '\n')
		{
			y -= 0.08;
			glRasterPos3f(x, y, z);
			x = dup_x;
		}
		if (msg[i] == '\t')
			x += 0.1;
		else
			glutBitmapCharacter(font, msg[i]);
	}
	glPopMatrix();
	glFlush();
}

void players_turn()
{
	float ang;
	int i;
	glPushMatrix();
	glLoadIdentity();
	if (ply1 == 1 && ply2 == 0)
		glColor3f(0, 1, 0);
	else
		glColor3f(0, 0, 0);
	draw_box(-0.4, -0.4, -0.8, -0.4, -0.8, -0.8, -0.4, -0.8);
	glColor3f(1, 1, 0);
	glFlush();
	glPopMatrix();
	glFlush();
	glPushMatrix();
	glLoadIdentity();
	if (ply1 == 0 && ply2 == 1)
		glColor3f(1, 1, 0);
	else
		glColor3f(0, 0, 0);
	draw_box(0.4, 0.4, 0.8, 0.4, 0.8, 0.8, 0.4, 0.8);
	glColor3f(0, 1, 0);
	glFlush();
	glPopMatrix();
	glFlush();
}

void display_result(const char* msg)
{
	int i;
	float x = -0.4, y = 0.6, z = 0;
	glPushMatrix();
	glLoadIdentity();
	glColor3f(0.9, 0.7, 0.6);
	glRasterPos3f(x, y, z);
	for (i = 0;msg[i] != '\0';i++)
	{
		if (msg[i] == '\n')
		{
			y -= 0.08;
			glRasterPos3f(x, y, z);
		}
		if (msg[i] == '\t')
			x -= 0.03;
		else
			glutBitmapCharacter(en, msg[i]);
	}
	glPopMatrix();
	glFlush();
	enter = 1;
}

void check_cond()
{
	glClearColor(0, 0, 0, 0);
	if ((k1 > 27 && p1 == 0) && (k2 > 27 && p1 == 0) && (l1 > 27 && p2 == 0) && (l2 > 27 && p2 == 0))
	{
		dice1 = 0;
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glClearColor(0, 0, 0, 0);
		glFlush();
		display_result(draw_msg);
	}
	else if (s1 == 2)
	{
		dice1 = 0;
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glClearColor(0, 0, 0, 0);
		glFlush();
		display_result(win1_msg);
	}
	else if (s2 == 2)
	{
		dice1 = 0;
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glClearColor(0, 0, 0, 0);
		glFlush();
		display_result(win2_msg);
	}
}

void display2()
{
	glColor3f(1, 1, 1);
	draw_arrow(0.15, -0.84, 0, -0.84, 0, -0.6, -0.04, -0.64, 0, -0.6, 0.04, -0.64);
	draw_arrow(-0.15, 0.84, 0, 0.84, 0, 0.6, -0.04, 0.64, 0, 0.6, 0.04, 0.64);
	draw_line(0.7275, 0.14, 0.84, 0.14);
	draw_arrow(0.84, 0.14, 0.84, -0.1375, 0.7275, -0.1375, 0.76, -0.1111, 0.7275, -0.1375, 0.76, -0.16);
	draw_line(-0.7275, -0.14, -0.84, -0.14);
	draw_arrow(-0.84, -0.14, -0.84, 0.1375, -0.7275, 0.1375, -0.76, 0.1111, -0.7275, 0.1375, -0.76, 0.16);

	glPointSize(25);
	glBegin(GL_POINTS);
	glColor3f(0, 1, 0);
	glVertex2f(c[0][0], c[0][1]);
	glVertex2f(c[1][0], c[1][1]);
	glColor3f(1, 1, 0);
	glVertex2f(d[0][0], d[0][1]);
	glVertex2f(d[1][0], d[1][1]);
	glEnd();
	glColor3f(0, 1, 0);
	glFlush();
	players_turn();
	check_cond();
}

void display_text_ludoboard()
{
	int i;
	float ang;
	glLineWidth(5);
	glColor3f(1, 0, 0);

	glBegin(GL_LINE_LOOP);	//L	
	glVertex2f(-0.65, 0.8);
	glVertex2f(-0.65, 0.4);
	glVertex2f(-0.35, 0.4);
	glVertex2f(-0.35, 0.5);
	glVertex2f(-0.55, 0.5);
	glVertex2f(-0.55, 0.8);
	glEnd();
	glFlush();

	glBegin(GL_LINE_LOOP);	//U
	glVertex2f(-0.1, 0.55);
	for (i = 6;i <= 12;i++)
	{
		ang = (3.1415 / 6) * i;
		glVertex2f(-0.15 - (0.05 * cos(ang)), 0.55 + (0.05 * sin(ang)));
	}
	glVertex2f(-0.2, 0.55);
	glVertex2f(-0.2, 0.8);
	glVertex2f(-0.3, 0.8);
	glVertex2f(-0.3, 0.55);
	draw_circle(6, 12, -0.15, 0.55, 0.15);
	glVertex2f(0.0, 0.55);
	glVertex2f(0.0, 0.8);
	glVertex2f(-0.1, 0.8);
	glEnd();
	glFlush();

	draw_semicircle(0.1, 0.8, 0.1, 0.4, 3, 9, 0.2, 0.6, -0.2);	//D
	draw_semicircle(0.2, 0.7, 0.2, 0.5, 3, 9, 0.2, 0.6, -0.1);

	draw_semicircle(0.6, 0.75, 0.6, 0.75, 3, 14, 0.6, 0.6, 0.15);	//O
	draw_semicircle(0.6, 0.65, 0.6, 0.65, 3, 14, 0.6, 0.6, 0.05);

	glBegin(GL_LINE_LOOP);  //B
	glVertex2f(-0.65, 0.2);
	glVertex2f(-0.75, 0.2);
	glVertex2f(-0.75, -0.2);
	glVertex2f(-0.65, -0.2);
	draw_circle(3, 9, -0.6, -0.1, -0.1);
	glVertex2f(-0.65, 0);
	draw_circle(3, 9, -0.6, 0.1, -0.1);
	glEnd();
	glFlush();
	draw_semicircle(-0.67, -0.05, -0.67, -0.15, 3, 9, -0.65, -0.1, -0.05);
	draw_semicircle(-0.67, 0.15, -0.67, 0.05, 3, 9, -0.65, 0.1, -0.05);

	draw_semicircle(-0.3, 0.15, -0.3, 0.15, 3, 14, -0.3, 0.0, 0.15);  //O
	draw_semicircle(-0.3, 0.05, -0.3, 0.05, 3, 14, -0.3, 0.0, 0.05);

	glBegin(GL_LINE_LOOP);	//A
	glVertex2f(0.2, 0.05);
	draw_circle(1, 6, 0.05, 0.05, 0.15);
	glVertex2f(-0.1, -0.2);
	glVertex2f(0.0, -0.2);
	glVertex2f(0.0, -0.1);
	glVertex2f(0.1, -0.1);
	glVertex2f(0.1, -0.2);
	glVertex2f(0.2, -0.2);
	glEnd();
	glFlush();
	draw_semicircle(0.0, 0.0, 0.1, 0.0, 1, 6, 0.05, 0.05, 0.05);

	glBegin(GL_LINE_LOOP);	//R
	glVertex2f(0.45, 0.2);
	glVertex2f(0.3, 0.2);
	glVertex2f(0.3, -0.2);
	glVertex2f(0.4, -0.2);
	glVertex2f(0.4, -0.05);
	glVertex2f(0.45, -0.2);
	glVertex2f(0.55, -0.2);
	glVertex2f(0.45, -0.05);
	draw_circle(3, 9, 0.45, 0.08, -0.12);
	glEnd();
	glFlush();
	draw_semicircle(0.4, 0.13, 0.4, 0.03, 3, 9, 0.43, 0.08, -0.05);

	draw_semicircle(0.65, 0.2, 0.65, -0.2, 3, 9, 0.75, 0.0, -0.2);	//D
	draw_semicircle(0.75, 0.1, 0.75, 0.0, 3, 9, 0.75, 0.0, -0.1);
}

void draw_ludoboard()
{
	z = z1 = dice1 = ply1 = 1;
	f1=f2=g1=g2=k1=k2=l1=l2=ply2=h1=h2=h3=h4=s1=s2=p1=p2=enter = 0;
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2);

	glColor3f(0, 0, 0);
	draw_box(0.9, 0.9, -0.9, 0.9, -0.9, -0.9, 0.9, -0.9, GL_POLYGON);

	glColor3f(0, 0, 1);
	glBegin(GL_TRIANGLES);		//Top part Home
	glVertex2f(0.2, 0.2);
	glVertex2f(-0.2, 0.2);
	glVertex2f(0, 0);
	glEnd();

	glBegin(GL_POLYGON);		//TOP ARROW
	glVertex2f(-0.075, 0.785);
	glVertex2f(-0.075, 0.2);
	glVertex2f(0.075, 0.2);
	glVertex2f(0.075, 0.67);
	glVertex2f(0.2, 0.67);
	glVertex2f(0.2, 0.785);
	glEnd();

	glColor3f(1, 0, 0);
	glBegin(GL_TRIANGLES);		//Bottom part Home
	glVertex2f(-0.2, -0.2);
	glVertex2f(0.2, -0.2);
	glVertex2f(0, 0);
	glEnd();

	glBegin(GL_POLYGON);		//BOTTOM ARROW
	glColor3f(1, 0, 0);
	glVertex2f(0.075, -0.785);
	glVertex2f(0.075, -0.2);
	glVertex2f(-0.075, -0.2);
	glVertex2f(-0.075, -0.67);
	glVertex2f(-0.2, -0.67);
	glVertex2f(-0.2, -0.785);
	glEnd();

	glLineWidth(8);
	glColor3f(1, 1, 1);
	draw_box(0.9, 0.9, -0.9, 0.9, -0.9, -0.9, 0.9, -0.9);	//Main BOX Outline
	glLineWidth(2);
	draw_box(-0.4, -0.4, -0.8, -0.4, -0.8, -0.8, -0.4, -0.8);	//Player coins (-,-) BOX
	draw_box(-0.45, -0.65, -0.55, -0.65, -0.55, -0.75, -0.45, -0.75);	//Player coins keeping (-,-) BOX
	draw_box(-0.75, -0.45, -0.65, -0.45, -0.65, -0.55, -0.75, -0.55);
	draw_box(0.4, 0.4, 0.8, 0.4, 0.8, 0.8, 0.4, 0.8);			//Player coins (+,+) BOX
	draw_box(0.45, 0.65, 0.55, 0.65, 0.55, 0.75, 0.45, 0.75);	//Player coins  keeping (+,+) BOX
	draw_box(0.75, 0.45, 0.65, 0.45, 0.65, 0.55, 0.75, 0.55);

	draw_line(-0.2, 0.9, -0.2, -0.9);	//Lines 
	draw_line(0.2, 0.9, 0.2, -0.9);
	draw_line(-0.9, 0.2, 0.9, 0.2);
	draw_line(-0.9, -0.2, 0.9, -0.2);
	draw_line(-0.075, -0.2, -0.075, -0.9);
	draw_line(0.075, -0.2, 0.075, -0.9);
	draw_line(-0.075, 0.2, -0.075, 0.9);
	draw_line(0.075, 0.2, 0.075, 0.9);
	draw_line(-0.9, 0.075, -0.2, 0.075);
	draw_line(-0.9, -0.075, -0.2, -0.075);
	draw_line(0.9, 0.075, 0.2, 0.075);
	draw_line(0.9, -0.075, 0.2, -0.075);
	draw_line(-0.2, -0.784, 0.2, -0.784);
	draw_line(-0.2, -0.668, 0.2, -0.668);
	draw_line(-0.2, -0.552, 0.2, -0.552);
	draw_line(-0.2, -0.436, 0.2, -0.436);
	draw_line(-0.2, -0.32, 0.2, -0.32);
	draw_line(-0.2, 0.784, 0.2, 0.784);
	draw_line(-0.2, 0.668, 0.2, 0.668);
	draw_line(-0.2, 0.552, 0.2, 0.552);
	draw_line(-0.2, 0.436, 0.2, 0.436);
	draw_line(-0.2, 0.32, 0.2, 0.32);
	draw_line(0.784, 0.2, 0.784, -0.2);
	draw_line(0.668, 0.2, 0.668, -0.2);
	draw_line(0.552, 0.2, 0.552, -0.2);
	draw_line(0.436, 0.2, 0.436, -0.2);
	draw_line(0.32, 0.2, 0.32, -0.2);
	draw_line(-0.784, 0.2, -0.784, -0.2);
	draw_line(-0.668, 0.2, -0.668, -0.2);
	draw_line(-0.552, 0.2, -0.552, -0.2);
	draw_line(-0.436, 0.2, -0.436, -0.2);
	draw_line(-0.32, 0.2, -0.32, -0.2);

	draw_box(-1.09, 0.9, -1.85, 0.9, -1.85, 0.1, -1.09, 0.1);
	display_msg(-1.8, 0.8, 0, inter_guide, 0.5, 0, 0.8, GLUT_BITMAP_HELVETICA_18);
	glFlush();
	players_turn();
	display2();
}

void arrow()
{
	glColor3f(1, 1, 1);
	draw_box(0.7275, 0.14, 0.84, 0.14, 0.84, -0.1375, 0.7275, -0.1375, GL_LINE_STRIP);
	draw_line(0.7275, -0.1375, 0.76, -0.1111);
	draw_line(0.7275, -0.1375, 0.76, -0.16);
	draw_box(-0.7275, -0.14, -0.84, -0.14, -0.84, 0.1375, -0.7275, 0.1375, GL_LINE_STRIP);
	draw_line(-0.7275, 0.1375, -0.76, 0.1111);
	draw_line(-0.7275, 0.1375, -0.76, 0.16);
	/*glBegin(GL_LINE_STRIP);
	glVertex2f(0.7275, 0.14);
	glVertex2f(0.84, 0.14);
	glVertex2f(0.84, -0.1375);
	glVertex2f(0.7275, -0.1375);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0.7275, -0.1375);
	glVertex2f(0.76, -0.1111);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0.7275, -0.1375);
	glVertex2f(0.76, -0.16);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(-0.7275, -0.14);
	glVertex2f(-0.84, -0.14);
	glVertex2f(-0.84, 0.1375);
	glVertex2f(-0.7275, 0.1375);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.7275, 0.1375);
	glVertex2f(-0.76, 0.1111);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.7275, 0.1375);
	glVertex2f(-0.76, 0.16);
	glEnd();
	glFlush();*/
}

void player1(int ch)
{
	GLint rand();
	if ((f1 == 0) && (h1 == 0))
	{
		glBegin(GL_POINTS);
		glVertex2f(c[0][0], c[0][1]);
		glEnd();
		glFlush();
	}
	else if (h1 == 1)
	{
		glBegin(GL_POINTS);
		glVertex2f(0.7, -0.5);
		glEnd();
	}
	else
	{
		glBegin(GL_POINTS);
		glVertex2f(a[k1][0], a[k1][1]);
		glEnd();
	}
	if ((f2 == 0) && (h2 == 0))
	{
		glBegin(GL_POINTS);
		glVertex2f(c[1][0], c[1][1]);
		glEnd();
	}
	else if (h2 == 1)
	{
		glBegin(GL_POINTS);
		glVertex2f(0.5, -0.7);
		glEnd();
	}
	else
	{
		glBegin(GL_POINTS);
		glVertex2f(a[k2][0], a[k2][1]);
		glEnd();
	}
	glColor3f(0, 1, 0);
	if (h1 == 1)
		ch = 2;
	else if (h2 == 1)
		ch = 1;
	else if (((ra1 + k1 > 57) || (ra1 + k1 > 51 && p1 == 0)) && ((ra1 + k2 > 57) || (ra1 + k2 > 51 && p1 == 0)))
	{
		ply1 = 0;
		ply2 = 1;

	}
	else if ((ra1 + k1 > 57 && ch == 1) || (ra1 + k1 > 51 && p1 == 0 && ch == 1))
	{
		if (a[ra1 + k2][0] == c[0][0] && a[ra1 + k2][1] == c[0][1])
			ch = 776;
		else
			ch = 2;
	}
	else if ((ra1 + k2 > 57 && ch == 2) || (ra1 + k2 > 51 && p1 == 0 && ch == 2))
	{
		if (a[ra1 + k1][0] == c[1][0] && a[ra1 + k1][1] == c[1][1])
			ch = 776;
		else
			ch = 1;
	}
	if (ch == 1 && a[ra1 + k1][0] == c[1][0] && a[ra1 + k1][1] == c[1][1])
	{
		display2();
		return;
	}
	else if (ch == 2 && a[ra1 + k2][0] == c[0][0] && a[ra1 + k2][1] == c[0][1])
	{
		display2();
		return;
	}
	switch (ch)
	{
		case 1: if (f1 == 0 && (ra1 == 6 || ra1 == 1))                    //y==4;
				{
					ra1 = 1;
					f1 = 1;
				}
				else
				{
					z = 1;
					z1 = 0;
					ply1 = 0;
					ply2 = 1;
				}
				if ((f1 == 1) && (ra1 + k1 <= 57) && (h1 == 0))
				{
					for (i = 0;i < 2;i++)
					{
						if (a[ra1 + k1][0] == d[i][0] && a[ra1 + k1][1] == d[i][1])
						{
							if (i == 0) { g1 = 0;l1 = 0;d[0][0] = 0.5;d[0][1] = 0.7; }
							if (i == 1) { g2 = 0;l2 = 0;d[1][0] = 0.7;d[1][1] = 0.5; }
							p1 = 1;
						}
					}
					if (((ra1 + k1) > 51 && p1 == 1) || (ra1 + k1 <= 51))
					{
						glColor3f(0, 0, 0);
						if (k1 == 0)
						{
							glBegin(GL_POINTS);
							glVertex2f(-0.5, -0.7);
							glEnd();
						}
						else if (k1 == 1 || k1 == 52 || k1 == 53 || k1 == 54 || k1 == 55 || k1 == 56)
							glColor3f(1, 0, 0);
						else if (k1 == 27)
							glColor3f(0, 0, 1);
						glBegin(GL_POINTS);
						glVertex2f(a[k1][0], a[k1][1]);
						glEnd();
						glColor3f(0, 1, 0);
						k1 = ra1 + k1;
						z = 1;
						c[0][0] = a[k1][0];
						c[0][1] = a[k1][1];
						if (ra1 == 6)
						{
							z1 = 0;
							ply1 = 1;
							ply2 = 0;
						}
						else
						{
							ply1 = 0;
							ply2 = 1;
						}
					}
				}
				ch = 0;
				if (k1 == 57)
				{
					k1 = 0;
					h1 = 1;
					glBegin(GL_POINTS);
					c[0][0] = 0.7;c[0][1] = -0.5;
					glVertex2f(c[0][0], c[0][1]);
					s1++;
					glEnd();
				}
				break;
		case 2: if (f2 == 0 && (ra1 == 6 || ra1 == 1))
				{
					ra1 = 1;
					f2 = 1;
				}
				else
				{
					z = 1;
					z1 = 0;
					ply1 = 0;
					ply2 = 1;
				}
				if ((f2 == 1) && (ra1 + k2 <= 57) && (h2 == 0))
				{
					for (i = 0;i < 2;i++)
					{
						if (a[ra1 + k2][0] == d[i][0] && a[ra1 + k2][1] == d[i][1])
						{
							if (i == 0) { g1 = 0;l1 = 0;d[0][0] = 0.5;d[0][1] = 0.7; }
							if (i == 1) { g2 = 0;l2 = 0;d[1][0] = 0.7;d[1][1] = 0.5; }
							p1 = 1;
						}
					}
					if (((ra1 + k2) > 51 && p1 == 1) || (ra1 + k2 <= 51))
					{
						glColor3f(0, 0, 0);
						if (k2 == 0)
						{
							glBegin(GL_POINTS);
							glVertex2f(-0.7, -0.5);
							glEnd();
						}
						else if (k2==1 || k2==52 || k2==53 || k2==54 || k2==55 || k2==56)
							glColor3f(1, 0, 0);
						else if (k2 == 27)
							glColor3f(0, 0, 1);
						glBegin(GL_POINTS);
						glVertex2f(a[k2][0], a[k2][1]);
						glEnd();
						glColor3f(0, 1, 0);
						k2 = ra1 + k2;
						z = 1;
						c[1][0] = a[k2][0];
						c[1][1] = a[k2][1];
						if (ra1 == 6)
						{
							z1 = 0;
							ply1 = 1;
							ply2 = 0;
						}
						else
						{
							ply1 = 0;
							ply2 = 1;
						}
					}
				}
				if (k2 == 57)
				{
					k2 = 0;
					h2 = 1;
					c[1][0] = 0.5;c[1][1] = -0.7;
					s1++;
				}
				break;
		case 776: ply1 = 0;
				  ply2 = 1;
				  break;
	}
	ch = 0;
	glColor3f(1, 0, 1);
	arrow();
	display2();
}

void player2(int ch1)
{
	glColor3f(1, 0, 1);
	if ((g1 == 0) && (h3 == 0))
	{
		glBegin(GL_POINTS);
		glVertex2f(d[0][0], d[0][1]);
		glEnd();
	}
	else if (h3 == 1)
	{
		glBegin(GL_POINTS);
		glVertex2f(-0.7, 0.5);
		glEnd();
	}
	else
	{
		glBegin(GL_POINTS);
		glVertex2f(b[l1][0], b[l1][1]);
		glEnd();
	}
	if ((g2 == 0) && (h4 == 0))
	{
		glBegin(GL_POINTS);
		glVertex2f(d[1][0], d[1][1]);
		glEnd();
	}
	else if (h4 == 1)
	{
		glBegin(GL_POINTS);
		glVertex2f(-0.5, 0.7);
		glEnd();
	}
	else
	{
		glBegin(GL_POINTS);
		glVertex2f(b[l2][0], b[l2][1]);
		glEnd();
	}
	glColor3f(1, 0, 1);
	if (h3 == 1)
		ch1 = 2;
	else if (h4 == 1)
		ch1 = 1;
	else if ((ra1 + l1 > 57 || (ra1 + l1 > 51 && p2 == 0)) && (ra1 + l2 > 57 || (ra1 + l2 > 51 && p2 == 0)))
	{
		ply1 = 1;
		ply2 = 0;
	}
	else if ((ra1 + l1 > 57 && ch1 == 1) || (ra1 + l1 > 51 && p2 == 0 && ch1 == 1))
	{
		if (b[ra1 + l2][0] == d[0][0] && b[ra1 + l2][1] == d[0][1])
			ch1 = 776;
		else
			ch1 = 2;
	}
	else if ((ra1 + l2 > 57 && ch1 == 2) || (ra1 + l2 > 51 && p2 == 0 && ch1 == 2))
	{
		if (b[ra1 + l1][0] == d[1][0] && b[ra1 + l1][1] == d[1][1])
			ch1 = 776;
		else
			ch1 = 1;
	}
	if (ch1 == 1 && b[ra1 + l1][0] == d[1][0] && b[ra1 + l1][1] == d[1][1])
	{
		display2();
		return;
	}
	else if (ch1 == 2 && b[ra1 + l2][0] == d[0][0] && b[ra1 + l2][1] == d[0][1])
	{
		display2();
		return;
	}
	switch (ch1)
	{
	case 1: if (g1 == 0 && (ra1 == 6 || ra1 == 1))
	{
		ra1 = 1;
		g1 = 1;
	}
		  else
	{
		z = 1;
		z1 = 0;
		ply1 = 1;
		ply2 = 0;
	}
		  if ((g1 == 1) && (ra1 + l1 <= 57) && (h3 == 0))
		  {
			  for (i = 0;i < 2;i++)
			  {
				  if (b[ra1 + l1][0] == c[i][0] && b[ra1 + l1][1] == c[i][1])
				  {
					  p2 = 1;
					  if (i == 0) { f1 = 0;k1 = 0;c[0][0] = -0.5;c[0][1] = -0.7; }
					  if (i == 1) { f2 = 0;k2 = 0;c[1][0] = -0.7;c[1][1] = -0.5; }
				  }
			  }
			  if (((ra1 + l1) > 51 && p2 == 1) || (ra1 + l1 <= 51))
			  {
				  glColor3f(0, 0, 0);
				  if (l1 == 0)
				  {
					  glBegin(GL_POINTS);
					  glVertex2f(0.5, 0.7);
					  glEnd();
				  }
				  else if (l1 == 1 || l1 == 52 || l1 == 53 || l1 == 54 || l1 == 55 || l1 == 56)
					  glColor3f(0, 0, 1);
				  else if (l1 == 27)
					  glColor3f(1, 0, 0);
				  glBegin(GL_POINTS);
				  glVertex2f(b[l1][0], b[l1][1]);
				  glEnd();
				  glColor3f(1, 0, 1);
				  z = 1;
				  l1 = ra1 + l1;
				  d[0][0] = b[l1][0];
				  d[0][1] = b[l1][1];
				  if (ra1 == 6)
				  {
					  z1 = 0;
					  ply1 = 0;
					  ply2 = 1;
				  }
				  else
				  {
					  ply1 = 1;
					  ply2 = 0;
				  }
			  }
		  }
		  ch1 = 0;
		  if (l1 == 57)
		  {
			  l1 = 0;
			  h3 = 1;
			  d[0][0] = -0.7;d[0][1] = 0.5;
			  s2++;
		  }
		  break;
	case 2: if (g2 == 0 && (ra1 == 6 || ra1 == 1))
	{
		ra1 = 1;
		g2 = 1;
	}
		  else
	{
		z = 1;
		z1 = 0;
		ply1 = 1;
		ply2 = 0;
	}
		  if ((g2 == 1) && (ra1 + l2 <= 57) && (h4 == 0))
		  {
			  for (i = 0;i < 2;i++)
			  {
				  if (b[ra1 + l2][0] == c[i][0] && b[ra1 + l2][1] == c[i][1])
				  {
					  if (i == 0) { f1 = 0;k1 = 0;c[0][0] = -0.5;c[0][1] = -0.7; }
					  if (i == 1) { f2 = 0;k2 = 0;c[1][0] = -0.7;c[1][1] = -0.5; }
					  p2 = 1;
				  }
			  }
			  if (((ra1 + l2) > 51 && p2 == 1) || (ra1 + l2 <= 51))
			  {
				  glColor3f(0, 0, 0);
				  if (l2 == 0)
				  {
					  glBegin(GL_POINTS);
					  glVertex2f(0.7, 0.5);
					  glEnd();
				  }
				  else if (l2 == 1 || l2 == 52 || l2 == 53 || l2 == 54 || l2 == 55 || l2 == 56)
					  glColor3f(0, 0, 1);
				  else if (l2 == 27)
					  glColor3f(1, 0, 0);
				  glBegin(GL_POINTS);
				  glVertex2f(b[l2][0], b[l2][1]);
				  glEnd();
				  glColor3f(1, 0, 1);
				  z = 1;
				  l2 = ra1 + l2;
				  d[1][0] = b[l2][0];
				  d[1][1] = b[l2][1];
				  if (ra1 == 6)
				  {
					  z1 = 0;
					  ply1 = 0;
					  ply2 = 1;
				  }
				  else
				  {
					  ply1 = 1;
					  ply2 = 0;
				  }
			  }
		  }
		  if (l2 == 57)
		  {
			  l2 = 0;
			  h4 = 1;
			  d[1][0] = -0.5;d[1][1] = 0.7;
			  s2++;
		  }
		  break;
	case 776: ply1 = 1;ply2 = 0;
		break;
	}
	ch1 = 0;
	glColor3f(1, 0, 1);
	arrow();
	display2();
}

void call(int w)
{
	switch (w)
	{
		case 1: glClear(GL_COLOR_BUFFER_BIT);
				glClearColor(0, 0, 0, 0);
				glFlush();
				f1 = f2 = g1 = g2 = k1 = k2 = l1 = l2 = ply2 = h1 = h2 = h3 = h4 = s1 = s2 = p1 = p2 = 0;
				ply1 = 1;
				c[0][0] = -0.5;c[0][1] = -0.7;c[1][0] = -0.7;c[1][1] = -0.5;
				d[0][0] = 0.5;d[0][1] = 0.7;d[1][0] = 0.7;d[1][1] = 0.5;
				wait();
				break;
		case 2: exit(0);
				break;
	}
}

void enter_display2(const char* msg)
{
	glClear(GL_COLOR_BUFFER_BIT);
	display_text_ludoboard();
	display_msg(0.8, -0.8, 0, msg, 1, 1, 0);
	enter = 1;
}

void load_box()
{
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
	glVertex2f(-.4, -.7);
	glVertex2f(-.4, -.65);
	glVertex2f(.4, -.65);
	glVertex2f(.4, -.7);
	glColor3f(0.545, 0.6434, 0.743);
	float x1 = -0.39;
	float x2 = -0.30;
	for (int i = 0; i <= 8;i++)
	{
		draw_box(x1, -0.69, x1, -0.66, x2, -0.66, x2, -0.69, GL_QUADS);
		x1 += 0.08;
		x2 += 0.08;
		glFlush();
		for (int j = 0;j <= i;j++)
			wait();
	}
	enter_display2(enter_msg);
}

void display_enter1(const char* msg)
{
	glClear(GL_COLOR_BUFFER_BIT);
	display_text_ludoboard();
	display_msg(-0.16, -0.8, 0, msg, 1, 1, 0);
	load_box();
}

void dice(int y)
{
	glPointSize(5);
	glColor3f(1,1,1);
	draw_box(-0.82, 0.25, -0.82, 0.38, -0.69, 0.38, -0.69, 0.25, GL_QUADS);
	draw_box(-0.82, 0.38, -0.69, 0.38, -0.67, 0.4, -0.79, 0.4, GL_QUADS);
	draw_box(-0.69, 0.38, -0.67, 0.4, -0.67, 0.27, -0.69, 0.25, GL_QUADS);
	glColor3f(0,0,0);
	draw_box(-0.82, 0.38, -0.69, 0.38, -0.67, 0.4, -0.79, 0.4);
	draw_box(-0.69, 0.38, -0.67, 0.4, -0.67, 0.27, -0.69, 0.25);
	switch(y)
	{
	case 0:
	case 1:	glBegin(GL_POINTS);
			glVertex2f(-0.75,0.31);
			glEnd();
			break;
    case 2: glBegin(GL_POINTS);
			glVertex2f(-0.73,0.31);
            glVertex2f(-0.77,0.31);
			glEnd();
	        break;
	case 3: glBegin(GL_POINTS);
			glVertex2f(-0.72,0.31);
            glVertex2f(-0.755,0.31);
			glVertex2f(-0.79,0.31);
			glEnd();
	        break;
	case 4:glBegin(GL_POINTS);
			glVertex2f(-0.72,0.285);
            glVertex2f(-0.72,0.345);
			glVertex2f(-0.78,0.285);
			glVertex2f(-0.78,0.345);
			glEnd();
	        break;
	case 5:glBegin(GL_POINTS);
			glVertex2f(-0.72,0.285);
            glVertex2f(-0.72,0.345);
            glVertex2f(-0.75,0.31);
			glVertex2f(-0.78,0.285);
			glVertex2f(-0.78,0.345);
			glEnd();
	        break;
	case 6:glBegin(GL_POINTS);
			glVertex2f(-0.72,0.29);
            glVertex2f(-0.755,0.29);
            glVertex2f(-0.79,0.29);
			glVertex2f(-0.72,0.34);
			glVertex2f(-0.755,0.34);
			glVertex2f(-0.79,0.34);
			glEnd();
	        break;
	}
	glPointSize(25);
	glFlush();
}

void myMouse(int btn,int state,int x,int y)
{ 
	int C[10][10];
	GLint rand();
	int D[10][10];
	C[0][0]=A[k2][0];C[0][1]=A[k2][1];C[1][0]=A[k1][0];C[1][1]=A[k1][1];D[0][0]=B[l2][0];D[0][1]=B[l2][1];D[1][0]=B[l1][0];D[1][1]=B[l1][1];
	if(ra1+k1>57||ra1+k2>57||ra1+l1>57||ra1+l2>57)
		z=1;
	if(btn==GLUT_LEFT_BUTTON&&state==GLUT_DOWN)
	{	
		if(ply1==1&&ply2==0)
		{
			if(k1==0&&x>483&&x<517&&y<615&&y>580)
			{
				if(ra1==6||ra1==1)
					player1(1);
				else
					player1(2);
			}
			else if(k2==0&&x>412&&x<447&&y<545&&y>510)
			{
				if(ra1==6||ra1==1)
					player1(2);
				else
					player1(1);
			}
			else if(x>(C[0][0]-20)&&x<(C[0][0]+20)&&y>(C[0][1]-20)&&y<(C[0][1]+20)&&z1==1&&k2>0)
				player1(2);
			else if(x>(C[1][0]-20)&&x<(C[1][0]+20)&&y>(C[1][1]-20)&&y<(C[1][1]+20)&&z1==1&&k1>0)
				player1(1);
			if(z==1&&dice1==1)
			{	
				z=0;
				z1=1;
				ra1=rand()%2+rand()%3+rand()%2+rand()%3;
				if(ra1==0)
					ra1=1;
				dice(ra1);
			}
		}
		else
		{
			if(l1==0&&x>833&&x<873&&y>84&&y<124)
			{
				if(ra1==6||ra1==1)
					player2(1);
				else
					player2(2);
			}
			else if(l2==0&&x>906&&x<940&&y<190&&y>158)
			{
			
				if(ra1==6||ra1==1)
					player2(2);
				else
					player2(1);
			}
			else if(x>(D[0][0]-20)&&x<(D[0][0]+20)&&y>(D[0][1]-20)&&y<(D[0][1]+20)&&z1==1&&l2>0)
				player2(2);
			else if(x>(D[1][0]-20)&&x<(D[1][0]+20)&&y>(D[1][1]-20)&&y<(D[1][1]+20)&&z1==1&&l1>0)
				player2(1);
			if(z==1&&dice1==1)
			{	
				z=0;
				z1=1;
				ra1=rand()%2+rand()%3+rand()%2+rand()%3;
				if(ra1==0)
					ra1=1;
				dice(ra1);
			}
		}
	}		
}

void key(unsigned char key,int x,int y)
{
	if(key=='q' || key=='Q')
		call(2);
	if(key==13 && enter==1)
	{ 
		if (home)
		{
			glClear(GL_COLOR_BUFFER_BIT);
			display_text_ludoboard();
			home = 0;
		}
		else
		{
			call(1);
			wait();
			load_box();
			glClearColor(0.139, 0.0, 0.0, 0);
			draw_ludoboard();
		}
	}
}
	
void display(void)
{  
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	display_msg(-0.65, 0.75, 0, col_name, 0, 1, 0);
	display_msg(-1.0, 0.6, 0, dept_name, 0.7, 0, 1);
	display_msg(-0.35, 0.3, 0, header, 1, 0.5, 0);
	display_msg(-0.35, 0.15, 0, title, 1, 0, 0);
	display_msg(-1.3, -0.15, 0, b_title, 1, 0.5, 0);
	display_msg(1.0, -0.15, 0, g_title, 1, 0.5, 0);
	display_msg(-1.6, -0.3, 0, s_name, 0.6, 0, 0.6);
	display_msg(0.7, -0.3, 0, t_name, 0.7, 0.4, 0.4);
	display_msg(-0.4, -0.85, 0, start, 1, 0.1, 1);
	home = 1;
}

void options(int id)
{
	home = 0;
	switch(id)
	{
		case 1: glClearColor(0.025, 0.025, 0.090, 0);
				glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
				display_msg(-1.2, 0.7, 0, about_game, 1, 0, 0);
				break;
		case 2: glClearColor(0.153, 0.139, 0.228, 0);
				glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
				display_msg(-1.2, 0.75, 0, game_rules,1,1,0);
				break;
		case 3:	glClearColor(0, 0, 0, 0);
				glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
				display_enter1(wait_msg);
				break;
		case 4: exit(0);
	}
 }

void main(void)
{	
   enter=1;
   glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
   init();
   glutCreateMenu(options);
   glutAddMenuEntry("About the Game", 1);
   glutAddMenuEntry("Rules of the Game",2);
   glutAddMenuEntry("PLAY or RESTART",3);
   glutAddMenuEntry("Quit",4);
   glutMouseFunc(myMouse);
   glutKeyboardFunc(key);
   glutAttachMenu(GLUT_RIGHT_BUTTON);
   glutReshapeFunc(myReshape);
   glutDisplayFunc(display); 	
   glutMainLoop();  
}