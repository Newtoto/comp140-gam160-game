const int turretPower[] = {13, 12};
const int turretInput[] = {A0, A1};
const int buttonPin = 2;
int buttonState = 0;
String outputValues[] = {"", "", "", ""};
String output;
int delayTime = 30;

void setup()
{
  Serial.begin(9600);

  //turret inputs and power
  for (int i = 0; i <2; ++i)
  {
  pinMode(turretPower[i], OUTPUT);
  digitalWrite(turretPower[i], HIGH);
  }

  //button setup
  pinMode(buttonPin, INPUT);
}

void loop()
{
  //Read pushbutton state
  buttonState = digitalRead(buttonPin);

  //Fire turrets on button press

  for (int i = 0; i <2; ++i)
    {
    int turretValue = ((analogRead(turretInput[i])- 512)/-6);
    int turretValueLength = (String(turretValue).length());

    if (i == 0)
    {
      outputValues[i] = "0:" + String(turretValueLength) + 
      ":" + turretValue;
    }
    else
    {
      outputValues[i] = "1:" + String(turretValueLength) + 
      ":" + turretValue;
    }
    output = output + outputValues[i] + ",";
    }

  //Overwrite output if firing
  if (buttonState == HIGH)
    {
      output = "F";
      delayTime = 200;
    }

  Serial.println(output);
  
  delay(delayTime);

  //reset output and delay for next run
  output = "";
  delayTime = 30;
}
