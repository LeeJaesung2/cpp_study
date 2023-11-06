#include <iostream>
using namespace std;

typedef struct __Point
{
    int xpos;
    int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2){
    Point *result = new Point;
    result -> xpos = p1.xpos + p2.xpos;
    result -> ypos = p1.xpos + p2.ypos;
    return *result;
}

int main(void){
    Point *point1 = new Point;
    Point *point2 = new Point;

    point1 -> xpos = 1;
    point1 -> ypos = 5;

    point2 -> xpos = 3;
    point2 -> ypos = 10;

    

    Point &result = PntAdder(*point1, *point2);

    cout << "xpos : " << result.xpos << " ypos: " << result.ypos << endl;

    delete point1;
    delete point2;
    delete &result;

}







