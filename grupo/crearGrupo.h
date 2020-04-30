void crearGrupo(Grupo ** h, Grupo **t, int idProfesor){
	printf("h: %p\n", (*h));
	printf("prfs:  %d\n", idProfesor);
	printf("t: %p\n", (*t));
	Grupo *nuevo = (Grupo *) malloc(sizeof(Grupo));
	if(*h == *t){
		*h = nuevo;
		*t = nuevo;
	}else{
		(*t) -> sig = nuevo;
		*t = nuevo;
	}
	nuevo -> id = idGpo;
	nuevo -> maestro = idProfesor;
	nuevo -> numeroDeAlumnos = 0;
	for(int i = 0; i<30; i++){
		nuevo -> alumnos[i] = 0;
	}
	idGpo ++;
}