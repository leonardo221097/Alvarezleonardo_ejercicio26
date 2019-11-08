multiplica.dat: multiplica.x
	./multiplica.x > multiplica.dat
multiplica.x : punto2clase26.cpp
	c++ clase26.cpp -o clase26.x
	./clase26.x
	c++ punto2clase26.cpp -o multiplica.x


		

