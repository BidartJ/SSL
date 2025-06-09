all: TablasDeConversion ConversionTest
	./TablasDeConversion
	./ConversionTest
	$(MAKE) clean
TablasDeConversion: TablasDeConversion.o Conversion.o
	gcc TablasDeConversion.o Conversion.o -o TablasDeConversion -lm
ConversionTest: ConversionTest.o Conversion.o
	gcc ConversionTest.o Conversion.o -o ConversionTest -lm
TablasDeConversion.o: TablasDeConversion.c Conversion.h
	gcc -c TablasDeConversion.c
ConversionTest.o: ConversionTest.c Conversion.h
	gcc -c ConversionTest.c
Conversion.o: Conversion.c Conversion.h
	gcc -c Conversion.c
clean:
	rm Conversion.o
	rm TablasDeConversion.o
	rm ConversionTest.o
	rm TablasDeConversion
	rm ConversionTest
