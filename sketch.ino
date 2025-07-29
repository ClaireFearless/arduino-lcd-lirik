#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const char* daftarLirik[] = {
  "Tanteee", "Sudah Terbiasa", "Terjadi Tante",
  "Teman Datang", "Ketika Lagi", "Butuh Sajaaa",
  "Coba Kalo", "Lagi Susahh", "Mereka Semua",
  "Menghilaaangg", "aangggg", "aangggg",
  "Tanteeee", "awoakawk", "awoawok"
};

// Atur waktu tampil lirik
const int delayLirik[] = {
  1800, 1200, 1990,
  1100, 1500, 1700,
  1200, 1600, 1400,
  1400, 1400, 1400,
  1800, 600, 600
};

int indeks = 0;
const int jumlah = sizeof(daftarLirik) / sizeof(daftarLirik[0]);

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(daftarLirik[indeks]);

  delay(delayLirik[indeks]);

  indeks++;
  if (indeks >= jumlah) {
    indeks = 0;
  }
}
