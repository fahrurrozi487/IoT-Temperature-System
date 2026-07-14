#pragma once

#define WIFI_SSID      "FC"
#define WIFI_PASSWORD  "11111111"

#define GATEWAY_URL    "http://192.168.137.1:8000/ingest"  // Ganti XXX dengan IP device OpenClaw
#define DEVICE_ID      "esp32-04"
#define DEVICE_TOKEN   "esp32-temperature-system"   // harus sama dengan .env gateway

#define PIN_DHT        4    // data DHT11
#define PIN_LED_HIJAU  16
#define PIN_LED_KUNING 17
#define PIN_LED_MERAH  18
#define PIN_BUZZER     22   // buzzer aktif

#define SUHU_KUNING     40.0
#define SUHU_MERAH      45.0

// Interval kirim data (ms)
#define INTERVAL_KIRIM  5000
