/* Read the coordinates of three points:
	bottom left corner of a rectangle,
	upper right corner of a rectangle,
	arbitary point P;
	Output whether P is contained in the rectangle
*/

#include "stdafx.h" //skip this line if using Code::Blocks
#include <iostream>
using namespace std;

int main()
{
	double x1, y1, x2, y2, x3, y3;

	cout << "Input coordinates of the three points: ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	if (x3 >= x1 && x3 <= x2 && y3 >= y1 && y3 <= y2 )
	{
		cout << "Inside" << endl;
	}
	else
	{
		cout << "Outside" << endl;
	}
	
    return 0;
}

