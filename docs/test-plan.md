# Test plan
Cloud tests cover OLED shared scaling/clamping/NaN handling, PNG validation and actual ESP32 compile. Physical procedure: inspect I2C0x76/0x3C, compare BME values, upper/lower bars, set RGB viaHA then local Assist commands. Disconnect WAN after installing local models and confirm commands still work. Physical/HA/voice tests remain unperformed.
