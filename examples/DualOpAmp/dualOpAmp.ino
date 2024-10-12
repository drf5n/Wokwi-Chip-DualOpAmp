// Wokwi dualOpAmp.ino https://wokwi.com/projects/409320061010147329
// demo code for a simulated dual op-amp
// connections:
// connect the outputs of a 0-5V opamp to A2 and A3
// connect 4 0-5V pots to the inputs of the opamps
// Adjust the gains on the custom chip with its sliders
// Output offset of 512/2.5V 
// This simulation contains two files containing the opamp layout and code
// 
// Discussion:
// https://discord.com/channels/787627282663211009/954892209486966825/1285757638419677215

void setup() {
  Serial.begin(115200);
  pinMode(A2, INPUT);
  Serial.print("");
}

void loop() {
  static int lastA = -1, lastB = -1;
  int outA = analogRead(A2);
  int outB = analogRead(A3);
  if (false || (outA != lastA) || (outB != lastB)) {
    lastA = outA;
    lastB = outB;

    Serial.print("Analog: ");
    Serial.print(outA);
    Serial.print(" ");
    Serial.println(outB);
   // delay(500);
  }
}
