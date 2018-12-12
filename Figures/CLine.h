#include"Figures/CFigure.h"

class CLine : public CFigure
{
private:
	Point p1;
	Point p2;
public:
	CLine(Point, Point, GfxInfo FigureGfxInfo);
	virtual void Draw(Output* pOut) const;
	double GetDim(Point, Point);

	virtual bool isin(Point);
};
