#pragma once
#include<string>
//перечень названия типов фигур
enum TypeFigure { _Point, _Line, _Rectangle, _Curve };

class TBase 
{
protected:
	TypeFigure Figure;// тип фигуры, значений : перечисленные названия
	std::string Name; // имя фигуры
	bool Visible; // видимость 
	int Col; // цвет
	int R; // размер области притяжения
	int Width; // ширина
	int Rat; // рейтинг
public:
	TBase(TypeFigure _type = _Point, std::string _name = "", int _r = 7, bool _visible = true,
		int _color = 0, int _width = 15, int _rating = 1) :
		Figure(_type), Name(_name), Visible(_visible), Col(_color), R(_r),
		Width(_width), Rat(_rating) {};
	virtual ~TBase() {};
	TBase(const TBase& tmp);
	/******получение значений полей класса*****/
	TypeFigure GetType() const;
	bool GetVisability() const;
	int GetWidth() const;
	int GetRating() const;
	std::string GetName() const;
	int GetColor() const;
	/*****установка значений полей класса****/
	void SetColor(int _c);
	void SetWidth(int _width);
	void SetVisability(bool _vis);

	virtual void IncRating() = 0; //  инкрементирует рейтинг, не давая стать больше 3
	virtual void Draw(System::Drawing::Graphics^ g) = 0; // рисование
	virtual bool IsFigure(int _x, int _y) = 0; //попали ли координаты в какую-либо фигуру
	virtual std::string to_string() = 0; // упаковка содержимого в строку с разделителем
};


