
#include "TLine.h"

TLine::TLine(const TLine& tmp) : TBase(_Line, tmp.left->GetName() + ' ' + tmp.right->GetName(), 7) {

	if (tmp.left->GetType() == _Point) {
		left = new TPoint(*((TPoint*)tmp.left));
	}
	else {
		left = new TLine(*((TLine*)tmp.left));
	}
	if (tmp.right->GetType() == _Point) {
		right = new TPoint(*((TPoint*)tmp.right));
	}
	else {
		right = new TLine(*((TLine*)tmp.right));
	}
	Figure = tmp.Figure;
	Name = tmp.Name;
	Visible = tmp.Visible;
	Col = tmp.Col;
	R = tmp.R;
	Width = tmp.Width;
	Rat = tmp.Rat;
}

TLine& TLine::operator=(const TLine& tmp) {
	if (this == &tmp) return *this;
	if (left) delete left;
	if (right) delete right;

	/*т.к края линии могут определяться при помощи указателя на другую линию или непосредственно точкой*/
	if (tmp.left->GetType() == _Point) {
		left = new TPoint(*((TPoint*)tmp.left));
	}
	else {
		left = new TLine(*((TLine*)tmp.left)); 
	}
	if (tmp.right->GetType() == _Point) {
		right = new TPoint(*((TPoint*)tmp.right));
	}
	else {
		right = new TLine(*((TLine*)tmp.right));
	}
	Figure = tmp.Figure;
	Name = tmp.Name;
	Visible = tmp.Visible;
	Col = tmp.Col;
	R = tmp.R;
	Width = tmp.Width;
	Rat = tmp.Rat;
	return *this;
}

void TLine::SetLeft(TBase* tmp) {
	left = tmp;
}

void TLine::SetRight(TBase* tmp) {
	right = tmp;
}

TBase* TLine::GetLeft() {
	return left;
}

TBase* TLine::GetRight() {
	return right;
}

void TLine::Inverse() {
	TBase* tmp = left;
	left = right;
	right = tmp;
	std::string newName;
	int index = Name.find(' ');
	newName += Name.substr(index + 1, Name.size());
	newName += ' ';
	newName += Name.substr(0, index);
	Name = newName;
}

void TLine::Draw(System::Drawing::Graphics^ g) {
	if (!Visible) return;
	int red, green, blue;
	int tmp = Col;
	blue = tmp % 256;
	tmp /= 256;
	green = tmp % 256;
	tmp /= 256;
	red = tmp;
	System::Drawing::Pen^ pen = gcnew System::Drawing::Pen(
		System::Drawing::Color::FromArgb(255, red, green, blue));
	pen->Width = R;
	g->DrawLine(pen, ((TPoint*)left)->GetX() + ((TPoint*)left)->GetWidth() / 2, ((TPoint*)left)->GetY() + ((TPoint*)left)->GetWidth() / 2,
		((TPoint*)right)->GetX() + ((TPoint*)right)->GetWidth() / 2, ((TPoint*)right)->GetY() + ((TPoint*)right)->GetWidth() / 2);
}

void TLine::IncRating() {
	Rat++;
	if (Rat == 4) Rat = 1;
}

bool TLine::IsFigure(int _x, int _y) {
	if (left->IsFigure(_x, _y) || right->IsFigure(_x, _y)) return true;
	//пока не знаю
}

void TLine::MovePoint(int dx, int dy) {
	if (left->GetType() == _Point) {
		((TPoint*)left)->MovePoint(dx, dy);
	}
	else {
		((TLine*)left)->MovePoint(dx, dy);
	}
	if (right->GetType() == _Point) {
		((TPoint*)right)->MovePoint(dx, dy);
	}
	else {
		((TLine*)right)->MovePoint(dx, dy);
	}
}

std::string TLine::to_string() {
	std::string ans;
	ans += "LINE | ";
	ans += GetName();
	
	return ans;
}
