void crearGrupo(Grupo ** h, Grupo **t, int idP){
	Grupo *nuevo = (Grupo *) malloc(sizeof(Grupo));
	if(*h == *t){
		*h = nuevo;
		*t = nuevo;
	}else{
		(*t) -> sig = nuevo;
	}
	nuevo -> id = idGpo;
	nuevo -> maestro = (int) idP;
	nuevo -> numeroDeAlumnos = 0;
	for(int i = 0; i<30; i++){
		nuevo -> alumnos[i] = -1;
	}
	*t = nuevo;
	printf("Grupo creado\n");
	printf("idProfesorDeGrupo: %d\n", nuevo ->id);
	mostrarGrupo(nuevo, nuevo->id);
	idGpo ++;
}