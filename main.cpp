#include "micro game engine.h"

int main()
{
	//创建游戏对象
	Game game;
	//绘制窗口
	game.initWindow(1000, 800);
	game.setFrame(165);
	game.addObject("dola", "./Doraemon.png", jhVector2(0, 300), 1, 1,100, 100);
	game.addObject("xiaoxin", "./xiaoxin.png", jhVector2(650, 300), 1, 1, 100, 100);
	game.addObject("cat", "./cat.png", jhVector2(800, 200), 1, 1, 100, 100);
	game.addObject("pkq", "./pkq.png", jhVector2(800, 400), 1, 1, 100, 100);
	game.getObject("dola")->setSpeed(jhVector2(200, 10));
	//开始游戏
	game.gameStart();
}

//每帧调用一次
void Game::update()
{
	char dtt[30];
	sprintf(dtt, "deltatime:%ld",deltaTime);
	cleardevice();
	outtextxy(0, 0,dtt);
}

