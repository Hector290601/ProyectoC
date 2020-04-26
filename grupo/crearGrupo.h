void crearGrupo(Grupo ** h, Grupo **t, int idProfesor){
	printf("iteración %d\n", idProfesor);
	srand(time(NULL));
	Grupo *nuevo = (Grupo *) malloc(sizeof(Grupo));
	if(*h == *t){
		*h = nuevo;
		*t = nuevo;
	}else{
		(*t) -> sig = nuevo;
	}
	nuevo -> id = idGpo;
	idGpo ++;
	nuevo -> maestro = idProfesor;
	for(int i = idAlumno; i < (idAlumno * (idGpo + 1)); i++){
		nuevo -> alumnos[i] = idAlumno;
	}
}