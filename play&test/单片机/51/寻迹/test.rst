                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Mar 24 2016) (Linux)
                                      4 ; This file was generated Sat Feb 17 21:08:07 2018
                                      5 ;--------------------------------------------------------
                                      6 	.module test
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _main
                                     13 	.globl _Delay
                                     14 	.globl _CY
                                     15 	.globl _AC
                                     16 	.globl _F0
                                     17 	.globl _RS1
                                     18 	.globl _RS0
                                     19 	.globl _OV
                                     20 	.globl _F1
                                     21 	.globl _P
                                     22 	.globl _PS
                                     23 	.globl _PT1
                                     24 	.globl _PX1
                                     25 	.globl _PT0
                                     26 	.globl _PX0
                                     27 	.globl _RD
                                     28 	.globl _WR
                                     29 	.globl _T1
                                     30 	.globl _T0
                                     31 	.globl _INT1
                                     32 	.globl _INT0
                                     33 	.globl _TXD
                                     34 	.globl _RXD
                                     35 	.globl _P3_7
                                     36 	.globl _P3_6
                                     37 	.globl _P3_5
                                     38 	.globl _P3_4
                                     39 	.globl _P3_3
                                     40 	.globl _P3_2
                                     41 	.globl _P3_1
                                     42 	.globl _P3_0
                                     43 	.globl _EA
                                     44 	.globl _ES
                                     45 	.globl _ET1
                                     46 	.globl _EX1
                                     47 	.globl _ET0
                                     48 	.globl _EX0
                                     49 	.globl _P2_7
                                     50 	.globl _P2_6
                                     51 	.globl _P2_5
                                     52 	.globl _P2_4
                                     53 	.globl _P2_3
                                     54 	.globl _P2_2
                                     55 	.globl _P2_1
                                     56 	.globl _P2_0
                                     57 	.globl _SM0
                                     58 	.globl _SM1
                                     59 	.globl _SM2
                                     60 	.globl _REN
                                     61 	.globl _TB8
                                     62 	.globl _RB8
                                     63 	.globl _TI
                                     64 	.globl _RI
                                     65 	.globl _P1_7
                                     66 	.globl _P1_6
                                     67 	.globl _P1_5
                                     68 	.globl _P1_4
                                     69 	.globl _P1_3
                                     70 	.globl _P1_2
                                     71 	.globl _P1_1
                                     72 	.globl _P1_0
                                     73 	.globl _TF1
                                     74 	.globl _TR1
                                     75 	.globl _TF0
                                     76 	.globl _TR0
                                     77 	.globl _IE1
                                     78 	.globl _IT1
                                     79 	.globl _IE0
                                     80 	.globl _IT0
                                     81 	.globl _P0_7
                                     82 	.globl _P0_6
                                     83 	.globl _P0_5
                                     84 	.globl _P0_4
                                     85 	.globl _P0_3
                                     86 	.globl _P0_2
                                     87 	.globl _P0_1
                                     88 	.globl _P0_0
                                     89 	.globl _B
                                     90 	.globl _ACC
                                     91 	.globl _PSW
                                     92 	.globl _IP
                                     93 	.globl _P3
                                     94 	.globl _IE
                                     95 	.globl _P2
                                     96 	.globl _SBUF
                                     97 	.globl _SCON
                                     98 	.globl _P1
                                     99 	.globl _TH1
                                    100 	.globl _TH0
                                    101 	.globl _TL1
                                    102 	.globl _TL0
                                    103 	.globl _TMOD
                                    104 	.globl _TCON
                                    105 	.globl _PCON
                                    106 	.globl _DPH
                                    107 	.globl _DPL
                                    108 	.globl _SP
                                    109 	.globl _P0
                                    110 	.globl _tab
                                    111 ;--------------------------------------------------------
                                    112 ; special function registers
                                    113 ;--------------------------------------------------------
                                    114 	.area RSEG    (ABS,DATA)
      000000                        115 	.org 0x0000
                           000080   116 _P0	=	0x0080
                           000081   117 _SP	=	0x0081
                           000082   118 _DPL	=	0x0082
                           000083   119 _DPH	=	0x0083
                           000087   120 _PCON	=	0x0087
                           000088   121 _TCON	=	0x0088
                           000089   122 _TMOD	=	0x0089
                           00008A   123 _TL0	=	0x008a
                           00008B   124 _TL1	=	0x008b
                           00008C   125 _TH0	=	0x008c
                           00008D   126 _TH1	=	0x008d
                           000090   127 _P1	=	0x0090
                           000098   128 _SCON	=	0x0098
                           000099   129 _SBUF	=	0x0099
                           0000A0   130 _P2	=	0x00a0
                           0000A8   131 _IE	=	0x00a8
                           0000B0   132 _P3	=	0x00b0
                           0000B8   133 _IP	=	0x00b8
                           0000D0   134 _PSW	=	0x00d0
                           0000E0   135 _ACC	=	0x00e0
                           0000F0   136 _B	=	0x00f0
                                    137 ;--------------------------------------------------------
                                    138 ; special function bits
                                    139 ;--------------------------------------------------------
                                    140 	.area RSEG    (ABS,DATA)
      000000                        141 	.org 0x0000
                           000080   142 _P0_0	=	0x0080
                           000081   143 _P0_1	=	0x0081
                           000082   144 _P0_2	=	0x0082
                           000083   145 _P0_3	=	0x0083
                           000084   146 _P0_4	=	0x0084
                           000085   147 _P0_5	=	0x0085
                           000086   148 _P0_6	=	0x0086
                           000087   149 _P0_7	=	0x0087
                           000088   150 _IT0	=	0x0088
                           000089   151 _IE0	=	0x0089
                           00008A   152 _IT1	=	0x008a
                           00008B   153 _IE1	=	0x008b
                           00008C   154 _TR0	=	0x008c
                           00008D   155 _TF0	=	0x008d
                           00008E   156 _TR1	=	0x008e
                           00008F   157 _TF1	=	0x008f
                           000090   158 _P1_0	=	0x0090
                           000091   159 _P1_1	=	0x0091
                           000092   160 _P1_2	=	0x0092
                           000093   161 _P1_3	=	0x0093
                           000094   162 _P1_4	=	0x0094
                           000095   163 _P1_5	=	0x0095
                           000096   164 _P1_6	=	0x0096
                           000097   165 _P1_7	=	0x0097
                           000098   166 _RI	=	0x0098
                           000099   167 _TI	=	0x0099
                           00009A   168 _RB8	=	0x009a
                           00009B   169 _TB8	=	0x009b
                           00009C   170 _REN	=	0x009c
                           00009D   171 _SM2	=	0x009d
                           00009E   172 _SM1	=	0x009e
                           00009F   173 _SM0	=	0x009f
                           0000A0   174 _P2_0	=	0x00a0
                           0000A1   175 _P2_1	=	0x00a1
                           0000A2   176 _P2_2	=	0x00a2
                           0000A3   177 _P2_3	=	0x00a3
                           0000A4   178 _P2_4	=	0x00a4
                           0000A5   179 _P2_5	=	0x00a5
                           0000A6   180 _P2_6	=	0x00a6
                           0000A7   181 _P2_7	=	0x00a7
                           0000A8   182 _EX0	=	0x00a8
                           0000A9   183 _ET0	=	0x00a9
                           0000AA   184 _EX1	=	0x00aa
                           0000AB   185 _ET1	=	0x00ab
                           0000AC   186 _ES	=	0x00ac
                           0000AF   187 _EA	=	0x00af
                           0000B0   188 _P3_0	=	0x00b0
                           0000B1   189 _P3_1	=	0x00b1
                           0000B2   190 _P3_2	=	0x00b2
                           0000B3   191 _P3_3	=	0x00b3
                           0000B4   192 _P3_4	=	0x00b4
                           0000B5   193 _P3_5	=	0x00b5
                           0000B6   194 _P3_6	=	0x00b6
                           0000B7   195 _P3_7	=	0x00b7
                           0000B0   196 _RXD	=	0x00b0
                           0000B1   197 _TXD	=	0x00b1
                           0000B2   198 _INT0	=	0x00b2
                           0000B3   199 _INT1	=	0x00b3
                           0000B4   200 _T0	=	0x00b4
                           0000B5   201 _T1	=	0x00b5
                           0000B6   202 _WR	=	0x00b6
                           0000B7   203 _RD	=	0x00b7
                           0000B8   204 _PX0	=	0x00b8
                           0000B9   205 _PT0	=	0x00b9
                           0000BA   206 _PX1	=	0x00ba
                           0000BB   207 _PT1	=	0x00bb
                           0000BC   208 _PS	=	0x00bc
                           0000D0   209 _P	=	0x00d0
                           0000D1   210 _F1	=	0x00d1
                           0000D2   211 _OV	=	0x00d2
                           0000D3   212 _RS0	=	0x00d3
                           0000D4   213 _RS1	=	0x00d4
                           0000D5   214 _F0	=	0x00d5
                           0000D6   215 _AC	=	0x00d6
                           0000D7   216 _CY	=	0x00d7
                                    217 ;--------------------------------------------------------
                                    218 ; overlayable register banks
                                    219 ;--------------------------------------------------------
                                    220 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        221 	.ds 8
                                    222 ;--------------------------------------------------------
                                    223 ; internal ram data
                                    224 ;--------------------------------------------------------
                                    225 	.area DSEG    (DATA)
      000008                        226 _tab::
      000008                        227 	.ds 8
                                    228 ;--------------------------------------------------------
                                    229 ; overlayable items in internal ram 
                                    230 ;--------------------------------------------------------
                                    231 	.area	OSEG    (OVR,DATA)
                                    232 ;--------------------------------------------------------
                                    233 ; Stack segment in internal ram 
                                    234 ;--------------------------------------------------------
                                    235 	.area	SSEG
      000010                        236 __start__stack:
      000010                        237 	.ds	1
                                    238 
                                    239 ;--------------------------------------------------------
                                    240 ; indirectly addressable internal ram data
                                    241 ;--------------------------------------------------------
                                    242 	.area ISEG    (DATA)
                                    243 ;--------------------------------------------------------
                                    244 ; absolute internal ram data
                                    245 ;--------------------------------------------------------
                                    246 	.area IABS    (ABS,DATA)
                                    247 	.area IABS    (ABS,DATA)
                                    248 ;--------------------------------------------------------
                                    249 ; bit data
                                    250 ;--------------------------------------------------------
                                    251 	.area BSEG    (BIT)
                                    252 ;--------------------------------------------------------
                                    253 ; paged external ram data
                                    254 ;--------------------------------------------------------
                                    255 	.area PSEG    (PAG,XDATA)
                                    256 ;--------------------------------------------------------
                                    257 ; external ram data
                                    258 ;--------------------------------------------------------
                                    259 	.area XSEG    (XDATA)
                                    260 ;--------------------------------------------------------
                                    261 ; absolute external ram data
                                    262 ;--------------------------------------------------------
                                    263 	.area XABS    (ABS,XDATA)
                                    264 ;--------------------------------------------------------
                                    265 ; external initialized ram data
                                    266 ;--------------------------------------------------------
                                    267 	.area XISEG   (XDATA)
                                    268 	.area HOME    (CODE)
                                    269 	.area GSINIT0 (CODE)
                                    270 	.area GSINIT1 (CODE)
                                    271 	.area GSINIT2 (CODE)
                                    272 	.area GSINIT3 (CODE)
                                    273 	.area GSINIT4 (CODE)
                                    274 	.area GSINIT5 (CODE)
                                    275 	.area GSINIT  (CODE)
                                    276 	.area GSFINAL (CODE)
                                    277 	.area CSEG    (CODE)
                                    278 ;--------------------------------------------------------
                                    279 ; interrupt vector 
                                    280 ;--------------------------------------------------------
                                    281 	.area HOME    (CODE)
      000000                        282 __interrupt_vect:
      000000 02 00 06         [24]  283 	ljmp	__sdcc_gsinit_startup
                                    284 ;--------------------------------------------------------
                                    285 ; global & static initialisations
                                    286 ;--------------------------------------------------------
                                    287 	.area HOME    (CODE)
                                    288 	.area GSINIT  (CODE)
                                    289 	.area GSFINAL (CODE)
                                    290 	.area GSINIT  (CODE)
                                    291 	.globl __sdcc_gsinit_startup
                                    292 	.globl __sdcc_program_startup
                                    293 	.globl __start__stack
                                    294 	.globl __mcs51_genXINIT
                                    295 	.globl __mcs51_genXRAMCLEAR
                                    296 	.globl __mcs51_genRAMCLEAR
                                    297 ;	test.c:7: uchar tab[8]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
      00005F 75 08 01         [24]  298 	mov	_tab,#0x01
      000062 75 09 02         [24]  299 	mov	(_tab + 0x0001),#0x02
      000065 75 0A 04         [24]  300 	mov	(_tab + 0x0002),#0x04
      000068 75 0B 08         [24]  301 	mov	(_tab + 0x0003),#0x08
      00006B 75 0C 10         [24]  302 	mov	(_tab + 0x0004),#0x10
      00006E 75 0D 20         [24]  303 	mov	(_tab + 0x0005),#0x20
      000071 75 0E 40         [24]  304 	mov	(_tab + 0x0006),#0x40
      000074 75 0F 80         [24]  305 	mov	(_tab + 0x0007),#0x80
                                    306 	.area GSFINAL (CODE)
      000077 02 00 03         [24]  307 	ljmp	__sdcc_program_startup
                                    308 ;--------------------------------------------------------
                                    309 ; Home
                                    310 ;--------------------------------------------------------
                                    311 	.area HOME    (CODE)
                                    312 	.area HOME    (CODE)
      000003                        313 __sdcc_program_startup:
      000003 02 00 9E         [24]  314 	ljmp	_main
                                    315 ;	return from main will return to caller
                                    316 ;--------------------------------------------------------
                                    317 ; code
                                    318 ;--------------------------------------------------------
                                    319 	.area CSEG    (CODE)
                                    320 ;------------------------------------------------------------
                                    321 ;Allocation info for local variables in function 'Delay'
                                    322 ;------------------------------------------------------------
                                    323 ;xms                       Allocated to registers 
                                    324 ;i                         Allocated to registers r6 r7 
                                    325 ;j                         Allocated to registers r6 r7 
                                    326 ;------------------------------------------------------------
                                    327 ;	test.c:9: void Delay(uint xms)
                                    328 ;	-----------------------------------------
                                    329 ;	 function Delay
                                    330 ;	-----------------------------------------
      00007A                        331 _Delay:
                           000007   332 	ar7 = 0x07
                           000006   333 	ar6 = 0x06
                           000005   334 	ar5 = 0x05
                           000004   335 	ar4 = 0x04
                           000003   336 	ar3 = 0x03
                           000002   337 	ar2 = 0x02
                           000001   338 	ar1 = 0x01
                           000000   339 	ar0 = 0x00
      00007A AE 82            [24]  340 	mov	r6,dpl
      00007C AF 83            [24]  341 	mov	r7,dph
                                    342 ;	test.c:12: for (i=xms;i>0;i--);
      00007E                        343 00104$:
      00007E EE               [12]  344 	mov	a,r6
      00007F 4F               [12]  345 	orl	a,r7
      000080 60 07            [24]  346 	jz	00101$
      000082 1E               [12]  347 	dec	r6
      000083 BE FF 01         [24]  348 	cjne	r6,#0xFF,00126$
      000086 1F               [12]  349 	dec	r7
      000087                        350 00126$:
      000087 80 F5            [24]  351 	sjmp	00104$
      000089                        352 00101$:
                                    353 ;	test.c:13: for(j=110;j>0;j--);
      000089 7E 6E            [12]  354 	mov	r6,#0x6E
      00008B 7F 00            [12]  355 	mov	r7,#0x00
      00008D                        356 00107$:
      00008D EE               [12]  357 	mov	a,r6
      00008E 24 FF            [12]  358 	add	a,#0xFF
      000090 FC               [12]  359 	mov	r4,a
      000091 EF               [12]  360 	mov	a,r7
      000092 34 FF            [12]  361 	addc	a,#0xFF
      000094 FD               [12]  362 	mov	r5,a
      000095 8C 06            [24]  363 	mov	ar6,r4
      000097 8D 07            [24]  364 	mov	ar7,r5
      000099 EC               [12]  365 	mov	a,r4
      00009A 4D               [12]  366 	orl	a,r5
      00009B 70 F0            [24]  367 	jnz	00107$
      00009D 22               [24]  368 	ret
                                    369 ;------------------------------------------------------------
                                    370 ;Allocation info for local variables in function 'main'
                                    371 ;------------------------------------------------------------
                                    372 ;i                         Allocated to registers r7 
                                    373 ;------------------------------------------------------------
                                    374 ;	test.c:16: void main()
                                    375 ;	-----------------------------------------
                                    376 ;	 function main
                                    377 ;	-----------------------------------------
      00009E                        378 _main:
                                    379 ;	test.c:21: for(i=0;i<8;i++)
      00009E                        380 00109$:
      00009E 7F 00            [12]  381 	mov	r7,#0x00
      0000A0                        382 00105$:
                                    383 ;	test.c:23: P1=tab [i];
      0000A0 EF               [12]  384 	mov	a,r7
      0000A1 24 08            [12]  385 	add	a,#_tab
      0000A3 F9               [12]  386 	mov	r1,a
      0000A4 87 90            [24]  387 	mov	_P1,@r1
                                    388 ;	test.c:24: Delay(100);
      0000A6 90 00 64         [24]  389 	mov	dptr,#0x0064
      0000A9 C0 07            [24]  390 	push	ar7
      0000AB 12 00 7A         [24]  391 	lcall	_Delay
      0000AE D0 07            [24]  392 	pop	ar7
                                    393 ;	test.c:21: for(i=0;i<8;i++)
      0000B0 0F               [12]  394 	inc	r7
      0000B1 BF 08 00         [24]  395 	cjne	r7,#0x08,00119$
      0000B4                        396 00119$:
      0000B4 40 EA            [24]  397 	jc	00105$
      0000B6 80 E6            [24]  398 	sjmp	00109$
                                    399 	.area CSEG    (CODE)
                                    400 	.area CONST   (CODE)
                                    401 	.area XINIT   (CODE)
                                    402 	.area CABS    (ABS,CODE)
