void setup() {
  asm volatile(
    "sbi 0x04, 5\n"   // DDRB bit 5 = output
  );
}

void loop() {
  asm volatile(
    "sbi 0x05, 5\n"   // PORTB bit 5 = HIGH
  );

  delay(1000);

  asm volatile(
    "cbi 0x05, 5\n"   // PORTB bit 5 = LOW
  );

  delay(1000);
}
