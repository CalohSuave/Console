<?php

include_once 'sistema.inc';

function crea_directori($dir)
{
	$pwd = getcwd().DIRECTORY_SEPARATOR.$dir;

     if(!file_exists($pwd)){
     	if(mkdir($pwd)){
     		return "Carpeta $pwd hecha";
     	}else{
     		"No se ha podido crear la carpeta $pwd";
     	}

     }else{
     	return "Esta carpeta ya existe";
     }
}


function esborra_directori($dir)
{
	$pwd = getcwd().DIRECTORY_SEPARATOR.$dir;

	if (file_exists($pwd)) {
		if(rmdir($pwd)){
			return "Se ha eliminado correctamente";

		}else{
			return "No se ha podido eliminar esta carpeta";
		}
		
	}else{
		return "La carpeta $pwd no existe";
	}


}

function mou_directori($dir, $rutadesti)
{
	$pwd = getcwd().DIRECTORY_SEPARATOR.$dir;
	$pwd_destino = getcwd().DIRECTORY_SEPARATOR.$rutadesti;

	if ($dir != null && $rutadesti != null) {
		if(file_exists($pwd)){
			if (rename($pwd, $pwd_destino.DIRECTORY_SEPARATOR.$dir)) {
				return "Estamos en $rutadesti";
			}else{
				return "Error Not Found 404";
			}

		}else{
			return "El path: $dir no existe";
		}

	}else{
		return "Por favor ingresa dos campos existentes";
	}
}

function copia_directori($dir, $rutadesti)
{
	$pwd = getcwd().DIRECTORY_SEPARATOR.$dir;

	if ($dir != null && $rutadesti != null){
		if (is_dir($pwd)) {

		$archivos = scandir($pwd);
		$conetendor_archivos = Array();

			foreach ($archivos as $item) {
				if ($item != "." && $item != ".."){
					array_push($conetendor_archivos,$rutadesti);

				}
			}

			return $conetendor_archivos;
		} else{
			return "$dir no es un directorio valido";
		}
	}else{
		return "Por favor ingresa parametro validos";
	}
}


function cambio_directorio($dir){
	chdir ('./ola2');
	return  getcwd();

}
