Lab4_AlexOrdonez:	mainLab.o ClaseParqueo.o claseCarro.o claseEdificio.o
	g++ mainLab.o ClaseParqueo.o claseCarro.o claseEdificio.o -o Lab4_AlexOrdonez
mainLab.o:	mainLab.cpp Parqueo.h edificio.h Carro.h
	g++ -c mainLab.cpp
ClaseParqueo.o:	ClaseParqueo.cpp Parqueo.h
	g++ -c ClaseParqueo.cpp
claseCarro.o:	claseCarro.cpp Carro.h
	g++ -c claseCarro.cpp
claseEdificio.o:	claseEdificio.cpp edificio.h
	g++ -c claseEdificio.cpp  
