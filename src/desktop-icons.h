#ifndef _desktop_icons_
#define _desktop_icons_

#define DRIVE_A_TYPE  PEEK(0x848e)
#define DRIVE_B_TYPE  PEEK(0x848f)
#define DRIVE_C_TYPE  PEEK(0x8490)
#define DRIVE_D_TYPE  PEEK(0x8491)

struct icontab *myicontab;
struct iconpic fileIcons[8];
struct window fileIconWindows[8];
unsigned char fileIconNames[8][17];
unsigned char fileIconSelected[8];

char drvIcon1541[] = {192,0,0,0,63,255,252,64,0,2,95,255,250,
95,255,250,64,0,2,71,255,194,71,255,194,71,255,194,68,0,66,
87,255,194,71,255,194,127,255,254,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0};

char drvIcon1571[] = {192,0,0,0,127,255,254,64,66,2,64,126,2,
64,66,2,119,255,242,119,255,242,64,66,2,64,126,2,85,66,114,
107,66,114,64,66,2,127,255,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0};

char drvIcon1581[] = {192,0,0,0,127,255,254,64,66,2,64,126,2,
64,66,2,119,255,242,119,255,242,64,66,2,64,126,2,85,66,114,
107,66,114,64,66,2,127,255,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0};

char drvIconREU[] = {192,0,0,0,127,255,254,64,0,2,64,0,2,127,
255,254,64,0,2,127,255,254,64,0,2,127,255,254,64,0,2,64,0,2,
64,0,2,64,0,2,127,255,254,64,32,0,64,44,234,85,42,138,64,44,
202,64,42,138,127,234,238,0,0,0};

char trashIcon[] = {192,171,255,234,126,33,127,228,81,3,190,
74,125,193,255,131,192,0,69,162,16,69,162,16,171,165,40,171,
149,41,17,152,197,17,136,198,17,200,194,43,88,194,43,212,198,
38,101,69,71,229,41,66,64,40,131,240,16,142,94,16,121,171,255,
234};

char printerIcon[] = {192,170,170,170,85,85,85,170,170,170,
87,255,213,171,0,106,85,188,53,171,128,42,87,28,85,174,0,255,
90,60,131,177,0,69,99,255,233,199,255,157,192,0,63,255,255,
222,128,0,93,159,192,90,128,6,85,128,0,106,255,255,213,170,
170,170};

char closeIcon[] = {150,255,255,128,1,128,1,128,1,135,225,135,
225,135,225,128,1,128,1,128,1,255,255};

char cbmFileIcon[] = {192,
0,1,252,0,2,2,255,252,1,128,0,1,129,248,1,131,248,1,135,7,193,
135,7,129,135,0,1,135,7,129,131,7,193,129,248,1,129,248,1,128,0,1,
129,130,1,130,6,1,131,138,1,130,95,1,129,130,1,128,0,1,255,255,255
};

char fileIconImages[][] = {
    {192, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {192, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {192, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {192, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {192, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {192, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {192, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {192, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};

void initIconTable();
char *getDriveIcon(unsigned char id);
void updateDriveIcons();
void updateFileIcon(unsigned char iconnumber, char *icon_pic);
void clearAllFileIcons();
void selectFileIcon(unsigned char iconnumber);
void unselectFileIcon(unsigned char iconnumber);
void unselectAllFileIcons();
void unselectAllFileIconsExcept(unsigned char iconnumber);
void iconHandler();
void iconCloseDiskHandler();
void iconHandlerDrvA();
void iconHandlerDrvB();
void iconHandlerDrvC();
void iconHandlerDrvD();
void iconHandlerRunApp();



#endif