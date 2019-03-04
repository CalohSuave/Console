<?php

function ruta()
{
    return getcwd();
}

function llistat($dir){
		$pwd = getcwd().DIRECTORY_SEPARATOR.$dir;

		if($dir != null){
			if (is_dir($pwd)) {
				return scandir($pwd);
			}else{
				return "$dir no es una carpeta";
			}
		}
}