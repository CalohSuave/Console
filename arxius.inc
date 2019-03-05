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

function mou_fitxer($fitxer, $rutadesti)
{
	$pwd = getcwd().DIRECTORY_SEPARATOR.$fitxer;
	$pwd_destino = getcwd().DIRECTORY_SEPARATOR.$rutadesti;

	if ($fitxer != null && $rutadesti != null) {
		if(file_exists($pwd)){
			if (rename($pwd, $pwd_destino.DIRECTORY_SEPARATOR.$fitxer)) {
				return "Estamos en $rutadesti";
			}else{
				return "Error Not Found 404";
			}

		}else{
			return "El $fitxer no existe";
		}

	}else{
		return "Por favor ingresa dos campos existentes";
	}
}

function sha1_fun($fitxer){
	$pwd = getcwd().DIRECTORY_SEPARATOR.$fitxer;

	if ($fitxer != null) {
	 	if (file_exists($pwd)) {
	 		if (is_file($pwd)) {
				return " SHA1 de $fitxer: ".sha1_file($pwd);
	 		}else{
	 			return "Illo que esto no e' una arshivo";
	 		}
	 	}else{
	 		return "El archivo $fitxer no existe";
	 	}
	}else{
		return "Por favor escribe un nombre de archivo";

}
}

function md5_fun($fitxer){
	$pwd = getcwd().DIRECTORY_SEPARATOR.$fitxer;

	if ($fitxer != null) {
	 	if (file_exists($pwd)) {
	 		if (is_file($pwd)) {
				return " MD5 de $fitxer: ".md5_file($pwd);
	 		}else{
	 			return "Illo que esto no e' una arshivo";
	 		}
	 	}else{
	 		return "El archivo $fitxer no existe";
	 	}
	}else{
		return "Por favor escribe un nombre de archivo";

}
}

function esborra_fitxer($fitxer){
	$pwd = getcwd().DIRECTORY_SEPARATOR.$fitxer;

	if ($fitxer != null){
		if (file_exists($pwd)) {
			if (!is_dir($pwd)) {
				if (unlink($pwd)) {
					return "Se ha borrado correctamente el archivo $fitxer";
				}else{
					return " Ops! No se ha podido borrar $fitxer";
				}
			}else{
			return "No se puede ya que $fitxer es una carpeta";

			}
		}else{
		return "No existe el archivo: $fitxer";}

	}else{
		return "Ingresa un campo";
	}

}