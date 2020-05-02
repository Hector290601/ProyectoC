void menuProfesor(Profesor **head, Grupo **h, Grupo **t, Alumno **headAlumno){
	int opc, id;
	do{
		printf("Seleccione una opción:\n1)Modificar datos\n2)Registrar calificaciones\n3)Nuevo profesor\n4)Ver datos de profesor\n5)Salir\n");
		if(scanf("%d", &opc) == 1 && idProfesor > 0){
			switch(opc){
				case 1:
					printf("Ingrese su ID:\n");
               	                        scanf("%d", &id);
                       	                if(id <=idProfesor){
						modificarProfesor(&(*head), id);
                                       	}else{
                                               	printf("ID incorrecto\n");
                                        }
				break;
				case 2:
					printf("Ingrese su ID:\n");
               	                        scanf("%d", &id);
                       	                if(id <=idProfesor){
						subirCalificaciones(&*(headAlumno), &(*h), id);
                                       	}else{
                                               	printf("ID incorrecto\n");
                                        }
				break;
				case 3:
					nuevoProfesor(&(*head));
					crearGrupo(&(*h), &(*t), idProfesor);
				break;
				case 4:
					printf("Ingrese su ID:\n");
               	                        scanf("%d", &id);
                       	                if(id <=idProfesor){
                               	                mostrarProfesor(*head, id);
                                       	}else{
                                               	printf("ID incorrecto\n");
                                        }
				break;
				default:
				break;
			}
		}else if(opc == 3){
			nuevoProfesor(&(*head));
			crearGrupo(&(*h), &(*t), idProfesor);
			//mostrarGrupo((*h), idProfesor);
		}else{
			setbuf(stdin, NULL);
		}
	}while(opc != 5);
}