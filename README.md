
This script tests the BLE power settings on an ESP32. It initializes BLE, retrieves the power settings for advertising, scanning, and default modes, and prints them via the serial monitor.

**Usage:**
1. Upload the script to your ESP32.
2. Open the serial monitor at 115200 baud.

**Output:**
The serial monitor will display the power settings for advertising (ADV), scanning (SCAN), and default (DEFAULT) modes.

## Power Levels

```c
// Bluetooth power level settings for ESP32
ESP_PWR_LVL_N12 = 0,                /*!< -12 dBm */
ESP_PWR_LVL_N9  = 1,                /*!< -9 dBm */
ESP_PWR_LVL_N6  = 2,                /*!< -6 dBm */
ESP_PWR_LVL_N3  = 3,                /*!< -3 dBm */
ESP_PWR_LVL_N0  = 4,                /*!< 0 dBm */
ESP_PWR_LVL_P3  = 5,                /*!< +3 dBm */
ESP_PWR_LVL_P6  = 6,                /*!< +6 dBm */
ESP_PWR_LVL_P9  = 7,                /*!< +9 dBm */

// Backward compatibility mappings
ESP_PWR_LVL_N14 = ESP_PWR_LVL_N12,  /*!< -14 dBm maps to -12 dBm */
ESP_PWR_LVL_N11 = ESP_PWR_LVL_N9,   /*!< -11 dBm maps to -9 dBm */
ESP_PWR_LVL_N8  = ESP_PWR_LVL_N6,   /*!< -8 dBm maps to -6 dBm */
ESP_PWR_LVL_N5  = ESP_PWR_LVL_N3,   /*!< -5 dBm maps to -3 dBm */
ESP_PWR_LVL_N2  = ESP_PWR_LVL_N0,   /*!< -2 dBm maps to 0 dBm */
ESP_PWR_LVL_P1  = ESP_PWR_LVL_P3,   /*!< +1 dBm maps to +3 dBm */
ESP_PWR_LVL_P4  = ESP_PWR_LVL_P6,   /*!< +4 dBm maps to +6 dBm */
ESP_PWR_LVL_P7  = ESP_PWR_LVL_P9,   /*!< +7 dBm maps to +9 dBm */
```

## Data Source

For more information, visit the official [ESP-IDF GitHub repository](https://github.com/espressif/esp-idf/blob/v5.2.3/components/bt/include/esp32/include/esp_bt.h).
