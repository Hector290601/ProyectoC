int subirCalificaciones(Alumno **ha, Grupo **hg, int idP){
	Grupo *aux = *hg;
	Alumno *auxa = *ha;
	printf("Ingrese la calificaión del alumno por ID\n");
	while(aux != NULL){ //recorrer los grupos para buscar a los alumnos
		printf("Recorriendo los grupos\n");
		if((aux -> maestro)-1 == idP){
			printf("Grupo encontrado\n");
			break;
		}else{
			aux = aux -> sig;
			printf("siguiente grupo\n");
		}
	}
	for(int i = 0; i < 30; i++){
		printf("Buscando alumnos\n");
		if(auxa -> id == i){
			printf("Ingrese la calificación del alumno\n");
			scanf("%f", &(auxa->calificaciones));
		}else if(aux -> sig != NULL){
			printf("siguiente alumno\n");
			aux = aux->sig;
		}else if(aux == NULL){
			printf("No se han encontrado alumnos inscritos\n");
			break;
		}
	}
	return 0;
}