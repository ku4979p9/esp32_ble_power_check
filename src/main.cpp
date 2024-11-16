#include <Arduino.h>
#include <BLEDevice.h>

void setup() {
    // Initialize serial communication
    Serial.begin(115200);
    Serial.println("Starting BLE power test...");

    // Initialize BLE device with a name
    BLEDevice::init("ESP32");

    // Get the transmission power for different BLE types
    int pwrAdv  = esp_ble_tx_power_get(ESP_BLE_PWR_TYPE_ADV);  // Power for Advertising
    int pwrScan = esp_ble_tx_power_get(ESP_BLE_PWR_TYPE_SCAN); // Power for Scanning
    int pwrDef  = esp_ble_tx_power_get(ESP_BLE_PWR_TYPE_DEFAULT); // Default power

    // Print the power settings
    Serial.println("Power Settings: (ADV, SCAN, DEFAULT)");
    Serial.println(pwrAdv);  // Print Advertising power
    Serial.println(pwrScan); // Print Scanning power
    Serial.println(pwrDef);  // Print Default power
}

void loop() {
    // No operation in the loop, everything is done in the setup
}
