#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h> //by Adafruit

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET     -1
#define SCREEN_ADDRESS 0x3C

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


const int spkrPin = 3; //3:ConnectorA 4:ConnectorB

#define DO 261.6
#define _DO 277.18
#define RE 293.665
#define _RE 311.127
#define MI 329.63
#define FA 349.228
#define _FA 369.994
#define SO 391.995
#define _SO 415.305
#define RA 440
#define _RA 466.164
#define TI 493.883
#define octDO 523.251


void playmusic()
{


 Wire.begin(5, 4); //(SDA, SCL) 1,3:ConnectorA 5,4:ConnectorB

  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    for(;;); //Infinite loop when screen initialization fails
  }

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F(""));
  display.setCursor(0, 15);
  display.print(F(""));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));


  display.display();






//  Doe, a deer, a female deer

  ledcWriteTone(spkrPin, DO); // ドは
  delay(600);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Doe"));
  display.setCursor(0, 15);
  display.print(F(""));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));
 

  display.display();












 ledcWriteTone(spkrPin, RE);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Doe"));
  display.setCursor(0, 15);
  display.print(F("a "));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();






ledcWriteTone(spkrPin, MI);
  delay(600);

 display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Doe"));
  display.setCursor(0, 15);
  display.print(F("a deer"));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();



ledcWriteTone(spkrPin, DO);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Doe"));
  display.setCursor(0, 15);
  display.print(F("a deer"));
  display.setCursor(0, 30);
  display.print(F("a"));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();




ledcWriteTone(spkrPin, MI);
  delay(400);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Doe"));
  display.setCursor(0, 15);
  display.print(F("a deer"));
  display.setCursor(0, 30);
  display.print(F("a fe"));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();




ledcWriteTone(spkrPin, DO);
  delay(400);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Doe"));
  display.setCursor(0, 15);
  display.print(F("a deer"));
  display.setCursor(0, 30);
  display.print(F("a female"));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();




ledcWriteTone(spkrPin, MI);
  delay(700);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Doe"));
  display.setCursor(0, 15);
  display.print(F("a deer"));
  display.setCursor(0, 30);
  display.print(F("a female"));
  display.setCursor(0, 45 );
  display.print(F("deer."));

  display.display();








  ledcWriteTone(spkrPin, 0); // no sound
  delay(100);



  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Doe"));
  display.setCursor(0, 15);
  display.print(F("a deer"));
  display.setCursor(0, 30);
  display.print(F("a female"));
  display.setCursor(0, 45 );
  display.print(F("deer."));

  display.display();
















// Ray, a drop of golden sun


  ledcWriteTone(spkrPin, RE); // レは
  delay(600);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Ray"));
  display.setCursor(0, 15);
  display.print(F(""));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));
 

  display.display();












 ledcWriteTone(spkrPin, MI);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.setCursor(0, 15);
  display.print(F("Ray"));
  display.setCursor(0, 30);
  display.print(F("a"));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();




 ledcWriteTone(spkrPin, FA);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Ray"));
  display.setCursor(0, 15);
  display.print(F("a drop"));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();





 ledcWriteTone(spkrPin, FA);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Ray"));
  display.setCursor(0, 15);
  display.print(F("a drop"));
  display.setCursor(0, 30);
  display.print(F("of"));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();



 ledcWriteTone(spkrPin, MI);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Doe"));
  display.setCursor(0, 15);
  display.print(F("a drop"));
  display.setCursor(0, 30);
  display.print(F("of gol"));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();








 ledcWriteTone(spkrPin, RE);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Ray"));
  display.setCursor(0, 15);
  display.print(F("a drop"));
  display.setCursor(0, 30);
  display.print(F("of golden"));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();






 




ledcWriteTone(spkrPin, FA);
  delay(700);

 display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Ray"));
  display.setCursor(0, 15);
  display.print(F("a drop"));
  display.setCursor(0, 30);
  display.print(F("of golden"));
  display.setCursor(0, 45 );
  display.print(F("sun"));

  display.display();




  ledcWriteTone(spkrPin, 0); // no sound
  delay(100);



  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Ray"));
  display.setCursor(0, 15);
  display.print(F("a drop"));
  display.setCursor(0, 30);
  display.print(F("of golden"));
  display.setCursor(0, 45 );
  display.print(F("sun"));

  display.display();



















//  Me, a name I call myself


  ledcWriteTone(spkrPin, MI); // ミは
  delay(600);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Me"));
  display.setCursor(0, 15);
  display.print(F(""));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));

 

  display.display();












 ledcWriteTone(spkrPin, FA);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Me"));
  display.setCursor(0, 15);
  display.print(F("a"));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));


  display.display();






ledcWriteTone(spkrPin, SO);
  delay(600);

 display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Me"));
  display.setCursor(0, 15);
  display.print(F("a name"));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));


  display.display();



ledcWriteTone(spkrPin, MI);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Me"));
  display.setCursor(0, 15);
  display.print(F("a name"));
  display.setCursor(0, 30);
  display.print(F("I"));
  display.setCursor(0, 45 );
  display.print(F(""));


  display.display();




ledcWriteTone(spkrPin, SO);
  delay(400);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Me"));
  display.setCursor(0, 15);
  display.print(F("a name"));
  display.setCursor(0, 30);
  display.print(F("I call"));
  display.setCursor(0, 45 );
  display.print(F(""));


  display.display();




ledcWriteTone(spkrPin, MI);
  delay(400);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Me"));
  display.setCursor(0, 15);
  display.print(F("a name"));
  display.setCursor(0, 30);
  display.print(F("I call"));
  display.setCursor(0, 45 );
  display.print(F("my"));


  display.display();




ledcWriteTone(spkrPin, SO);
  delay(700);

  display.clearDisplay();

display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Me"));
  display.setCursor(0, 15);
  display.print(F("a name"));
  display.setCursor(0, 30);
  display.print(F("I call"));
  display.setCursor(0, 45 );
  display.print(F("myself"));


  display.display();








  ledcWriteTone(spkrPin, 0); // no sound
  delay(100);



  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Me"));
  display.setCursor(0, 15);
  display.print(F("a name"));
  display.setCursor(0, 30);
  display.print(F("I call"));
  display.setCursor(0, 45 );
  display.print(F("myself"));

  display.display();



















// Far, a long, long way to run


ledcWriteTone(spkrPin, FA); // ファは
  delay(600);

  display.clearDisplay();


  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Far"));
  display.setCursor(0, 15);
  display.print(F(""));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));
 

  display.display();












 ledcWriteTone(spkrPin, SO);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Far"));
  display.setCursor(0, 15);
  display.print(F("a"));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();




 ledcWriteTone(spkrPin, RA);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Far"));
  display.setCursor(0, 15);
  display.print(F("a long"));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();





 ledcWriteTone(spkrPin, RA);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Far"));
  display.setCursor(0, 15);
  display.print(F("a long long"));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();



 ledcWriteTone(spkrPin, SO);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Far"));
  display.setCursor(0, 15);
  display.print(F("a long long"));
  display.setCursor(0, 30);
  display.print(F("way"));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();








 ledcWriteTone(spkrPin, FA);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Far"));
  display.setCursor(0, 15);
  display.print(F("a long long"));
  display.setCursor(0, 30);
  display.print(F("way"));
  display.setCursor(0, 45 );
  display.print(F("to"));

  display.display();






 




ledcWriteTone(spkrPin, RA);
  delay(700);

 display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Far"));
  display.setCursor(0, 15);
  display.print(F("a long long"));
  display.setCursor(0, 30);
  display.print(F("way"));
  display.setCursor(0, 45 );
  display.print(F("to run"));

  display.display();




  ledcWriteTone(spkrPin, 0); // no sound
  delay(100);



  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Far"));
  display.setCursor(0, 15);
  display.print(F("a long long"));
  display.setCursor(0, 30);
  display.print(F("way"));
  display.setCursor(0, 45 );
  display.print(F("to run"));

  display.display();














// Sew, a needle pulling thread


ledcWriteTone(spkrPin, SO); // ソは
  delay(600);

  display.clearDisplay();


  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Sew"));
  display.setCursor(0, 15);
  display.print(F(""));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));
 

  display.display();












 ledcWriteTone(spkrPin, DO);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Sew"));
  display.setCursor(0, 15);
  display.print(F("a"));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();




 ledcWriteTone(spkrPin, RE);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Sew"));
  display.setCursor(0, 15);
  display.print(F("a nee"));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();





 ledcWriteTone(spkrPin, MI);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Sew"));
  display.setCursor(0, 15);
  display.print(F("a needle"));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();



 ledcWriteTone(spkrPin, FA);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Sew"));
  display.setCursor(0, 15);
  display.print(F("a needle"));
  display.setCursor(0, 30);
  display.print(F("pull"));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();








 ledcWriteTone(spkrPin, SO);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Sew"));
  display.setCursor(0, 15);
  display.print(F("a needle"));
  display.setCursor(0, 30);
  display.print(F("pulling"));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();






 




ledcWriteTone(spkrPin, RA);
  delay(700);

 display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Sew"));
  display.setCursor(0, 15);
  display.print(F("a needle"));
  display.setCursor(0, 30);
  display.print(F("pulling"));
  display.setCursor(0, 45 );
  display.print(F("thread"));

  display.display();




  ledcWriteTone(spkrPin, 0); // no sound
  delay(100);



  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Sew"));
  display.setCursor(0, 15);
  display.print(F("a needle"));
  display.setCursor(0, 30);
  display.print(F("pulling"));
  display.setCursor(0, 45 );
  display.print(F("thread"));

  display.display();
















//La, a note to follow Sew


ledcWriteTone(spkrPin, RA); // ラは
  delay(600);

  display.clearDisplay();


  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("La"));
  display.setCursor(0, 15);
  display.print(F(""));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));
 

  display.display();












 ledcWriteTone(spkrPin, RE);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("La"));
  display.setCursor(0, 15);
  display.print(F("a"));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();




 ledcWriteTone(spkrPin, MI);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("La"));
  display.setCursor(0, 15);
  display.print(F("a note"));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();





 ledcWriteTone(spkrPin, _FA);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("La"));
  display.setCursor(0, 15);
  display.print(F("a note"));
  display.setCursor(0, 30);
  display.print(F("to"));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();



 ledcWriteTone(spkrPin, SO);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("La"));
  display.setCursor(0, 15);
  display.print(F("a note"));
  display.setCursor(0, 30);
  display.print(F("to fo"));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();








 ledcWriteTone(spkrPin, RA);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("La"));
  display.setCursor(0, 15);
  display.print(F("a note"));
  display.setCursor(0, 30);
  display.print(F("to follow"));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();






 




ledcWriteTone(spkrPin, TI);
  delay(700);

 display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("La"));
  display.setCursor(0, 15);
  display.print(F("a note"));
  display.setCursor(0, 30);
  display.print(F("to follow"));
  display.setCursor(0, 45 );
  display.print(F("Sew"));

  display.display();




  ledcWriteTone(spkrPin, 0); // no sound
  delay(100);



  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("La"));
  display.setCursor(0, 15);
  display.print(F("a note"));
  display.setCursor(0, 30);
  display.print(F("to follow"));
  display.setCursor(0, 45 );
  display.print(F("Sew"));

  display.display();





















// Tea, a drink with jam and bread


ledcWriteTone(spkrPin, TI); // シは
  delay(600);

  display.clearDisplay();


  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Tea"));
  display.setCursor(0, 15);
  display.print(F(""));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));
 

  display.display();












 ledcWriteTone(spkrPin, MI);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Tea"));
  display.setCursor(0, 15);
  display.print(F("a"));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();




 ledcWriteTone(spkrPin, _FA);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Tea"));
  display.setCursor(0, 15);
  display.print(F("a drink"));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();





 ledcWriteTone(spkrPin, _SO);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Tea"));
  display.setCursor(0, 15);
  display.print(F("a drink"));
  display.setCursor(0, 30);
  display.print(F("with"));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();



 ledcWriteTone(spkrPin, RA);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Tea"));
  display.setCursor(0, 15);
  display.print(F("a drink"));
  display.setCursor(0, 30);
  display.print(F("with jam"));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();








 ledcWriteTone(spkrPin, TI);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Tea"));
  display.setCursor(0, 15);
  display.print(F("a drink"));
  display.setCursor(0, 30);
  display.print(F("with jam"));
  display.setCursor(0, 45 );
  display.print(F("and"));

  display.display();






 




ledcWriteTone(spkrPin, octDO);
  delay(500);

 display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Tea"));
  display.setCursor(0, 15);
  display.print(F("a drink"));
  display.setCursor(0, 30);
  display.print(F("with jam"));
  display.setCursor(0, 45 );
  display.print(F("and bread"));

  display.display();




  ledcWriteTone(spkrPin, 0); // no sound
  delay(100);



  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("Tea"));
  display.setCursor(0, 15);
  display.print(F("a drink"));
  display.setCursor(0, 30);
  display.print(F("with jam"));
  display.setCursor(0, 45 );
  display.print(F("and bread"));

  display.display();















// That will bring us back to Do


ledcWriteTone(spkrPin, TI); // さあ
  delay(200);

  display.clearDisplay();


  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("That"));
  display.setCursor(0, 15);
  display.print(F(""));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));
 

  display.display();



ledcWriteTone(spkrPin, _RA);
  delay(200);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("That will"));
  display.setCursor(0, 15);
  display.print(F(""));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();






ledcWriteTone(spkrPin, RA);
  delay(400);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("That will"));
  display.setCursor(0, 15);
  display.print(F("bring"));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();




ledcWriteTone(spkrPin, FA);
  delay(400);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("That will"));
  display.setCursor(0, 15);
  display.print(F("bring us"));
  display.setCursor(0, 30);
  display.print(F(""));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();







ledcWriteTone(spkrPin, TI);
  delay(400);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("That will"));
  display.setCursor(0, 15);
  display.print(F("bring us"));
  display.setCursor(0, 30);
  display.print(F("back"));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();





ledcWriteTone(spkrPin, SO);
  delay(400);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("That will"));
  display.setCursor(0, 15);
  display.print(F("bring us"));
  display.setCursor(0, 30);
  display.print(F("back to"));
  display.setCursor(0, 45 );
  display.print(F(""));

  display.display();



ledcWriteTone(spkrPin, octDO);
  delay(700);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("That will"));
  display.setCursor(0, 15);
  display.print(F("bring us"));
  display.setCursor(0, 30);
  display.print(F("back to"));
  display.setCursor(0, 45 );
  display.print(F("DO"));

  display.display();






ledcWriteTone(spkrPin, 0); // no sound
  delay(100);

  display.clearDisplay();

  display.setTextSize(2.0);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print(F("That will"));
  display.setCursor(0, 15);
  display.print(F("bring us"));
  display.setCursor(0, 30);
  display.print(F("back to"));
  display.setCursor(0, 45 );
  display.print(F("DO"));

  display.display();









}

void setup(){
  pinMode(spkrPin, OUTPUT);
  ledcAttach(spkrPin, 12000, 8); //Pin setting(Pin num, Max frequency, Resolution)
}

void loop() {
  playmusic();
  delay(3000);
}