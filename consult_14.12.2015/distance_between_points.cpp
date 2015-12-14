#include<iostream>
#include <math.h>

using namespace std;

int main()
{
    double x1, y1, x2, y2;

    //enter the coordinates of the points
    cin >> x1 >> y1 >> x2 >> y2;

    double x_distance = x1 - x2,
            y_distance = y1 - y2;
    double distance = sqrt(pow(x_distance, 2) + pow(y_distance, 2));
    cout << distance << endl;
    return 0;
}