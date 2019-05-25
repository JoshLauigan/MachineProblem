#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cmath>
#include<math.h>
#define PI 3.14159265
using namespace std;

int main()
{
    double a, b, c, s, A, B, C, aA, aB, aC, area, peri, apo, n, m;
    float xB=0, yB=0, xA, yA, xC, yC=0, xAB, yAB, xAC, yAC, x, y, slopeAB, slopeAC;
    bool userquit = false;
    char contin;

	do
	{
    cout << "Please input the following side lengths:" << endl;
    cout << "A: "; cin >> a;
    cout << "B: "; cin >> b;
    cout << "C: "; cin >> c;
    
    A = (((b*b) + (c*c) - (a*a)) / (2*b*c));
    B = (((c*c) + (a*a) - (b*b)) / (2*c*a));
    C = (((a*a) + (b*b) - (c*c)) / (2*a*b));
    
    aA = acos(A)*(180/M_PI);
    aB = acos(B)*(180/M_PI);
    aC = acos(C)*(180/M_PI);
    
    s = (a + b + c) / 2;
    area = sqrt(s * (s-a) * (s-b) * (s-c));
    peri = a + b + c;
    
    cout << endl;
    cout << "INTERIOR ANGLES: " << endl;
    cout << "ANGLE A: " << abs(aA) << " degrees" << endl;
    cout << "ANGLE B: " << abs(aB) << " degrees" << endl;
    cout << "ANGLE C: " << abs(aC) << " degrees" << endl;
    
    {
    if (a==b && b==c)
	cout << "TRIANGLE: Equilateral Triangle";
        
    else if (a==b && b!=c)
    cout << "TRIANGLE: Isosceles Triangle";
    
    else if (b==c && c!=a)
    cout << "TRIANGLE: Isosceles Triangle";
    
    else if (c==a && a!=b)
    cout << "TRIANGLE: Isosceles Triangle";
    
    else
    cout << "TRIANGLE: Scalene Triangle";
    }
    cout << endl;
    
    cout << "AREA: " << area << " m^2." << endl;
    cout << "PERIMETER: " << peri << " meters." << endl;
    
    {
    if (aA<90 && aB<90 && aC<90)
    cout << "TRIANGLE TYPE: Acute Triangle";
    
    else if (aA>90 || aB>90 || aC>90)
    cout << "TRIANGLE TYPE: Obtuse Triangle";
    
    else if (aA==90 || aB==90 || aC==90)
    cout << "TRIANGLE TYPE: Right Triangle";
    
    cout << endl;
	}
	
	
    if (a == b && a == c)
    {
    apo = (2 * area) / peri;
    cout << "APOTHEM: " << apo << endl << endl;
	}
	
	else
	{
	cout << "APOTHEM: n/a" << endl;
	}
    	xC = a;
    	n = cos(aB * PI / 180);
		xA = c * n;
		m = sin(aC * PI / 180);
		yA = b * m;

		xAB = (xB + xA)/2; 
		yAB = (yB + yA)/2;
		slopeAB = - ((xB - xA)/(yB - yA));
		xAC = (xA + xC)/2; yAC = (yA + yC)/2;
		slopeAC = - ((xC - xA)/(yC - yA));
		
		x = ((xAC * slopeAC) - (xAB * slopeAB)) / (slopeAC - slopeAB);
		y = yAC + (slopeAC * (x - xAC));
		
		cout << "COORDINATES OF THE THREE POINTS OF THE TRIANGLE:" << endl;
    	cout << "(0,0) , (" << a << ",0)" << " , (" << xA << "," << yA << ") \n" << endl;
		cout << "COORDINATES OF THE CIRCUMCENTER: " << "\n(" << x << "," << y << ")";
		cout << "\n\nDo you want to continue? (Y/N): "; cin >> contin;
		cout << endl ;
		
		switch(contin)
		{
		case 'y':
		case 'Y':
			{userquit = false;}
			break;
		case 'n':
		case 'N':
			{userquit = true;}
			break;
		default: 
			{userquit = true;}		
		}
		
	}while(!userquit);
		
	getch();
    return 0;
}
