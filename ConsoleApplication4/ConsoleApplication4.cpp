
#include <iostream>
using namespace std;
#include "getVolumeSurface.h"

int main()
{
    double width;
    double height;
    double depth;
    double volume;
    double surfaceArea;
   
    cout << "幅を入力してください：";
    cin >> width;
    cout << "高さを入力してください：";
    cin >> height;
    cout << "奥行を入力してください：";
    cin >> depth;

    getVolumeSurface(width, height, depth, &volume, &surfaceArea);
    
    cout << "体積は" << volume << endl;
    cout << "表面積は" << surfaceArea << endl;

    int e;
    cin >> e;

    return 0;
}

