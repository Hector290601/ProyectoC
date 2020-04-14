void menuPrincipal(void){
	int opc, des = 0;
	do{
		printf("Seleccione una opcion\n");
		printf("1)Profesor\n");
		printf("2)Alumno\n");
		if(scanf("%d", &opc) == 1){
			switch(opc){
				case 1:
				break;
				case 2:
					inicioAlumno();
				break;
			}
			des = 1;
		}else{
			setbuf(stdin, NULL);
		}
	}while(des != 1);
}
