#pragma once

#include <ArduinoOTA.h>
#include <string>
#include <ESP8266mDNS.h>
#include <vector>

class Esp8266OTA
{
public:
    Esp8266OTA(String hostname, String password);
    Esp8266OTA(String hostname, String password, std::function<void(void)> timerDetatchFunction);

    void handle();
private:
    ArduinoOTAClass updater;
    std::function<void(void)> m_timerDetatch;
    std::function<void(uint8_t)> m_gpioDetatch;
};