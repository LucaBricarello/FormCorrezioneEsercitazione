
#include "polygon.h"
#include "righttrapezoid.h"
#include "rectangle.h"
#include "rhombus.h"


int main()
{
	//-------------------------------------------------------
	//RECTANGLE
	
	// test variables
	float l;
	float w;
	float ar;
	float per;

	//CONSTRUCTOR
	Rectangle objA;
	Rectangle objB(-3, 4);
	Rectangle objC(objA);

	//SETTERS
	objA.SetDim(-3, 5);
	objA.SetLength(-4);
	objA.SetWidth(-5);

	//GETTERS
	objA.GetDim(l, w);
	l = objA.GetLength();
	w = objA.GetWidth();
	ar = objA.GetArea();
	per = objA.GetPerimeter();

	//DRAW
	objA.Draw();

	//DUMP
	objA.Dump();

	//OPERATOR =
	objA = objC;

	//OPERATOR ==
	if (objA == objB)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	if (objA == objC)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	//-------------------------------------------------------
	//RHOMBUS

	// test variables
	float d1;
	float d2;
	float ar1;
	float per1;

	//CONSTRUCTOR
	Rhombus objD;
	Rhombus objE(3, -4);
	Rhombus objF(objD);

	//SETTERS
	objD.SetDim(-3, 5);
	objD.SetDiagH(-4);
	objD.SetDiagV(-5);

	//GETTERS
	objD.GetDiagonals(d1, d2);
	d1 = objD.GetDiagH();
	d2 = objD.GetDiagV();
	ar1 = objD.GetArea();
	per1 = objD.GetPerimeter();

	//DRAW
	objD.Draw();

	//DUMP
	objD.Dump();

	//OPERATOR =
	objD = objF;

	//OPERATOR ==
	if (objD == objE)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	if (objD == objF)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	//-------------------------------------------------------
	//RIGHTTRAP

	// test variables
	float ar2;
	float per2;
	float baseM;
	float basem;
	float h;
	float side;

	//CONSTRUCTOR
	RightTrap objH;
	RightTrap objI(8, 3, -4);
	RightTrap objL(objH);

	//SETTERS
	objH.SetDim(9, -3, 5);
	objH.SetBottomSide(-4);
	objH.SetTopSide(-5);
	objH.SetHeight(-9);

	//GETTERS
	h = objH.GetHeight();
	basem = objH.GetTopSide();
	baseM = objH.GetBottomSide();
	side = objH.GetObliqueSide();
	objH.GetDim(h, basem, baseM, side);
	ar2 = objH.GetArea();
	per2 = objH.GetPerimeter();

	//DRAW
	objH.Draw();

	//DUMP
	objH.Dump();

	//OPERATOR =
	objH = objL;

	//OPERATOR ==
	if (objH == objI)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	if (objH == objL)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}



	return 0;















	
//	bool exit = false;
//	int option = -1;
//
//	Polygon *polygons[3] = { };
//	int control = 0;
//
//	while (!exit)
//	{
//	
//	
//	
//		cout << "Choose one of the following options" << endl;
//		cout << " 1 - Rectangle\n 2 - Rhombus\n 3 - Right Trapezoid\n 4 - Draw\n 5-Exit" << endl;
//	
//		scanf_s("%d", &option);
//
//	/*	if (!isdigit(option))
//			option = 6;
//
//		if (option > 0)
//		{ }
//		else {
//			option = 6;
//		}*/
//		switch (option)
//		{
//		case 1:
//		{
//			Rectangle* X = new Rectangle;
//
//			cout << "Enter basic values for your rectangle such as width and length in order" << endl;
//
//			float w, l;
//			scanf_s("%f", &w);
//			scanf_s("%f", &l);
//
//			X->SetDim(w, l);
//
//			polygons[control] = X;
//
//			control++;
//			break;
//		}
//		case 2:
//		{
//			Rhombus* X = new Rhombus;
//
//			cout << "Enter basic values for your Rhombus such as d1 and d2 in order" << endl;
//
//			float w, l;
//			scanf_s("%f", &w);
//			scanf_s("%f", &l);
//
//			X->SetDim(w, l);
//
//			polygons[control] = X;
//
//			control++;
//			break;
//		}
//		case 3:
//		{
//			RightTrap* X = new RightTrap;
//
//			cout << "Enter basic values for your rectangle such as height, bottom side and top side in order" << endl;
//			float h, bs, ts;
//			scanf_s("%f",&h);
//			scanf_s("%f",&bs);
//			scanf_s("%f",&ts);
//
//
//			X->SetDim(h, ts, bs);
//
//			polygons[control] = X;
//
//
//			control++;
//			break;
//		}
//		case 4:
//		{
//		
//
//			for (int i = 0; i < control; i++)
//			{
//				polygons[i]->Draw();
//			}
//
//			break;
//		}
//		case 5:
//		{	
//			cout << "-- The End --" << endl;
//			exit = true;
//			break;
//		break;
//		}
//		default:
//			cout << "Please enter a valid option" << endl;
//
//		}
//	
//	}
//	
//
}
