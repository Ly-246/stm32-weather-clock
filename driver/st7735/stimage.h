#ifndef __ST_IMAGE_H__
#define __ST_IMAGE_H__


#include <stdint.h>


typedef struct
{
    const uint16_t width;
    const uint16_t height;
    const uint8_t *data;
} st_image_t;


extern const st_image_t icon_weather_duoyun;
extern const st_image_t icon_weather_rain;
extern const st_image_t icon_weather_snow;
extern const st_image_t icon_weather_sunny;
extern const st_image_t icon_weather_wind;
extern const st_image_t icon_weather_yin;
extern const st_image_t icon_weather_xiaoyu;
extern const st_image_t icon_weather_dayu;


#endif /* __ST_IMAGE_H__ */
