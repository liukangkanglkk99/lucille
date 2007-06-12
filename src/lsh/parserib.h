typedef union {
char            string[1024];
float           num;
ri_ptr_array_t *paramarray;
} YYSTYPE;
#define	STRING	257
#define	ID	258
#define	NUM	259
#define	LBRACKET	260
#define	RBRACKET	261
#define	AREALIGHTSOURCE	262
#define	ATTRIBUTE	263
#define	ATTRIBUTEBEGIN	264
#define	ATTRIBUTEEND	265
#define	CLIPPING	266
#define	CONCATTRANSFORM	267
#define	COLOR	268
#define	COORDINATESYSTEM	269
#define	DECLARE	270
#define	DEPTHOFFIELD	271
#define	DISPLAY	272
#define	EXPOSURE	273
#define	FORMAT	274
#define	FRAMEBEGIN	275
#define	FRAMEEND	276
#define	FRAMEASPECTRATIO	277
#define	HIDER	278
#define	IDENTITY	279
#define	ILLUMINATE	280
#define	IMAGER	281
#define	LIGHTSOURCE	282
#define	MOTIONBEGIN	283
#define	MOTIONEND	284
#define	OPACITY	285
#define	OPTION	286
#define	ORIENTATION	287
#define	PERSPECTIVE	288
#define	PIXELFILTER	289
#define	PIXELSAMPLES	290
#define	POINTSPOLYGONS	291
#define	POINTSGENERALPOLYGONS	292
#define	PROJECTION	293
#define	POLYGON	294
#define	QUANTIZE	295
#define	ROTATE	296
#define	RIBVERSION	297
#define	SCALE	298
#define	SCREENWINDOW	299
#define	SHADINGRATE	300
#define	SHADINGINTERPOLATION	301
#define	SHUTTER	302
#define	SIDES	303
#define	SPHERE	304
#define	SUBDIVISIONMESH	305
#define	SURFACE	306
#define	TRANSFORM	307
#define	TRANSFORMBEGIN	308
#define	TRANSFORMEND	309
#define	TRANSLATE	310
#define	WORLDBEGIN	311
#define	WORLDEND	312
#define	HIGH_PRECEDENCE	313
#define	UNKNOWN	314


extern YYSTYPE yylval;
