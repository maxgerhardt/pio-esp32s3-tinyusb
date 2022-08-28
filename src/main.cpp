#include <Arduino.h>
#include <Adafruit_TinyUSB.h>

Adafruit_USBD_HID usb_hid;

void setup() {
    usb_hid.begin();
}

void loop() {
    usb_hid.mouseMove(0, 1, 3);
}