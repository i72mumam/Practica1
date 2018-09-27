# Comandos Ramas I
1.Ver listado de ramas:

&nbsp;
`git  branch`

&nbsp;
2.Crear una rama:

&nbsp;
`git  branch  nombre_rama`

&nbsp;
3.Cambiarnos a una rama:

&nbsp;
`git  checkout  nombre_rama`

&nbsp;
4.Crear una rama y moverse en un paso:

&nbsp;
`git  checkout  -b nombre_rama`

&nbsp;
5.Comparar ramas:

&nbsp;
`git  diff  nombre_rama .. nombre_rama`

&nbsp;
# Comandos Ramas II
1.Ver ramas idénticas a la actual:

&nbsp;
`git  branch  --merged`

&nbsp;
2.Renombrar ramas:

&nbsp;
`git  branch  -m nombre_antiguo  nombre_nuevo`

&nbsp;
3.Eliminar ramas

&nbsp;
~~~
git  branch  -d nombre_rama
git  branch  -D nombre_rama
~~~

&nbsp;
4.Integrar ramas a la actual:


&nbsp;
`git  merge  nombre_rama`


&nbsp;
5.Resolver confictos (se suele hacer manualmente):


&nbsp;
`git  merge  --abort`


&nbsp;
# Comandos Ramas III
1.Almacenar cambios temporales:

&nbsp;
`git  stash  save "Mensaje"`

&nbsp;
2.Listar cambios:

&nbsp;
`git  stash  list`

&nbsp;
3.Ver contenido de un cambio temporal:

&nbsp;
`git  stash  show -p nombre_stash`

&nbsp;
4.Eliminar un cambio temporal:

&nbsp;
`git  stash  drop  nombre_stash`

&nbsp;
5.Aplicar cambio del
stash
:

&nbsp;
~~~
git  stash  apply  nombre_stash
git  stash  pop  nombre_stash
~~~
