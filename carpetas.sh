#!/bin/bash
clear

function grupo {
read -p "Ingrese un grupo :" grupo
echo
addgroup $grupo
./carpetas.sh
}

function usuario {
read -p "Ingrese el tipo de usuario: 1-Maestro 2-Alumno 3-Salir " op
echo
case $op in
        1*)
		if [ -d /home/Maestros ]; then
		read  -p "Ingrese un usuario: " user
		echo
		useradd $user -d /home/Maestros/$user -m
		passwd $user
		adduser $user Profesor
		./carpetas.sh
		else
		mkdir /home/Maestros
 		read  -p "Ingrese un usuario: " user
                echo
                useradd $user -d /home/Maestros/$user -m
                passwd $user
		adduser $user Profesor
                ./carpetas.sh
		fi
		;;
        2*)
		if [ -d /home/Estudiantes ]; then
                read  -p "Ingrese un usuario: " user
                echo
                useradd $user -d /home/Estudiantes/$user -m
                passwd $user
                adduser $user Estudiante
                ./carpetas.sh
                else
                mkdir /home/Estudiantes
                read  -p "Ingrese un usuario: " user
                echo
                useradd $user -d /home/Estudiantes/$user -m
                passwd $user
                adduser $user Estudiante
                ./carpetas.sh
                fi
                ;;

        3*)
                ./carpetas.sh ;;
        *)
                ./carpetas.sh ;;
esac

}

function salir {
exit
}

read -p "Ingrese el numero deseado: 1-Crear usuario 2-Crear grupo 3-Salir " op
echo
case $op in
	1*)
		usuario ;;
	2*)
		grupo ;;
	3*)
		salir ;;
	*)
		./carpetas.sh ;;
esac
