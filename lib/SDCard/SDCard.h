#include <Arduino.h>
#include "esp_camera.h"

#ifndef SDCard
#define SDCard

#define CLK GPIO_NUM_39
#define CMD GPIO_NUM_38
#define D0 GPIO_NUM_40

bool initSDCard();
void writeMessage(String message);
void savePhoto(String path, camera_fb_t* photo);

#endif