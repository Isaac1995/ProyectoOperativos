#!/bin/bash

while read usuarios
do
{
echo $usuarios
userdel $usuarios
}
done < usuarios.txt
