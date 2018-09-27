# TUTORIAL GIT

## INTRODUCCION A GIT

1. Introducción.
2. Instalación y cofiguración.
3. Uso básico.
4. Ramas.
5. Github.


![GIT](https://www.redeszone.net/app/uploads/2013/03/Git-Logo.png?x=480)


&nbsp;
Sistema para el control distribuido de versiones de código. Fundamentalmente permite:

 * Dar seguimiento a los cambios realizados sobre un archivo.
 * Almacenar una copia de los cambios.

## Instalación
Para instalar Git: https://git-scm.com.	(En el curso se utilizará Git a través de líneas de comandos.)

## Configuración básica


&nbsp;
Nombre del administrador:


&nbsp;
`git  config  --global  user.name "Antonio M. Durán  Rosal"`


&nbsp;
Correo electrónico:


&nbsp;
`git  config  --global  user.email  aduran@uco.es`


&nbsp;
Editor de texto:


&nbsp;
`git  config  --global  core.editor "gedit"`


&nbsp;
Color de la interfaz:


&nbsp;
`git  config  --global  color.ui true`


&nbsp;
Listado de la configuración:


&nbsp;
`git  config  --list`


&nbsp;
## Comandos básicos I


&nbsp;
Iniciar repositorio en un directorio:


&nbsp;
`git  init`


&nbsp;
Agregar cambios al area de staging:


&nbsp;
`git  add`


&nbsp;
Validar cambios en el repositorio:


&nbsp;
`git  commit  -m "Mensaje"`


&nbsp;
Hacer los dos pasos anteriores en uno:


&nbsp;
`git  commit  -am "Mensaje"`


&nbsp;
Historial de commits:


&nbsp;
`git  log`


&nbsp;
## Comandos básicos II


&nbsp;
Ayuda del listado anterior:


&nbsp;
`git  help  log`


&nbsp;
Listar los 5 commits más recientes:


&nbsp;
`git  log -n 5`


&nbsp;
Listar los commits desde una fecha:


&nbsp;
`git  log  --since =2018 -09 -18`


&nbsp;
Listar los commits por autor:


&nbsp;
`git  log  --author =" Antonio"`


&nbsp;
Ver cambios en el directorio:


&nbsp;
`git  status`


&nbsp;
## Comandos básicos III


&nbsp;
Ver diferencia entre ficheros en el directorio y el repositorio de git:


&nbsp;
`git  diff`


&nbsp;
Ver diferencia entre ficheros en el staging y el repositorio:


&nbsp;
`git  diff  --staged`


&nbsp;
Eliminar archivos:

~~~
git rm  archivo
git  commit  -m "Mensaje"
~~~


&nbsp;
Mover o renombrar archivos:

~~~
git mv  antiguo  nuevo
git  commit  -m "Mensaje"
~~~
