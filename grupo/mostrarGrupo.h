void mostrarGrupo(Grupo *h, int id){
	Grupo* aux = h;
	printf("antes: %p\n", h);
	while(aux->id != id){
		aux = aux->sig;
		printf("%p -> ", aux);
		if(aux->id = id){
			break;
		}
	}
	printf("al finalh: %p\n", aux);
	printf("ID: %d\nNúmero de Alumnos: %d\nProfesor: %s\n", aux->id, aux->numeroDeAlumnos, aux->maestro);
}