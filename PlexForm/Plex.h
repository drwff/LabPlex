#pragma once
#include"TLine.h"
#include"TBase.h"
#include"TLine.h"

class Plex {
private:
	TBase* start;
public:
	Plex(TLine* tmp = nullptr);
	Plex(const Plex& tmp);
	Plex& operator=(const Plex& tmp);
	~Plex() {
		delete start;
	}
	void InsertLine(TLine* le, TLine* ri); //присоединить линию за точку к плексу
	void addLine(TLine* tm); //добавить линию в плекс 

	TLine* SearchLineWithPoint(const std::string& name); //поиск линии в плексе по имени точки, входящей в нее 
	TLine* SearchLineWithPoint(int x, int y);//найти линию в плексе, ближайшую к точке

	TPoint* SearchPoint(const std::string& name); //поиск точки в плексе по имен
	TPoint* SearchPoint(int x, int y); //найти точку в плексе по координатам

	void Move(int dx, int dy); //подвинуть всю структуру
	void Draw(System::Drawing::Graphics^ g);
	bool Empty()const;
	void saveFile();
};

