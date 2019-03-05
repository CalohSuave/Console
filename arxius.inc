<?php
function find_fitxer($fitxer,$dir){

	$pwd = getcwd().DIRECTORY_SEPARATOR.$dir;
	$archivos = scandir($pwd);

	if ($fitxer != null) {
		foreach ($archivos as $toFind) {
			if (is_file($pwd.DIRECTORY_SEPARATOR.$toFind)) {
				if(strtolower($fitxer) == strtolower($toFind)){
					return "El archivo $fitxer esta en $pwd";
				}
			}
		}
		return "El archivo $fitxer no existe";
	}else{
		return "Por favor ingrese el nombre de un archivo";
	}

}
function copia_fitxer($fitxer,$rutadesti){

	$pwd = getcwd().DIRECTORY_SEPARATOR.$fitxer;
	$contenedor_archivos = getcwd().DIRECTORY_SEPARATOR.$rutadesti;

	if ($fitxer != null && $rutadesti != null) {
		if(file_exists($pwd)){
			if (is_dir($contenedor_archivos)) {
				if (copy($pwd, $contenedor_archivos.DIRECTORY_SEPARATOR.$fitxer)) {
					return "Se ha copiado correctamente el $fitxer";
				}
			}else{
				return " No se encuentra el directorio $rutadesti";
			}

		}else{
			return "El archivo $fitxer no se encuentra";
		}
		
	}else{
		return " Ingresa parametros validos";
	}
}