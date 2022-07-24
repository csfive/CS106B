/*
 * FILE: CANTOR FRACTALS
 * ---------------------
 * This program draws a Cantor Fractal of a constant depth on the screen.
 * A Cantor fractal of depth N is a thick horizontal line on top, with
 * a depth N-1 Cantor fractal below the left third, and a depth N-1 Cantor
 * fractal below the right third, of the drawn line.
 */

#include "gobjects.h"
#include "gwindow.h"
#include "simpio.h"
#include <math.h>

using namespace std;

GPoint getLoweredPoint(GPoint point);
GPoint pointBetween(GPoint p1, GPoint p2, double fraction);
void drawThickLine(GWindow &w, GPoint left, GPoint right);

// display constants
static const int FRACTAL_DEPTH = 5;
static const int SCREEN_WIDTH = 500;
static const int SCREEN_HEIGHT = 500;
static const int LEVEL_HEIGHT = 20;
static const int RECT_HEIGHT = 10;
static const int INSET = 20;

/* Function: Draw Cantor
 * ---------------------
 * A recursive function that draws a Cantor Fractal between points
 * "left" and "right." The fractal will have "level" numbers of levels.
 */
void drawCantor(GWindow &w, int level, GPoint left, GPoint right) {
    // Base case: simplest possible version of the problem (nothing!)
    //if level == 0, do nothing... return
    if (level == 0) {
        return;
    }

    pause(500); // for animated effect


    // step 1: draw the line
    drawThickLine(w, left, right);

    // step 2: draw the left cantor fractal
    //calculate oneThirdPoint
    GPoint oneThirdPoint = pointBetween(left, right, 1.0/3);
    //drawCantor with level - 1, from left to oneThirdPoint
    drawCantor(w, level - 1, getLoweredPoint(left), getLoweredPoint(oneThirdPoint));

    // step 3: draw the right cantor fractal
    //calculate twoThirdPoint
    GPoint twoThirdPoint = pointBetween(left, right, 2.0/3);
    //drawCantor with level - 1, from twoThirdPoint to right
    drawCantor(w, level - 1, getLoweredPoint(twoThirdPoint), getLoweredPoint(right));




}


//void drawCantor(GWindow &w, int level, GPoint left, GPoint right) {
//    // Base case: simplest possible version of the problem (nothing!)
//    if (level == 0) {
//        return;
//    }

//    pause(500); // for animated effect

//    // step 1: draw the line
//    drawThickLine(w, left, right);

//    // step 2: draw the left cantor fractal
//    GPoint oneThird = pointBetween(left, right, 1.0 / 3);
//    drawCantor(w, level - 1, getLoweredPoint(left), getLoweredPoint(oneThird));

//    // step 3: draw the right cantor fractal
//    GPoint twoThird = pointBetween(left, right, 2.0 / 3);
//    drawCantor(w, level - 1, getLoweredPoint(twoThird), getLoweredPoint(right));
//}

/* PROVIDED HELPER FUNCTIONS */

/* Function: pointBetween
 * ---------------------
 * Given two points and a fraction (assumed to be in the range
 * [0, 1], the function returns the point "fraction" amount of the
 * way between p1 and p2.
 */
GPoint pointBetween(GPoint p1, GPoint p2, double fraction) {
    double deltaX = p2.x - p1.x;
    double deltaY = p2.y - p1.y;
    double x = p1.x + fraction * deltaX;
    double y = p1.y + fraction * deltaY;
    GPoint newPoint(x, y);
    return newPoint;
}

/* Function: Draw Thick Line
 * ---------------------
 * Because sometimes thin lines just don't look good enough in
 * a lecture demo. Actually draws a rectangle instead of a line :)
 */
void drawThickLine(GWindow &w, GPoint left, GPoint right) {
    double width = right.x - left.x;
    // this is called a pointer. We will learn about them later.
    GRect *rect = new GRect(0, 0, width, RECT_HEIGHT);
    rect->setFilled(true);
    cout << left.x << "," << left.y << endl;
    w.add(rect, left.x, left.y);
}

/* Function: Get Lowered Point
 * ---------------------
 * Returns a GPoint which is LEVEL_HEIGHT pixels lower than the one
 * passed in (has a larger Y value).
 */
GPoint getLoweredPoint(GPoint point) {
    GPoint next(point.x, point.y + LEVEL_HEIGHT);
    return next;
}

int main() {
    GWindow w(SCREEN_WIDTH, SCREEN_HEIGHT);
    GPoint left(INSET, INSET);
    GPoint right(SCREEN_WIDTH - INSET, INSET);
    drawCantor(w, FRACTAL_DEPTH, left, right);
    return 0;
}
