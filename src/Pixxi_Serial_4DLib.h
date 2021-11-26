/*
	Arduino Library for 4D Systems Serial Environement for Pixxi
	Pixxi_Serial_4DLib.h
*/
 
#ifndef Pixxi_Serial_4DLib_h
#define Pixxi_Serial_4DLib_h
 
#if (ARDUINO >= 100)
	#include "Arduino.h" // for Arduino 1.0
#else
	#include "WProgram.h" // for Arduino 23
#endif

#include "Pixxi_Const4D.h"	         	// Defines for 4dgl constants, generated by conversion of 4DGL constants to target language
#include <string.h>

typedef void (*Tcallback4D)(int, unsigned char); 
int Pixxi_Serial_4DLib::TimeLimit4D=0;
class Pixxi_Serial_4DLib
{
	public:
		Pixxi_Serial_4DLib(Stream * virtualPort);
		Tcallback4D Callback4D ;
		
		//Compound 4D Routines
		word bus_In();
		void bus_Out(word Bits);
		word bus_Read();
		void bus_Set(word IOMap);
		void bus_Write(word Bits);
		word charheight(char  TestChar);
		word charwidth(char  TestChar);
		word file_Close(word  Handle);
		word file_Count(char *  Filename);
		word file_Dir(char *  Filename);
		word file_Erase(char *  Filename);
		word file_Error();
		word file_Exec(char *  Filename, word  ArgCount, t4DWordArray  Args);
		word file_Exists(char *  Filename);
		word file_FindFirst(char *  Filename);
		word file_FindNext();
		char file_GetC(word  Handle);
		word file_GetS(char *  StringIn, word  Size, word  Handle);
		word file_GetW(word  Handle);
		word file_Image(word  X, word  Y, word  Handle);
		word file_Index(word  Handle, word  HiSize, word  LoSize, word  Recordnum);
		word file_LoadFunction(char *  Filename);
		word file_LoadImageControl(char *  Datname, char *  GCIName, word  Mode);
		word file_LoadImageControl(word highOffset, word  lowOffset, word Mode);
		word file_LoadImageControl(int highOffset, int  lowOffset, int Mode);
		word file_Mount();
		word file_Open(char *  Filename, char  Mode);
		word file_PlayWAV(char *  Filename);
		word file_PutC(char  Character, word  Handle);
		word file_PutS(char *  StringOut, word  Handle);
		word file_PutW(word  Word, word  Handle);
		word file_Read(t4DByteArray  Data, word  Size, word  Handle);
		word file_Rewind(word  Handle);
		word file_Run(char *  Filename, word  ArgCount, t4DWordArray  Args);
		word file_ScreenCapture(word  X, word  Y, word  Width, word  Height, word  Handle);
		word file_Seek(word  Handle, word  HiWord, word  LoWord);
		word file_Size(word  Handle, word *  HiWord, word *  LoWord);
		word file_Tell(word  Handle, word *  HiWord, word *  LoWord);
		void file_Unmount();
		word file_Write(word  Size, t4DByteArray  Source, word  Handle);
		word gfx_BevelShadow(word  Value);
		word gfx_BevelWidth(word  Value);
		word gfx_BGcolour(word  Color);
		void gfx_Button(word  Up, word  x, word  y, word  buttonColour, word  txtColour, word  font, word  txtWidth, word  txtHeight, char *   text);
		void gfx_ChangeColour(word  OldColor, word  NewColor);
		void gfx_Circle(word  X, word  Y, word  Radius, word  Color);
		void gfx_CircleFilled(word  X, word  Y, word  Radius, word  Color);
		void gfx_Clipping(word  OnOff);
		void gfx_ClipWindow(word  X1, word  Y1, word  X2, word  Y2);
		void gfx_Cls();
		word gfx_Contrast(word  Contrast);
		void gfx_Ellipse(word  X, word  Y, word  Xrad, word  Yrad, word  Color);
		void gfx_EllipseFilled(word  X, word  Y, word  Xrad, word  Yrad, word  Color);
		word gfx_FrameDelay(word  Msec);
		word gfx_Get(word  Mode);
		word gfx_GetPixel(word  X, word  Y);
		void gfx_Line(word  X1, word  Y1, word  X2, word  Y2, word  Color);
		word gfx_LinePattern(word  Pattern);
		void gfx_LineTo(word  X, word  Y);
		void gfx_MoveTo(word  X, word  Y);
		word gfx_Orbit(word  Angle, word  Distance, word *  Xdest, word *  Ydest);
		word gfx_OutlineColour(word  Color);
		void gfx_Panel(word  Raised, word  X, word  Y, word  Width, word  Height, word  Color);
		void gfx_Polygon(word  n, t4DWordArray  Xvalues, t4DWordArray  Yvalues, word  Color);
		void gfx_PolygonFilled(word  n, t4DWordArray  Xvalues, t4DWordArray  Yvalues, word  Color);
		void gfx_Polyline(word  n, t4DWordArray  Xvalues, t4DWordArray  Yvalues, word  Color);
		void gfx_PutPixel(word  X, word  Y, word  Color);
		void gfx_Rectangle(word  X1, word  Y1, word  X2, word  Y2, word  Color);
		void gfx_RectangleFilled(word  X1, word  Y1, word  X2, word  Y2, word  Color);
		void gfx_ScreenCopyPaste(word  Xs, word  Ys, word  Xd, word  Yd, word  Width, word  Height);
		word gfx_ScreenMode(word  ScreenMode);
		void gfx_Set(word  Func, word  Value);
		void gfx_SetClipRegion();
		word gfx_Slider(word  Mode, word  X1, word  Y1, word  X2, word  Y2, word  Color, word  Scale, word  Value);
		word gfx_Transparency(word  OnOff);
		word gfx_TransparentColour(word  Color);
		void gfx_Triangle(word  X1, word  Y1, word  X2, word  Y2, word  X3, word  Y3, word  Color);
		void gfx_TriangleFilled(word  X1, word  Y1, word  X2, word  Y2, word  X3, word  Y3, word  Color);
		void gfx_Scale(word hndl, word params);
		void gfx_Panel2(word options, word x, word y, word width, word height, word offset1, word offset2, word mainColor, word shadowColor, word fillColor);
		void gfx_Button4(word value, word hndl, word params);
		void gfx_Switch(word value, word hndl, word params);
		void gfx_Slider5(word value, word hndl, word params);
		void gfx_Dial(word value, word hndl, word params);
		void gfx_Led(word value, word hndl, word params);
		void gfx_Gauge(word value, word hndl, word params);
		void gfx_AngularMeter(word value, word hndl, word params);
		void gfx_LedDigit(word x, word y, word digitSize, word onColour, word offColour, word value);
		void gfx_RulerGauge(word value, word hndl, word params);
		void gfx_LedDigits(word value, word hndl, word params);
		word img_ClearAttributes(word  Handle, word  Index, word  Value);
		word img_Darken(word  Handle, word  Index);
		word img_Disable(word  Handle, word  Index);
		word img_Enable(word  Handle, word  Index);
		word img_GetWord(word  Handle, word  Index, word  Offset );
		word img_Lighten(word  Handle, word  Index);
		word img_SetAttributes(word  Handle, word  Index, word  Value);
		word img_SetPosition(word  Handle, word  Index, word  Xpos, word  Ypos);
		word img_SetWord(word  Handle, word  Index, word  Offset , word  Word);
		word img_Show(word  Handle, word  Index);
		word img_Touched(word  Handle, word  Index);
		void img_FunctionCall(word imgHndl, word index, word value, word hndl, word params, word argCount, word strMap);
		word media_Flush();
		void media_Image(word  X, word  Y);
		word media_Init();
		word media_RdSector(t4DSector  SectorIn);
		word media_ReadByte();
		word media_ReadWord();
		void media_SetAdd(word  HiWord, word  LoWord);
		void media_SetSector(word  HiWord, word  LoWord);
		void media_Video(word  X, word  Y);
		void media_VideoFrame(word  X, word  Y, word  Framenumber);
		word media_WriteByte(word  Byte);
		word media_WriteWord(word  Word);
		word media_WrSector(t4DSector  SectorOut);
		word mem_Alloc(word size);
		word mem_Free(word  Handle);
		word mem_Heap();
		word pin_HI(word Pin);
		word peekM(word  Address);
		word pin_LO(word Pin);
		word pin_Read(word Pin);
		word pin_Set(word Mode, word Pin);
                void putCH(word  WordChar);
		void pokeM(word  Address, word  WordValue) ;
		word putstr(char *  InString);
		//---------------------print----------------------/
		
		void print(const __FlashStringHelper *);
		void print(const String &);
		void print(const char[]);
		void print(char);
		void print(unsigned char, int = DEC);
		void print(int, int = DEC);
		void print(unsigned int, int = DEC);
		void print(long, int = DEC);
		void print(unsigned long n, int = DEC);
		void print(double, int = 2);
		
		void println(const __FlashStringHelper *);
		void println(const String &);
		void println(const char[]);
	        void println(char);
		void println(unsigned char, int = DEC);
		void println(int, int = DEC);
		void println(unsigned int, int = DEC);
		void println(long, int = DEC);
		void println(unsigned long, int = DEC);
		void println(double, int = 2);

		//------------------------------------------------/
		void snd_BufSize(word  Bufsize);
		void snd_Continue();
		void snd_Pause();
		word snd_Pitch(word  Pitch);
		word snd_Playing();
		void snd_Stop();
		void snd_Volume(word  Volume);
		word str_Ptr(word buffer);
		word sys_Sleep(word  Units);
		void touch_DetectRegion(word  X1, word  Y1, word  X2, word  Y2);
		word touch_Get(word  Mode);
		void touch_Set(word  Mode);
		word txt_Attributes(word  Attribs);
		word txt_BGcolour(word  Color);
		word txt_Bold(word  Bold);
		word txt_FGcolour(word  Color);
		word txt_FontID(word  FontNumber);
		word txt_Height(word  Multiplier);
		word txt_Inverse(word  Inverse);
		word txt_Italic(word  Italic);
		void txt_MoveCursor(word  Line, word  Column);
		word txt_Opacity(word  TransparentOpaque);
		void txt_Set(word  Func, word  Value);
		word txt_Underline(word  Underline);
		word txt_Width(word  Multiplier);
		word txt_Wrap(word  Position);
		word txt_Xgap(word  Pixels);
		word txt_Ygap(word  Pixels);
		word file_CallFunction(word  Handle, word  ArgCount, t4DWordArray  Args);
		word sys_GetModel(char *  ModelStr);
		word sys_GetVersion();
		word sys_GetPmmC();
		word writeString(word  Handle, char *  StringOut);
		word readString(word  Handle, char *  StringIn);
		void blitComtoDisplay(word  X, word  Y, word  Width, word  Height, t4DByteArray  Pixels);
		void SendWordArrayToRAM(word  hndl, word  length, word * data);
		void SendByteArrayToRAM(word  hndl, word  length, char * data);
		word file_FindFirstRet(char *  Filename, char *  StringIn);
		word file_FindNextRet(char *  StringIn);
		void setbaudWait(word  Newrate);
		word widget_Create(word count);
		void widget_Add(word hndl, word index, word widget);
		void widget_Delete(word hndl, word index);
		word widget_Realloc(word hndl, word count);
		word widget_SetWord(word Handle, word  Index, word  Offset , word  Word);
		word widget_GetWord(word  Handle, word  Index, word  Offset );
		word widget_SetPosition(word  Handle, word  Index, word  Xpos, word  Ypos);
		word widget_Enable(word  Handle, word  Index);
		word widget_Disable(word  Handle, word  Index);
		word widget_SetAttributes(word  Handle, word  Index, word  Value);
		word widget_ClearAttributes(word  Handle, word  Index, word  Value);
		word widget_Touched(word  Handle, word  Index);
		void widget_InitGradRAM(word hndl);		
		word widget_InitString(char * str);
		word widget_InitStringPtr(char * str);
		word widget_InitStringArray(char * str, word len);
		void widget_Init(word len, word * data, word * hndl, word * param);
		
		void GetAck(void);
		
		//4D Global Variables Used
		int Error4D;  				// Error indicator,  used and set by Intrinsic routines
		unsigned char Error4D_Inv;	// Error byte returned from com port, onl set if error = Err_Invalid
	//	int Error_Abort4D;  		// if true routines will abort when detecting an error
		unsigned int TimeLimit4D;	// time limit in ms for total serial command duration, 2000 (2 seconds) should be adequate for most commands
									// assuming a reasonable baud rate AND low latency AND 0 for the Serial Delay Parameter
									// temporary increase might be required for very long (bitmap write, large image file opens)
									// or indeterminate (eg file_exec, file_run, file_callFunction) commands
		
	private:
        Stream * _virtualPort;

		//Intrinsic 4D Routines
		void WriteChars(char * charsout);
		void WriteBytes(char * Source, int Size);
		void WriteWords(word * Source, int Size);
		void getbytes(char * data, int size);
		word GetWord(void);
		void getString(char * outStr, int strLen);
		word GetAckResp(void);
		word GetAckRes2Words(word * word1, word * word2);
		void GetAck2Words(word * word1, word * word2);
		word GetAckResSector(t4DSector Sector);
		word GetAckResStr(char * OutStr);
		word GetAckResData(t4DByteArray OutData, word size);
		void SetThisBaudrate(int Newrate);
		
		void printNumber(unsigned long, uint8_t);
		void printFloat(double number, uint8_t digits);
};
 
#endif
