int arr[3][4]={
    13,12,11,
    10,9,8,
    7,6,5,
    4,3,2
    };
    
void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<3;j++)
    {
          pinMode(arr[i][j],OUTPUT);

    }
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<3;j++)
    {
       digitalWrite(arr[i][j],1);
    delay(1000);
    }
  }
    }


