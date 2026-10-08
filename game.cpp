#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void start(void);
void items(void);
int choose1(void);
void bed(void);
void photo(void);
void card1(void);
void card2(void);
void card3(void);
void card4(void);
void desk(void);
void diary(void);
void cabinet(void);
void door1(void);
void box(void);
void key(void);
void house(void);
int choose2(void);
void livingroom(void);
void kitchen(void);
void study(void);
void bathroom(void);
void door2(void);
void lock(void);
void note(void);
void forest(void);

int player;
bool nothing = true;
bool Photo = false;
bool Card1 = false;
bool Card2 = false;
bool Card3 = false;
bool Card4 = false;
bool Diary = false;
bool Key = false;
bool room1 = false;
bool room2 = false;
bool Note = false;
int n1=0;
int n2=0;
//-------------------------------------------
int main()
{
  //第一關
  cout << "注意: 所有選項一律輸入數字，輸入其他東西使系統當機概不負責。" << endl;
  start();
  
  while (true)
  {
    if (room1) break;
    
    int a = choose1();
    if (a==1)
      bed();
    if (a==2)
      desk();
    if (a==3)
      cabinet();
    if (a==4)
      door1();
    if (a==5)
      items();
  }
  //第二關
  house();

  while (true)
  {
    if (room2) break;
    
    int a = choose2();
    if (a==1)
      livingroom();
    if (a==2)
      kitchen();
    if (a==3)
      study();
    if (a==4)
      bathroom();
    if (a==5)
      door2();
    if (a==6)
      items();
  }
  //第三關
  forest();
  return 0;
}
//-----------------------------------------------
void start()
{
  srand(time(NULL));
  player = rand() % 1000 ;
  cout << "你睜開眼，發現自己身處一個陌生的房間之中。" << endl;
  cout << "牆上用紅色的字跡寫著: " << endl;
  cout << "--------------------" << endl;
  cout << "玩家" << player << "進入遊戲" << endl;
  cout << "任務1: 離開房間" << endl;
  cout << "--------------------" << endl;
  cout << "你環顧四周，散落一地的雜物，櫃子裡擺著無數二次元立牌，就連書桌上也擺著幾本漫畫書。" << endl;
  cout << "毫無疑問的，這是一個沉迷二次元的宅男(女)的房間。" << endl;
  cout << "看著任務，你決定先搜索一下房間。" << endl;
  return;
  
}

void items()
{
  cout << "目前搜尋到的物品:" << endl;
  if (nothing)
    cout << "無" << endl;
  if (Photo)
    photo();
  if (Diary)
    diary();
  if (Key)
    key();
  if (Note)
    note();
  if (Card1)
    card1();
  if (Card2)
    card2();
  if (Card3)
    card3();
  if (Card4)
    card4();
  return;
}

int choose1()
{
  int n;
  cout << "--------------------" << endl;
  cout << "你想調查(輸入數字1~5)：" << endl << "1.床" << endl << "2.書桌" << endl << "3.櫃子" << endl << "4.門" << endl << "5.查看目前搜尋到的物品" << endl;
  cin >> n;
  cout << "--------------------" << endl;
  return n;
}

void bed()
{
  nothing = false;
  cout << "潔白的床鋪，這大概是整個房間裡最乾淨的部分了。" << endl;
  cout << "你看到床頭櫃上有一張合照，從左至右分別是一個身穿黑色t恤的男人、穿著紅色連衣裙的小女孩，以及戴著墨鏡，穿著淺藍色外套的年輕女子。" << endl;
  cout << "你猜這應該是這間房子的主人。" << endl;
  Photo = true;
  cout << "你把棉被掀起來看了下床，並沒有什麼發現。" << endl;
  cout << "然後你蹲下身，在床底發現了一張黑桃3撲克牌。" << endl;
  Card1 = true;
  return ;
}

void photo()
{
  cout << "床頭櫃上的一張合照：" << endl;
  cout << "從左至右分別是一個身穿黑色t恤的男人、穿著紅色連衣裙的小女孩，以及戴著墨鏡，穿著淺藍色外套的年輕女子。" << endl;
  return;
}

void card1()
{
  cout << "黑桃3撲克牌:" << endl;
  cout << "你在床底下發現的一張牌，不知道有什麼用。" << endl;
  return;
}

void desk()
{
  nothing = false;
  cout << "你翻了一下書桌，發現一本日記。" << endl;
  cout << "稚嫩的筆跡寫著每天發生的事情。" << endl;
  cout << "你翻了幾頁，發現一個特別的規律:" << endl << "從星期一到星期五分別是用紅、綠、藍、黑、紫五種顏色，六日則是橘色。" << endl << "大概是日記主人的習慣吧。" << endl;
  Diary = true;
  return;
}

void diary()
{
  cout << "在書桌上找到的日記：" << endl;
  cout << "從星期一到星期五分別是用紅、綠、藍、黑、紫五種顏色，六日則是橘色。" << endl;
  return;
}

void cabinet()
{
  int n;
  cout << "你在一堆立牌裡，發現一個格格不入的保險箱。" << "上面有一個三位數密碼鎖。" << endl;
  cout << "1.試著打開保險箱" << "2.離開  (輸入數字1或2)" << endl;
  cin >> n;
  if (n==1)
    box();
  return;
}

void box()
{
  int k = 413;
  int n;
  cout << "輸入密碼(輸入三位數字): ";
  while (cin>>n)
  {
    if (n==k)
    {
      cout << "你成功打開保險箱，裡面有一個鑰匙。" << endl;
      Key = true;
      nothing = false;
      break;
    }
    else
    {
      int b;
      cout << "密碼錯誤!請再試一次。" << endl;
      cout << "1.繼續試" << endl << "2.離開" << endl;
      cin >> b;
      if (b==2)
        break;
      cout << "輸入密碼(輸入三位數字): ";
    }
  }
  return;
}

void key()
{
  cout << "從保險箱裡拿出來的鑰匙" << endl;
  return;
}

void door1()
{
  cout << "很普通的一扇門，有一個鑰匙孔。" << endl;
  if (Key)
  {
    cout << "你用鑰匙開了門。" << endl;
    room1 = true;
  }
  return;
}

void house()
{
  cout << "你離開了房間。" << endl;
  cout << "一出房門，你就看到熟悉的紅色字跡:" << endl;
  cout << "--------------------" << endl;
  cout << "玩家" << player << "達成任務1" << endl;
  cout << "任務2: 離開屋子" << endl;
  cout << "--------------------" << endl;
  cout << "顯然，離開房間只是一個開始。" << endl;
  cout << "你不知道後面還有幾個任務。" << endl;
  cout << "為了早點離開這詭異的房子，你開始了下一輪的搜索。" << endl;
  return;
}

int choose2()
{
  int n;
  cout << "--------------------" << endl;
  cout << "你想調查(輸入數字1~6)：" << endl << "1.客廳" << endl << "2.廚房" << endl << "3.書房" << endl << "4.廁所" << endl << "5.大門" << endl << "6.查看目前搜尋到的物品" << endl;
  cin >> n;
  cout << "--------------------" << endl;
  return n;
}

void livingroom()
{
  cout << "你來到客廳。" << endl;
  if (n1==0)
  {
    cout << "你看到茶几上寫著一張字條:" << endl;
    cout << "跟隨我的指引，前往" << endl;
    cout << "時間定格之處" << endl;
    cout << "智慧匯集之所" << endl;
    cout << "炊煙升起之地" << endl;
    cout << "獲得你正在尋找的事物。" << endl;
    Note = true;
    n1++;
  }
  else
  {
    while (true)
    {
      int a;
      cout << "你想調查(輸入數字1~4): " << endl;
      cout << "1.沙發" << endl << "2.電視" << endl << "3.時鐘" << endl << "4.離開" << endl;
      cin >> a;
      if (a==1)
        cout << "柔軟的沙發，讓人想躺在上面好好地睡覺。" << endl;
      if (a==2)
        cout << "早已被關掉的電視，四周沒有遙控器。" << endl;
      if (a==3)
      {
        cout << "分針時針一動也不動，時間好似定格在這一剎那。" << endl;
        cout << "你拿下時鐘，發現後面貼著一張紅心6撲克牌。" << endl;
        Card2 = true;
      }
      if (a==4) break;
    }
  }
  return;
}
void note()
{
  cout << "茶几上的字條:" << endl;
  cout << "跟隨我的指引，前往" << endl;
  cout << "時間定格之處" << endl;
  cout << "智慧匯集之所" << endl;
  cout << "炊煙升起之地" << endl;
  cout << "獲得你正在尋找的事物。" << endl;
  return;
}

void card2()
{
  cout << "紅心6撲克牌:" << endl;
  cout << "你在時鐘後發現的一張牌，不知道有什麼用。" << endl;
  return;
}

void kitchen()
{
  cout << "你來到廚房。" << endl;
  while (true)
  {
    int a;
    cout << "你想調查(輸入數字1~4): " << endl;
    cout << "1.冰箱" << endl << "2.瓦斯爐" << endl << "3.水槽" << endl << "4.離開" << endl;
    cin >> a;
    if (a==2)
      cout << "普通的瓦斯爐，你控制著自己的手不去開啟開關。" << endl;
    if (a==3)
      cout << "乾淨到完全沒有水垢的水槽，可見這水槽的使用次數少的可憐。" << endl;
    if (a==1)
    {
      cout << "空無一物的冰箱，只有一張方塊8撲克牌靜靜地躺在中央。" << endl;
      cout << "你忍不住吐槽: 到底誰會把撲克牌放在冰箱裡?" << endl;
      Card3 = true;
    }
    if (a==4) break;
    }
  return;
}

void card3()
{
  cout << "方塊8撲克牌:" << endl;
  cout << "你在冰箱裡發現的一張牌，不知道有什麼用。" << endl;
  return;
}

void study()
{  
  cout << "你來到書房。" << endl;
  while (true)
  {
    int a;
    cout << "你想調查(輸入數字1~4): " << endl;
    cout << "1.書架" << endl << "2.桌上的書" << endl << "3.抽屜" << endl << "4.離開" << endl;
    cin >> a;
    if (a==1)
      cout << "各種類別的書都有。" << endl << "你甚至在一個角落裡看到18+的BL漫畫。" << endl << "哇嗚，真刺激。" << endl;
    if (a==3)
      cout << "你看到好幾種原子筆整齊的排在抽屜裡，想必它們的主人有著嚴重的強迫症。" << endl;
    if (a==2)
    {
      cout << "你拿起桌上的書翻了一下。" << endl;
      cout << "一張撲克牌掉了出來，是梅花A。" << endl;
      Card4 = true;
    }
    if (a==4) break;
    }
  return;
}

void card4()
{
  cout << "梅花A撲克牌:" << endl;
  cout << "你在書本裡發現的一張牌，不知道有什麼用。" << endl;
  return;
}

void bathroom()
{
  cout << "你來到廁所，想起某六字遊戲中，馬桶是個傳送門。" << endl << "你忍不住好奇地坐在馬桶上，按下了沖水按鈕。" << endl;
  cout << "--------------------" << endl;
  int n = rand()%5+1;
  if (n==1)
    return livingroom();
  if (n==2)
    return kitchen();
  if (n==3)
    return study();
  if (n==4)
    cout << "沒有任何事情發生" << endl;
  if (n==5)
    return door2();
}

void door2()
{
  cout << "你來到了大門。" << endl;
  cout << "這扇大門的門鎖位置有四個符號，分別是梅花、紅心、黑桃、方塊。" << endl << "四符號底下是一個電子螢幕，初始畫面是0000。" << endl;
  cout << "1.試著解開密碼鎖" << "2.離開  (輸入數字1或2)" << endl;
  int n;
  cin >> n;
  if (n==1)
    lock();
  return;
}

void lock()
{
  int k = 1638;
  int n;
  cout << "輸入密碼(輸入四位數字): ";
  while (cin>>n)
  {
    if (n==k)
    {
      cout << "你成功打開大門。" << endl;
      room2 = true;
      break;
    }
    else
    {
      int b;
      cout << "密碼錯誤!請再試一次。" << endl;
      cout << "1.繼續試" << endl << "2.離開" << endl;
      cin >> b;
      if (b==2)
        break;
      cout << "輸入密碼: ";
    }
  }
  return;
}

void forest()
{
  int a, b, c, d;
  cout << "走出屋子，首先映入眼簾的是茂密的樹林和兩條岔路。" << endl;
  cout << "兩條岔路中間立著一個木牌，你走近一看。" << endl;
  cout << "果然，又是熟悉的字跡:" << endl;
  cout << "--------------------" << endl;
  cout << "玩家" << player << "達成任務2" << endl;
  cout << "任務3: 走出樹林" << endl;
  cout << "--------------------" << endl;
  while (true)
  {
    cout << "眼前有兩條岔路，你要走(輸入數字1或2): " << endl << "1.右邊  " << "2.左邊" << endl;
    cin >> a;
    cout << "你向前走，出現三條岔路，你要走(輸入數字1~3): " << endl << "1.右邊  " << "2.中間  " << "3.左邊"  << endl;
    cin >> b;
    cout << "你繼續走，出現三條岔路，你要走(輸入數字1~3): " << endl << "1.右邊  " << "2.中間  " << "3.左邊"  << endl;
    cin >> c;
    cout << "你繼續走，出現三條岔路，你要走(輸入數字1~3): " << endl << "1.右邊  " << "2.中間  " << "3.左邊"  << endl;
    cin >> d;

    if (a==2 and b==2 and c==1 and d==3)
    {
      cout << "你成功走出樹林，看見熟悉的街道。" << endl;
      cout << "一個稚嫩的童聲在你耳邊響起。" << endl;
      cout << "謎之聲: 恭喜玩家" << player << "達成任務3!" << endl;
      cout << "謎之聲: 遊戲結束!" << endl;
      break;
    }
    else
    {
      cout << "你迷失在樹林之中。" << endl;
      cout << "眼前一黑，再次睜眼時又回到了原點。" << endl;
    }
  }
  return;
}