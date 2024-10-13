
// File generated by bin2lvgl
// developed by fbiego. 
// https://github.com/fbiego
// Watchface: 75_2

#include "75_2.h"

#ifdef ENABLE_FACE_75_2

lv_obj_t *face_75_2;
lv_obj_t *face_75_2_0_1024;
lv_obj_t *face_75_2_2_216824;
lv_obj_t *face_75_2_3_59132;
lv_obj_t *face_75_2_19_89191;
lv_obj_t *face_75_2_35_138999;


#if LV_COLOR_DEPTH != 16
#error "LV_COLOR_DEPTH should be 16bit for watchfaces"
#endif

const lv_img_dsc_t *face_75_2_dial_img_1_213131_group[] = {
	&face_75_2_dial_img_1_213131_0,
	&face_75_2_dial_img_1_213131_1,
	&face_75_2_dial_img_1_213131_2,
	&face_75_2_dial_img_1_213131_3,
	&face_75_2_dial_img_1_213131_4,
	&face_75_2_dial_img_1_213131_5,
	&face_75_2_dial_img_1_213131_6,
};
const lv_img_dsc_t *face_75_2_dial_img_2_216824_group[] = {
	&face_75_2_dial_img_2_216824_0,
	&face_75_2_dial_img_2_216824_1,
	&face_75_2_dial_img_2_216824_2,
	&face_75_2_dial_img_2_216824_3,
	&face_75_2_dial_img_2_216824_4,
	&face_75_2_dial_img_2_216824_5,
	&face_75_2_dial_img_2_216824_6,
};




#endif

void init_face_75_2(void (*callback)(const char*, const lv_img_dsc_t *, lv_obj_t **, lv_obj_t **)){
#ifdef ENABLE_FACE_75_2
    face_75_2 = lv_obj_create(NULL);
    lv_obj_clear_flag(face_75_2, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_color(face_75_2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(face_75_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(face_75_2, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(face_75_2, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(face_75_2, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(face_75_2, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(face_75_2, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

    lv_obj_add_event_cb(face_75_2, onFaceEvent, LV_EVENT_ALL, NULL);

    
    face_75_2_0_1024 = lv_img_create(face_75_2);
    lv_img_set_src(face_75_2_0_1024, &face_75_2_dial_img_0_1024_0);
    lv_obj_set_width(face_75_2_0_1024, LV_SIZE_CONTENT);
    lv_obj_set_height(face_75_2_0_1024, LV_SIZE_CONTENT);
    lv_obj_set_x(face_75_2_0_1024, 0);
    lv_obj_set_y(face_75_2_0_1024, 0);
    lv_obj_add_flag(face_75_2_0_1024, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_75_2_0_1024, LV_OBJ_FLAG_SCROLLABLE );

    face_75_2_2_216824 = lv_img_create(face_75_2);
    lv_img_set_src(face_75_2_2_216824, &face_75_2_dial_img_2_216824_0);
    lv_obj_set_width(face_75_2_2_216824, LV_SIZE_CONTENT);
    lv_obj_set_height(face_75_2_2_216824, LV_SIZE_CONTENT);
    lv_obj_set_x(face_75_2_2_216824, 103);
    lv_obj_set_y(face_75_2_2_216824, 68);
    lv_obj_add_flag(face_75_2_2_216824, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_75_2_2_216824, LV_OBJ_FLAG_SCROLLABLE );

    face_75_2_3_59132 = lv_img_create(face_75_2);
    lv_img_set_src(face_75_2_3_59132, &face_75_2_dial_img_3_59132_0);
    lv_obj_set_width(face_75_2_3_59132, LV_SIZE_CONTENT);
    lv_obj_set_height(face_75_2_3_59132, LV_SIZE_CONTENT);
    lv_obj_set_x(face_75_2_3_59132, 115);
    lv_obj_set_y(face_75_2_3_59132, 59);
    lv_obj_add_flag(face_75_2_3_59132, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_75_2_3_59132, LV_OBJ_FLAG_SCROLLABLE );
	lv_img_set_pivot(face_75_2_3_59132, 5, 61);

    face_75_2_19_89191 = lv_img_create(face_75_2);
    lv_img_set_src(face_75_2_19_89191, &face_75_2_dial_img_19_89191_0);
    lv_obj_set_width(face_75_2_19_89191, LV_SIZE_CONTENT);
    lv_obj_set_height(face_75_2_19_89191, LV_SIZE_CONTENT);
    lv_obj_set_x(face_75_2_19_89191, 115);
    lv_obj_set_y(face_75_2_19_89191, 36);
    lv_obj_add_flag(face_75_2_19_89191, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_75_2_19_89191, LV_OBJ_FLAG_SCROLLABLE );
	lv_img_set_pivot(face_75_2_19_89191, 5, 84);

    face_75_2_35_138999 = lv_img_create(face_75_2);
    lv_img_set_src(face_75_2_35_138999, &face_75_2_dial_img_35_138999_0);
    lv_obj_set_width(face_75_2_35_138999, LV_SIZE_CONTENT);
    lv_obj_set_height(face_75_2_35_138999, LV_SIZE_CONTENT);
    lv_obj_set_x(face_75_2_35_138999, 115);
    lv_obj_set_y(face_75_2_35_138999, 12);
    lv_obj_add_flag(face_75_2_35_138999, LV_OBJ_FLAG_ADV_HITTEST );
    lv_obj_clear_flag(face_75_2_35_138999, LV_OBJ_FLAG_SCROLLABLE );
	lv_img_set_pivot(face_75_2_35_138999, 5, 108);


    callback("Analog", &face_75_2_dial_img_preview_0, &face_75_2, &face_75_2_35_138999);

#endif
}

void update_time_75_2(int second, int minute, int hour, bool mode, bool am, int day, int month, int year, int weekday)
{
#ifdef ENABLE_FACE_75_2
    if (!face_75_2)
    {
        return;
    }
	lv_img_set_src(face_75_2_2_216824, face_75_2_dial_img_2_216824_group[((weekday + 6) / 1) % 7]);
	lv_img_set_angle(face_75_2_3_59132, hour * 300 + (minute * 5) + (second * (5 / 60)));
	lv_img_set_angle(face_75_2_19_89191, (minute * 60) + second);
	// lv_img_set_angle(face_75_2_35_138999, second * 60);

#endif
}

void update_weather_75_2(int temp, int icon)
{
#ifdef ENABLE_FACE_75_2
    if (!face_75_2)
    {
        return;
    }

#endif
}

void update_status_75_2(int battery, bool connection){
#ifdef ENABLE_FACE_75_2
    if (!face_75_2)
    {
        return;
    }

#endif
}

void update_activity_75_2(int steps, int distance, int kcal)
{
#ifdef ENABLE_FACE_75_2
    if (!face_75_2)
    {
        return;
    }

#endif
}

void update_health_75_2(int bpm, int oxygen)
{
#ifdef ENABLE_FACE_75_2
    if (!face_75_2)
    {
        return;
    }

#endif
}

void update_all_75_2(int second, int minute, int hour, bool mode, bool am, int day, int month, int year, int weekday, 
    int temp, int icon, int battery, bool connection, int steps, int distance, int kcal, int bpm, int oxygen)
{
#ifdef ENABLE_FACE_75_2
    update_time_75_2(second, minute, hour, mode, am, day, month, year, weekday);
    update_weather_75_2(temp, icon);
    update_status_75_2(battery, connection);
    update_activity_75_2(steps, distance, kcal);
    update_health_75_2(bpm, oxygen);
#endif
}

void update_check_75_2(lv_obj_t *root, int second, int minute, int hour, bool mode, bool am, int day, int month, int year, int weekday, 
    int temp, int icon, int battery, bool connection, int steps, int distance, int kcal, int bpm, int oxygen)
{
#ifdef ENABLE_FACE_75_2
    if (root != face_75_2)
    {
        return;
    }
    update_time_75_2(second, minute, hour, mode, am, day, month, year, weekday);
    update_weather_75_2(temp, icon);
    update_status_75_2(battery, connection);
    update_activity_75_2(steps, distance, kcal);
    update_health_75_2(bpm, oxygen);
#endif
}


