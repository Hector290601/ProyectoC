void mostrarGrupo(Grupo *h, int id){
	Grupo* aux = h;
	printf("antes: %p\n", h);
	while(aux->id != id){
		if(aux->id = id){
			break;
		}else{
			aux = aux->sig;
			printf("%p -> ", aux);
		}
	}
	printf("al finalh: %p\n", aux);
	printf("ID: %d\nNúmero de Alumnos: %d\nProfesor: %s\n", aux->id, aux->numeroDeAlumnos, aux->maestro);
	free(aux);
}