void nuevoAlumno(Alumno **h, Grupo **hg){
	Alumno* nuevo = (Alumno*) malloc(sizeof(Alumno));
	if(nuevo != NULL){
		int i = 0;
		printf("Estás crando un nuevo alumno\n");
		if(*h == NULL){
			*h = nuevo;
		}else{
			(*h)-> sig = nuevo;
		}
		nuevo->id = idAlumno;
		idAlumno ++;
		printf("Nombre:\n");
		scanf("%s", &(nuevo->nombre));
		printf("Apellido Paterno:\n");
		scanf("%s", &(nuevo -> apellidoPaterno));
		printf("Apellido Materno:\n");
		scanf("%s", &(nuevo -> apellidoMaterno));
		printf("Semestre:\n");
		scanf("%d", &(nuevo -> anio));
		printf("Datos de alumno crado:\n");
		mostrarAlumno(nuevo, (nuevo->id));
		Grupo* aux = *hg;
		while(aux != NULL){
			for(int j = 0; j < 30; j++){
				if((aux ->alumnos[j]) == -1){
					aux ->alumnos[j] = nuevo->id;
					mostrarGrupo(aux, aux->id);
					break;
				}
			}
			aux = aux -> sig;
		}
	}
}
