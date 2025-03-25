#c++ 
#define TRIG 13 // TRIG 핀 
#define ECHO 12 // ECHO 핀 
int led_r = 7; 
int led_g = 9;

void setup() { 
  Serial.begin(9600); // 9600~116500 
  pinMode(7, OUTPUT); 
  pinMode(9, OUTPUT); 
  pinMode(TRIG, OUTPUT); // 초음파 출력 
  pinMode(ECHO, INPUT); // 초음파 입력 
} 
void loop() { 
  long duration,distance; // 4byte
  digitalWrite(TRIG, LOW); 
  delayMicreseconds(2); // delay(2) 
  digitalWrite(TRIG, HIGH); 
  delayMicreseconds(10); 
  digitalWrite(TRIG, LOW);
  
  duration = pulseIn(ECHO, HIGH); // ECHO가 HIGH인 기간
  distance = duration * 17 / 1000; 
  Serial.println(duration); 
  Serial.print("\nDistance : "); 
  Serial.print(distance); 
  Serial.println(" Cm");
  digitalWrite(led_r, HIGH); 
  delay(1000); 
  digitalWrite(led_r, LOW);
  delay(1000); 
  digitalWrite(led_g, HIGH); 
  delay(1000); 
  digitalWrite(led_g, LOW); 
  delay(1000); 
}
