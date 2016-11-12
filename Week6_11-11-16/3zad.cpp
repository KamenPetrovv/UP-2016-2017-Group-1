#include<iostream>
#include<cmath>
using namespace std;

void getInput(int &cx, int &cy, int &r, int &R, int &x, int &y) {
    /**
        notice how variables are passed 'by reference' (denoted by an &)
        check what happens if it is removed
        you'll learn about this in a few weeks
    */

    cout << "Enter coordinates of the ring's center: ";
    cin >> cx >> cy;

    cout << "Enter inner radius: ";
    cin >> r;

    cout << "Enter outer radius: ";
    cin >> R;

    cout << "Enter coordinates of point to be checked: ";
    cin >> x >> y;
}


double distance(int fromx, int fromy, int tox, int toy) {
    double distance = sqrt((fromx-tox)*(fromx-tox) + (fromy-toy)*(fromy-toy));
    return distance;
}

int main() {

    int cx, cy, r, R, x, y;

    getInput(cx, cy, r, R, x, y);

    double dist = distance(cx, cy, x, y);

    if(dist < r)
        cout << "Point is in the hole\n";

    if(dist == r || dist == R)
        cout << "Point is on the contour\n";

    if(dist > r && dist < R)
        cout << "Point is on the ring\n";

    if(dist > R)
        cout << "Point is outside of the ring\n";

    return 0;
}

