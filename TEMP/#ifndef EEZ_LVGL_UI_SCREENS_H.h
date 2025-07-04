#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *charts;
    lv_obj_t *obj0;
    lv_obj_t *temperature_setpoint;
    lv_obj_t *keyboard;
    lv_obj_t *obj1;
    lv_obj_t *obj2;
    lv_obj_t *humidity;
    lv_obj_t *obj3;
    lv_obj_t *temperature;
    lv_obj_t *cont_1;
    lv_obj_t *chart_1;
    lv_obj_t *obj4;
    lv_chart_series_t *ser_humidity; // Более информативное имя
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_CHARTS = 2,
};

void create_screen_main();
void tick_screen_main();

void create_screen_charts();
void tick_screen_charts();

void create_screens();
void tick_screen(int screen_index);

#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/