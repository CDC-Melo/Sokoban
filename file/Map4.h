#pragma once
#include <QtWidgets/QApplication>
#include<QGraphicsScene>
#include<QGraphicsItem>
#include<QGraphicsView>
#include<QGraphicsRectItem>
#include<QBrush>
#include<QImage>
#include<QBrush>
#include<qpushbutton.h>
#include<QKeyEvent>
//
#include"Player.h"
#include"Boxes.h"
#include"Block.h"
#include"Spot.h"
#include"Step.h"
#include"Userfile.h"
#include"parameter.h"
class Map4 :public QObject
{
	Q_OBJECT
public:
	Map4(QGraphicsScene* scene);
	Map4();
	~Map4();
	Userfile * userfile;
	Step * step;
private:
	QGraphicsScene * scene_;
	Block * block[52];
	Boxes*box[6];
	Player *player;
	Spot* spot[6];
	QPushButton * button[buttonNum];
	qreal sit[10000];   //last_step，存储坐标的数组
	int flag = 1;        //用来改变数组坐标的flag
public slots:
	void Player_Up();
	void Player_Down();
	void Player_Right();
	void Player_Left();
	void Player_Restart();
	void pen();   //last_step
	void receivePos();
};