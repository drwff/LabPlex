#include "TPoint.h"
TPoint::TPoint(const TPoint& cop) :TBase(_Point, cop.GetName(), cop.R, cop.Visible) {
	X = cop.X;
	Y = cop.Y;
}

TPoint& TPoint::operator=(const TPoint& cop) {
	//if (this == &cop) return *this;
	X = cop.X;
	Y = cop.Y;
	Figure = cop.Figure;
	Name = cop.Name;
	Visible = cop.Visible;
	Col = cop.Col;
	R = cop.R;
	Width = cop.Width;
	Rat = cop.Rat;
	return *this;
}

int TPoint::GetX() const {
	return X;
}

int TPoint::GetY() const {
	return Y;
}

void TPoint::MovePoint(int dx, int dy) {
	X += dx;
	Y += dy;
}

void TPoint::Draw(System::Drawing::Graphics ^ g) {
	if (Visible == false)
	{
		return;
	}
	else
	{
		int red, green, blue;
		int tmp = Col;
		blue = tmp % 256;
		tmp /= 256;
		green = tmp % 256;
		tmp /= 256;
		red = tmp;
		System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(
			System::Drawing::Color::FromArgb(255, red, green, blue));
		g->FillEllipse(brush, X, Y, Width, Width);
	}
	
}

void TPoint::DecRating() {
	if (Rat > 0) Rat--;
}

void TPoint::IncRating() {
	Rat++;
}

bool TPoint::IsFigure(int _x, int _y) {
	auto sqr = [](int x) ->long long {
		return (long long)x* x;
	};
	if (sqr(_x - X) + sqr(_y - Y) <= sqr(R)) return 1;
	return 0;
}

std::string TPoint::to_string() {
	std::string ans;
	ans += GetName() + "(";
	ans += std::to_string(GetX()) + ';' + std::to_string(GetY()) + ")";
	//ans += "X = " + std::to_string(X);
	//ans += " Y = " + std::to_string(Y);
	return ans;
}
