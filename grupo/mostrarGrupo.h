void mostrarGrupo(Grupo *h, int id){
	printf("Grupo:\n");
	while(h -> id != id){
		h = h->sig;
		if(h -> id = id){
			break;
		}
	}
	printf("ID: %d\nNúmero de Alumnos: %d\nProfesor: %s\n", h -> id, h -> numeroDeAlumnos, h -> maestro);
}