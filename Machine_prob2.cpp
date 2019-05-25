#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
	const int pi = 3.14;
	char figure, choice;
	double rad, vol, lat, base, slant, sur, h, l, w, slantx, slanty;
	bool userquit = false;

	do
	{
		cout << "WELCOME TO THE GEOMETRIC CALCULATOR";
		cout << "\n\n Please choose a geometric figure : \n[P] Cone\n[C] Pyramid\n[S] Sphere\n";
		cin >> figure;
		switch (figure)
		{
		case 'P':
		case 'p':
			cout << "Please input the value of height: \n";
			cin >> h;
			cout << "Please input the value of width: \n";
			cin >> w;
			cout << "Please input the value of length: \n ";
			cin >> l;
			vol = (l * w * h) / 3;
			base = l * w;
			slantx = sqrt((h * h) + (w / 2 * w / 2));
			slanty = sqrt((h * h) + (l / 2 * l / 2));
			lat = l * slantx + w * slanty;
			sur = (l * w) + (2 * (0.5 * l * slantx)) + (2 * (0.5 * w * slanty));
			cout << "\n The computed volume of the pyramid is... " << vol;
			cout << "\n The computed lateral area of the pyramid is..." << lat;
			cout << "\n The computed base area of the pyramid is... " << base;
			cout << "\n The computed surface area of the pyramid is " << sur;
			break;
			
			
		case 'C':
		case 'c':
			cout << "Please input the value for radius: \n";
			cin >> rad;
			cout << "Enter the value for height: \n";
			cin >> h;
			vol = 0.33 * pi * rad * rad * h;
			slant = sqrt((rad * rad) + (h * h));
			lat = pi * rad * slant;
			base = pi * rad * rad;
			sur = (pi * rad * slant) + (pi * rad * rad);
			cout << "\n The computed volume of the cone is...  " << vol;
			cout << "\n The computed lateral area of the cone is..." << lat;
			cout << "\n The computed base area of the cone is..." << base;
			cout << "\n The computed surface area of the cone is..." << sur;
			break;
			
			
		case 'S':
		case 's':
			cout << "\n Please input the value for radius: ";
			cin >> rad;
			sur = 4 * pi * rad * rad;
			vol = 4 / 3 * pi * rad * rad * rad;
			cout << "\nThe computed volume of the sphere is... " << vol;
			cout << "\nThe computed surface area of the sphere is..." << sur;
			break;
		default: cout << "Incorrect geometric figure...";
		}
		cout << "\n Do you still want to continue? \n[Y] Yes \n [N] No \n";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case 'y':
		case 'Y':
		{userquit = false; }
		break;
		case 'n':
		case 'N':
		{userquit = true; }
		break;
		default:
		{userquit = true; }
		}
	} while (!userquit);
	system("pause");
	
	getch ();
	return 0;
}
