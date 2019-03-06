#include <Wire.h>  //加载Wire通讯库
#include <LiquidCrystal_I2C.h>  //加载液晶屏库
LiquidCrystal_I2C lcd(0x27,16,2);  // 设 LCD的地址为0x27，16列2行
 
//显示字符
#if defined(ARDUINO) && ARDUINO >= 100
#define printByte(args)  write(args);
#else
#define printByte(args)  print(args,BYTE);
#endif
 
//要显示的汉字编码，定义为一个数组
uint8_t bell[8]  = {0x4,0xe,0xe,0xe,0x1f,0x0,0x4}; //铃
uint8_t note[8]  = {0x2,0x3,0x2,0xe,0x1e,0xc,0x0};  //音符
uint8_t clock[8] = {0x0,0xe,0x15,0x17,0x11,0xe,0x0};//钟
uint8_t heart[8] = {0x0,0xa,0x1f,0x1f,0xe,0x4,0x0}; //爱心
uint8_t duck[8]  = {0x0,0xc,0x1d,0xf,0xf,0x6,0x0}; //鸭子
uint8_t check[8] = {0x0,0x1,0x3,0x16,0x1c,0x8,0x0}; //对勾
uint8_t cross[8] = {0x0,0x1b,0xe,0x4,0xe,0x1b,0x0}; //叉
uint8_t retarrow[8] = {  0x1,0x1,0x5,0x9,0x1f,0x8,0x4}; //回车
 
void setup(){
  lcd.init();     //初始化LCD
  lcd.backlight(); //打开背光
  
//创建新字符，将每个数组映射为一个字符，分别命名为0,1,2,3,4
  lcd.createChar(0, bell);
  lcd.createChar(1, note);
  lcd.createChar(2, clock);
  lcd.createChar(3, heart);
  lcd.createChar(4, duck);
  lcd.createChar(5, check);
  lcd.createChar(6, cross);
  lcd.createChar(7, retarrow);
 //将字符显示到光标所在位 
  lcd.setCursor(0,0);
  lcd.printByte(3);
  lcd.setCursor(2,0);
  lcd.print("Hu Qian Qian");
  lcd.setCursor(15,0);
  lcd.printByte(3);
  lcd.setCursor(0,3);
  lcd.printByte(3);
  lcd.setCursor(3,1);
  lcd.print("I");
  lcd.setCursor(6,1);
  lcd.printByte(3);
  lcd.setCursor(9,1);
  lcd.print("You!");
  lcd.setCursor(15,1);
  lcd.printByte(3);
  
  } 
void loop(){ 
}
