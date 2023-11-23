source.out: source.o company.o employees.o managers.o
	g++ source.o company.o employees.o managers.o -o source.out

source.o: source.cpp
	g++ -c source.cpp

company.o: company.cpp
	g++ -c company.cpp

employees.o: employees.cpp
	g++ -c employees.cpp

managers.o: managers.cpp
	g++ -c managers.cpp

clean:
	rm *.o source.out

