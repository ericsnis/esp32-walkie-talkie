#include <TinyPICO.h>

#include "TinyPICOIndicatorLed.h"

TinyPICOIndicatorLed::TinyPICOIndicatorLed()
{
  m_tp = new TinyPICO();
}
void TinyPICOIndicatorLed::set_led_rgb(uint32_t color)
{
  m_tp->DotStar_SetPixelColor(color);
}
