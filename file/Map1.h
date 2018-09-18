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
#include"MessageBox.h"
#include"Userfile.h"
#include"parameter.h"
class Map1 :public QObject
{
	Q_OBJECT
public:
	Map1(QGraphicsScene* scene);
	Map1();
	~Map1();
	Step * step;
private:
	QGraphicsScene * scene_;
	Block * block[54];
	Boxes* box[3];
	Player *player;
	Spot* spot[3];
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