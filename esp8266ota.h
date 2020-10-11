#pragma once

#include <ArduinoOTA.h>
#include <string>
#include <ESP8266mDNS.h>

class Esp8266OTA
{
public:
    Esp8266OTA(String hostname, String password);

    void handle();
private:
    ArduinoOTAClass updater;
};