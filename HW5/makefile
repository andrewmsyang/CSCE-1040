airline:main.o menu.o plane.o crew.o flight.o operatePlane.o operateCrew.o operateFlight.o

g++ main.o menu.o plane.o crew.o flight.o operatePlane.o operateCrew.o operateFlight.o -o airline

main.o:main.cpp menu.h operatePlane.h operateCrew.h operateFlight.h crewMember.h plane.h flight.h
g++ -c main.cpp

menu.o:menu.cpp menu.h
g++ -c menu.cpp

plane.o:plane.cpp plane.h
g++ -c plane.cpp

crew.o:crewMember.cpp crew.h
g++ -c crewMember.cpp

flight.o:flight.cpp flight.h
g++ -c flight.cpp

OperatePlane.o:operatePlane.cpp operatePlane.h
g++ -c operatePlane.cpp

OperateCrew.o:operateCrew.cpp operateCrew.h
g++ -c operateCrew.cpp

OperateFlight.o:operateFlight.cpp operateFlight.h
g++ -c operateFlight.cpp
clean:
 rm *.o airline
