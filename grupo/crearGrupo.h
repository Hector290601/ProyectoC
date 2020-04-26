void crearGrupo(Grupo ** h, Grupo **t, int idProfesor){
/**
	printf("iteración %d\n", idProfesor);
	printf("Reservando espacio\n");
	Grupo *nuevo = (Grupo *) malloc(sizeof(Grupo));
	printf("Espacio reservado\n");
	if(*h == *t){
		*h = nuevo;
		*t = nuevo;
	}else{
		(*t) -> sig = nuevo;
	}
	nuevo -> id = idGpo;
	idGpo ++;
	nuevo -> maestro = idProfesor;
	printf("14");
	for(int i = idAlumno; i < (idAlumno * (idGpo + 1)); i++){
		nuevo -> alumnos[i] = idAlumno;
	}
	printf("Grupo creado:\n");
	mostrarGrupo(*h, nuevo -> id);
**/
}