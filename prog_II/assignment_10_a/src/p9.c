/* Nombre Fichero: src/p9.c */

#include "p9.h"

short int crearBBDDbinario(char *nombreFich) {
  FILE *fd = NULL;
  short int ret = -1;
  Ficha_t peli;

  fd = fopen(nombreFich,"wb");

  if (fd != NULL)
    {

      peli.year = 2016;
      strcpy(peli.titulo,"La la land");
      peli.genero = MUSICAL;
      peli.notaIMDB = 8.7;

      fwrite(&peli, sizeof(Ficha_t), 1, fd);

      peli.year = 1976;
      strcpy(peli.titulo,"Rocky");
      peli.genero = DRAMA;
      peli.notaIMDB = 8.1;

      fwrite(&peli, sizeof(Ficha_t), 1, fd);

      peli.year = 1975;
      strcpy(peli.titulo,"The rocky horror picture show");
      peli.genero = MUSICAL;
      peli.notaIMDB = 7.4;

      fwrite(&peli, sizeof(Ficha_t), 1, fd);

      peli.year = 1977;
      strcpy(peli.titulo,"Saturday night fever");
      peli.genero = DRAMA;
      peli.notaIMDB = 6.8;

      fwrite(&peli, sizeof(Ficha_t), 1, fd);

      peli.year = 1960;
      strcpy(peli.titulo,"The apartment");
      peli.genero = COMEDIA;
      peli.notaIMDB = 8.3;

      fwrite(&peli, sizeof(Ficha_t), 1, fd);

      peli.year = 1959;
      strcpy(peli.titulo,"Some like it hot");
      peli.genero = COMEDIA;
      peli.notaIMDB = 8.3;

      fwrite(&peli, sizeof(Ficha_t), 1, fd);

      peli.year = 1995;
      strcpy(peli.titulo,"Se7en");
      peli.genero = THRILLER;
      peli.notaIMDB = 8.6;

      fwrite(&peli, sizeof(Ficha_t), 1, fd);

      peli.year = 1997;
      strcpy(peli.titulo,"Seven years in Tibet");
      peli.genero = DRAMA;
      peli.notaIMDB = 7.0;

      fwrite(&peli, sizeof(Ficha_t), 1, fd);

      peli.year = 2002;
      strcpy(peli.titulo,"The ring");
      peli.genero = TERROR;
      peli.notaIMDB = 7.1;

      fwrite(&peli, sizeof(Ficha_t), 1, fd);

      peli.year = 2004;
      strcpy(peli.titulo,"Saw");
      peli.genero = TERROR;
      peli.notaIMDB = 7.7;

      fwrite(&peli, sizeof(Ficha_t), 1, fd);


      fclose(fd);
      ret = 1;
    }

     return ret;
}

short int cargarBBDDdesdeFichero(BaseDatos_t *bbdd, char *nombreFich) {
  int ret = -1;
  FILE *fd = NULL;
  int i=0;

  if (bbdd!=NULL && nombreFich!=NULL)
    {
      if( access( nombreFich, F_OK ) != -1 )
	{
	  // file exists
	  if( access( nombreFich, R_OK ) != -1 )
	    {
	      // file is readable
	      fd = fopen(nombreFich,"rb");

	      if (fd != NULL)
		{
		  while(!feof(fd) && i < TAM_BBDD)
		    {
		      fread(&bbdd->listaPeliculas[i],sizeof(Ficha_t),1,fd);
		      i++;
		    }

		  if (i==1)
		    {
		      // file error in fread
		      printf("\nError leyendo el fichero !!\n");
		      ret = -1;
		    }
		  else
		    {
		      ret = 1;
		      printf("\nLeídos %d fichas de %s\n", i-1, nombreFich);
		      bbdd->num_peliculas = i-1;

		      while(i < TAM_BBDD)
			{
			  bbdd->listaPeliculas[i].year = -1;
			  bbdd->listaPeliculas[i].notaIMDB = -1;
			  i++;
			}

		      fclose(fd);
		    }
		}
	      else
		{
		  // file is not readable
		  printf("\nError leyendo el fichero!!\n");
		  ret = -1;
		}

	    }
	  else
	    {
	      // file is not readable
	      printf("\nError no tenemos permisos de lectura!!\n");
	      ret = -1;
	    }


	}
      else
	{
	  // file doesn't exist
	  printf("\nError el fichero no existe!!\n");
	  ret = -1;
	}
    }
  else
    printf("\nError en los parámetros de entrada\n");


  printf("\n");

  return ret;

}

short int compararBBDD(BaseDatos_t *bbdd, unsigned short op) {
  short int ret = 0;
  int  i=0;

  if(bbdd->num_peliculas != 10)
    return -1;

  switch (op)
  {
    case 0:
      ret = 0;
      for (i=0;i<bbdd->num_peliculas-1;i++)
      {
	if (strcmp(bbdd->listaPeliculas[i].titulo,bbdd->listaPeliculas[i+1].titulo)>0)
	  ret = -1;
      }

      break;
    case 1:
      ret = 0;
      for (i=0;i<bbdd->num_peliculas-1;i++)
      {
	if (bbdd->listaPeliculas[i].year > bbdd->listaPeliculas[i+1].year)
	  ret = -1;
      }
      break;
    case 2:
           ret = 0;
      for (i=0;i<bbdd->num_peliculas-1;i++)
      {
	if (bbdd->listaPeliculas[i].notaIMDB > bbdd->listaPeliculas[i+1].notaIMDB)
	  ret = -1;
      }
      break;
    default:
      ret = 0;
      break;
  }
  return ret;
}

int mostrarPelicula(const Ficha_t *peli) {
  int ret=-1;
  if(peli!=NULL)
  {
  	  printf ("Título : \t\t%s\n", peli->titulo);

		  printf ("Año : \t\t\t%d\n", peli->year);

		  switch (peli->genero)
		    {
		    case DRAMA:
		      printf ("Género : \t\tDrama\n");

		      break;

		    case COMEDIA:
		      printf ("Género : \t\tComedia\n");

		      break;

		    case THRILLER:
		      printf ("Género : \t\tThriller\n");
		      break;

		    case MUSICAL:
		      printf ("Género : \t\tMusical\n");
		      break;

		    case TERROR:
		      printf ("Género : \t\tTerror\n");
		      break;

		    default:
		      break;
		    }

		  printf ("Nota IMDB : \t\t%f\n\n", peli->notaIMDB);

		  ret=1;
  }
  return ret;
}

int mostrarBBDDenPantallaDesdeFichero(const char *nombreFich) {
  int ret = -1;
  FILE *fd = NULL;
  int n=0;
  Ficha_t temp;

  if (nombreFich!=NULL)
    {
      if( access( nombreFich, F_OK ) != -1 )
	{
	  // file exists
	  if( access( nombreFich, R_OK ) != -1 )
	    {
	      // file is readable
	      fd = fopen(nombreFich,"rb");

	      if (fd != NULL)
		{
		  while(!feof(fd))
		    {
		      n = fread(&temp,sizeof(Ficha_t),1,fd);

		      if (n>0)
			mostrarPelicula(&temp);
		    }
		  fclose(fd);
		  ret = 1;
		}
	      else
		{
		  // file is not readable
		  printf("\nError leyendo el fichero!!\n");
		  ret = -1;
		}

	    }
	  else
	    {
	      // file is not readable
	      printf("\nError no tenemos permisos de lectura!!\n");
	      ret = -1;
	    }


	}
      else
	{
	  // file doesn't exist
	  printf("\nError el fichero no existe!!\n");
	  ret = -1;
	}
    }
  else
    printf("\nError en los parámetros de entrada\n");


  printf("\n");

  return ret;

}

short int ordenarPorTitulo(const char *nombreFich) {
  if (!nombreFich)
    return -1;

  FILE* pf = NULL;
  Ficha_t aux_struct_a;
  Ficha_t aux_struct_b;
  int n_elms = 0, chk_change = 1;

  if (!(pf = fopen(nombreFich, "r+")))
    return -1;

  fseek(pf, 0, SEEK_END);
  n_elms = ftell(pf)/sizeof(Ficha_t);

  for (int i = 0; i < n_elms - 1 && chk_change; i++) {
    rewind(pf);
    chk_change = 0;
    for (int k = 0; k < n_elms - (i + 1); k++) {
      fread(&aux_struct_a, sizeof(Ficha_t), 1, pf);
      fread(&aux_struct_b, sizeof(Ficha_t), 1, pf);
      if (strcmp(aux_struct_a.titulo, aux_struct_b.titulo) > 0) {
        chk_change = 1;
        fseek(pf, -2 * sizeof(Ficha_t), SEEK_CUR);
        fwrite(&aux_struct_b, sizeof(Ficha_t), 1, pf);
        fwrite(&aux_struct_a, sizeof(Ficha_t), 1, pf);
      }
      fseek(pf, -1 * sizeof(Ficha_t), SEEK_CUR);
    }
  }
  return 0;
  }

short int ordenarPorYear(const char *nombreFich) {
  if (!nombreFich)
    return -1;

  FILE* pf = NULL;
  Ficha_t aux_struct_a;
  Ficha_t aux_struct_b;
  int n_elms = 0, chk_change = 1;

  if (!(pf = fopen(nombreFich, "r+")))
    return -1;

  fseek(pf, 0, SEEK_END);
  n_elms = ftell(pf)/sizeof(Ficha_t);

  for (int i = 0; i < n_elms - 1 && chk_change; i++) {
    rewind(pf);
    chk_change = 0;
    for (int k = 0; k < n_elms - (i + 1); k++) {
      fread(&aux_struct_a, sizeof(Ficha_t), 1, pf);
      fread(&aux_struct_b, sizeof(Ficha_t), 1, pf);
      if (aux_struct_a.year > aux_struct_b.year) {
        chk_change = 1;
        fseek(pf, -2 * sizeof(Ficha_t), SEEK_CUR);
        fwrite(&aux_struct_b, sizeof(Ficha_t), 1, pf);
        fwrite(&aux_struct_a, sizeof(Ficha_t), 1, pf);
      }
      fseek(pf, -1 * sizeof(Ficha_t), SEEK_CUR);
    }
  }
  return 0;
}

short int ordenarPorNota(const char *nombreFich) {
  if (!nombreFich)
    return -1;

  FILE* pf = NULL;
  Ficha_t aux_struct_a;
  Ficha_t aux_struct_b;
  int n_elms = 0, chk_change = 1;

  if (!(pf = fopen(nombreFich, "r+")))
    return -1;

  fseek(pf, 0, SEEK_END);
  n_elms = ftell(pf)/sizeof(Ficha_t);

  for (int i = 0; i < n_elms - 1 && chk_change; i++) {
    rewind(pf);
    chk_change = 0;
    for (int k = 0; k < n_elms - (i + 1); k++) {
      fread(&aux_struct_a, sizeof(Ficha_t), 1, pf);
      fread(&aux_struct_b, sizeof(Ficha_t), 1, pf);
      if (aux_struct_a.notaIMDB > aux_struct_b.notaIMDB) {
        chk_change = 1;
        fseek(pf, -2 * sizeof(Ficha_t), SEEK_CUR);
        fwrite(&aux_struct_b, sizeof(Ficha_t), 1, pf);
        fwrite(&aux_struct_a, sizeof(Ficha_t), 1, pf);
      }
      fseek(pf, -1 * sizeof(Ficha_t), SEEK_CUR);
    }
  }
  return 0;
}

short int grade_sort_insertion(const char* filename) {
  if (!filename)
    return -1;
  FILE* pf = NULL;
  int n_elms = 0, aux_index, position = 0;
  size_t stru_size = sizeof(Ficha_t);
  Ficha_t stru_a, stru_b;
  if (!(pf = fopen(filename, "r+")))
    return -1;
  fseek(pf, 0, SEEK_END);
  n_elms = ftell(pf) / stru_size;
  for (int i = 1; i < n_elms; i++) {
    aux_index = i - 1;
    fseek(pf, stru_size * aux_index, SEEK_SET);
    fread(&stru_a, stru_size, 1, pf);
    fread(&stru_b, stru_size, 1, pf);
    fseek(pf, -stru_size, SEEK_CUR);
    position = aux_index + 1;
    while (stru_b.notaIMDB < stru_a.notaIMDB && aux_index >= 0 && position > 0) {
      fwrite(&stru_a, stru_size, 1, pf);
      position++;

      position -= 3;
      if (position < 0) {
        fseek(pf, 0, SEEK_SET);
        position = 0;
        break;
      }
      else
        fseek(pf, stru_size * position, SEEK_SET);
      fread(&stru_a, stru_size, 1, pf);
      position++;
      fflush(pf);
      aux_index--;
    }
    fwrite(&stru_b, stru_size, 1, pf);
  }
  return 0;
}
