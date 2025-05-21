#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

// Initialize LCD
LiquidCrystal_I2C lcd(0x27, 16, 2); // Adjust the I2C address if needed

// DHT sensor setup
#define DHTPIN A3    // DHT11 data pin connected to D2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

// Buzzer pin
#define BUZZER_PIN 3

void setup() {
  // Initialize LCD
  lcd.init();        // Initialize LCD
  lcd.backlight();   // Turn on the backlight

  // Initialize DHT sensor
  dht.begin();

  // Initialize buzzer
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);

  lcd.setCursor(0, 0);
  lcd.print("Temp & Humidity");
  delay(2000);
  lcd.clear();
}

void loop() {
  // Read temperature and humidity
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();

  // Check if readings are valid
  if (isnan(temp) || isnan(hum)) {
    lcd.setCursor(0, 0);
    lcd.print("Error reading");
    lcd.setCursor(0, 1);
    lcd.print("DHT Sensor");
    delay(2000);
    return;
  }

  // Display temperature and humidity
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temp);
  lcd.print(" C");

  lcd.setCursor(0, 1);
  lcd.print("Hum: ");
  lcd.print(hum);
  lcd.print(" %");

  // Trigger buzzer if temp exceeds 30°C or humidity exceeds 70%
  if (temp > 30 || hum > 70) {
    digitalWrite(BUZZER_PIN, HIGH);
  }

  delay(2000); // Update every 2 seconds
}
