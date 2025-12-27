#include "../General-utilities/GeneralUtilities.h"
#include <raylib.h>



class RainAscii{
  private:
    Vector2 dimension = {5.0, 5.0};
    Vector2 Posicion = {(float(WidthScreen)/2), (float(HeigthScreen)/2)};   
  public:
    void CreateObject(){
      DrawRectangle(Posicion.x, Posicion.y, int(dimension.x), int(dimension.y), WHITE);
    }
};
