

int COUNT = 0; //count integer for 0-9 increment

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  for (int i = 2; i < 9; i++)

  {

    pinMode(i, OUTPUT);// taking all pins from 2-8 as output

  }

}

void zero()
{

  digitalWrite(2, LOW);

  digitalWrite(3, LOW);

  digitalWrite(4, LOW);

  digitalWrite(5, HIGH);

  digitalWrite(6, LOW);

  digitalWrite(7, LOW);

  digitalWrite(8, LOW);

  digitalWrite(9, LOW);

  digitalWrite(10, LOW);
}

void one()
{
  digitalWrite(2, HIGH);

  digitalWrite(3, LOW);

  digitalWrite(4, LOW);

  digitalWrite(5, HIGH);

  digitalWrite(6, LOW);

  digitalWrite(7, HIGH);

  digitalWrite(8, HIGH);

  digitalWrite(9, HIGH);

  digitalWrite(10, LOW);
}

void two()
{
  digitalWrite(2, LOW);

  digitalWrite(3, LOW);

  digitalWrite(4, HIGH);

  digitalWrite(5, LOW);

  digitalWrite(6, LOW);

  digitalWrite(7, LOW);

  digitalWrite(8, HIGH);

  digitalWrite(9, LOW);

  digitalWrite(10, LOW);

}

void three()
{
  digitalWrite(2, LOW);

  digitalWrite(3, LOW);

  digitalWrite(4, LOW);

  digitalWrite(5, LOW);

  digitalWrite(6, LOW);

  digitalWrite(7, LOW);

  digitalWrite(8, HIGH);

  digitalWrite(9, HIGH);

  digitalWrite(10, LOW);

}

void four()
{
  digitalWrite(2, HIGH);

  digitalWrite(3, LOW);

  digitalWrite(4, LOW);

  digitalWrite(5, LOW);

  digitalWrite(6, LOW);

  digitalWrite(7, HIGH);

  digitalWrite(8, LOW);

  digitalWrite(9, HIGH);

  digitalWrite(10, HIGH);
}

void five()
{
  digitalWrite(2, LOW);

  digitalWrite(3, LOW);

  digitalWrite(4, LOW);

  digitalWrite(5, LOW);

  digitalWrite(6, HIGH);

  digitalWrite(7, LOW);

  digitalWrite(8, LOW);

  digitalWrite(9, HIGH);

  digitalWrite(10, LOW);
}

void six()
{
  digitalWrite(2, LOW);

  digitalWrite(3, LOW);

  digitalWrite(4, LOW);

  digitalWrite(5, LOW);

  digitalWrite(6, HIGH);

  digitalWrite(7, LOW);

  digitalWrite(8, LOW);

  digitalWrite(9, LOW);

  digitalWrite(10, LOW);
}

void seven()
{
  digitalWrite(2, HIGH);

  digitalWrite(3, LOW);

  digitalWrite(4, LOW);

  digitalWrite(5, HIGH);

  digitalWrite(6, LOW);

  digitalWrite(7, LOW);

  digitalWrite(8, LOW);

  digitalWrite(9, HIGH);

  digitalWrite(10, LOW);
}

void eight()
{
  digitalWrite(2, LOW);

  digitalWrite(3, LOW);

  digitalWrite(4, LOW);

  digitalWrite(5, LOW);

  digitalWrite(6, LOW);

  digitalWrite(7, LOW);

  digitalWrite(8, LOW);

  digitalWrite(9, LOW);

  digitalWrite(10, LOW);
}

void nine()
{
  digitalWrite(2, LOW);

  digitalWrite(3, LOW);

  digitalWrite(4, LOW);

  digitalWrite(5, LOW);

  digitalWrite(6, LOW);

  digitalWrite(7, LOW);

  digitalWrite(8, LOW);

  digitalWrite(9, HIGH);

  digitalWrite(10, LOW);
}





void loop()

{

  switch (COUNT)

  {

    case 0://when count value is zero show”0” on disp

      zero();

      break;

    case 1:// when count value is 1 show”1” on disp

      one();

      break;

    case 2:// when count value is 2 show”2” on disp

      two();

      break;

    case 3:// when count value is 3 show”3” on disp

      three();

      break;

    case 4:// when count value is 4 show”4” on disp

      four();

      break;

    case 5:// when count value is 5 show”5” on disp

      five();

      break;

    case 6:// when count value is 6 show”6” on disp

      six();

      break;

    case 7:// when count value is 7 show”7” on disp

      seven();

      break;

    case 8:// when count value is 8 show”8” on disp

      eight();

      break;

    case 9:// when count value is 9 show”9” on disp

      nine();

      break;

      break;

  }

  if (COUNT < 10)

  {

    COUNT++;

    delay(1000);///increment count integer for every second

  }

  if (COUNT == 10)

  {

    COUNT = 0; // if count integer value is equal to 10, reset it to zero.

    delay(1000);

  }

}
