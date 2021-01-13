#include <math.h>
#include "Geo_cubo.h"

float vol_cubo(float base, float largura, float altura){
      float vol = base * altura * largura;
      return vol;
      }
float area_cubo(float base, float largura, float altura){
      float area = 2*(base*altura + base*largura + largura*altura);      
      return area;
      }
