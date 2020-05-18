#pragma once
#include"TBase.h"

class TPoint : public TBase 
{
protected:
	int X, Y; //координаты, характеризующие положение точки
public:
	TPoint(int _x, int _y, std::string _name, int _r = 15) :
		TBase(_Point, _name, _r), X(_x), Y(_y) {};
	~TPoint() {};
	TPoint(const TPoint& Copy);
	TPoint& operator=(const TPoint& Copy);
	int GetX() const;
	int GetY() const;
	void MovePoint(int dx = 0, int dy = 0);
	void Draw(System::Drawing::Graphics^ g) override;
	void DecRating();//если rate > 0 то уменьшает его на 1 
	void IncRating() override;
	bool IsFigure(int _x, int _y) override;
	std::string to_string() override;
};

