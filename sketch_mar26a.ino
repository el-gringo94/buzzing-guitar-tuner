const int speaker = 11;

// notes
const int E = 82;
const int A = 110;
const int D = 147;
const int G = 196;
const int B = 247;
const int e = 330;

void setup() {
  pinMode(speaker, OUTPUT);
  Serial.begin(9600);
}

void playNote(char c) {
  switch (c) {
    case 'E':
      tone(speaker, E); // E
      break;

    case 'A':
      tone(speaker, A); // A
      break;

    case 'D':
      tone(speaker, D); // D
      break;

    case 'G':
      tone(speaker, G); // G
      break;

    case 'B': case 'H':
      tone(speaker, B); // B
      break;

    case 'e':
      tone(speaker, e); // e
      break;

    case'x': case 'X':
      noTone(speaker);
      break;
  }
}

void loop() {
  if ( Serial.available() > 0) {
    char in = Serial.read();
    Serial.println(in);
    // Serial.println(int (in));
    playNote(in);
  }
}
