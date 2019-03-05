<?php

include 'sistema.inc';
include 'directoris.inc';
include 'arxius.inc';


if($_SERVER['REQUEST_METHOD'] == 'POST' && !empty($_POST['input_cmd'])) {
	session_start();
	$command = $_POST['input_cmd'];
	$arrEnter = explode(' ', trim($command));

	switch ($arrEnter[0]) {
		case 'mkdir':
            $_SESSION['output'] = crea_directori($arrEnter[1]);
			break;

		case 'rm':
		if ($arrEnter[1] == '-d') {
			$eliminar = esborra_directori($arrEnter[2]);

		} else if($arrEnter[1] == '-f'){
			$eliminar = esborra_fitxer($arrEnter[2]);
		}else {
			$eliminar = "Por favor utiliza parametros validos";
		}

		$_SESSION['output'] = $eliminar;

		break;
	

		case 'mv':
		if ($arrEnter[1] == '-d') {
			$cambio = mou_directori($arrEnter[2], $arrEnter[3]);
		}else if($arrEnter[1] == '-f'){
			$cambio = mou_fitxer($arrEnter[2], $arrEnter[3]);

		}else{
			$cambio = "Parametros no validos";
		}

		$_SESSION['output'] = $cambio;
		break;

		case 'pwd':
		$_SESSION['output'] = ruta();
		break;


		case 'cp':
		if ($arrEnter[1] == '-d') {
			$copiar = copia_directori($arrEnter[2], $arrEnter[3]);
		}else if ($arrEnter[1] == '-f') {
			$copiar = copia_fitxer($arrEnter[2], $arrEnter[3]);
		
		}else{
			$copiar = "Por favor ingresa cp carpeta y carpeta destino";
		}

		$_SESSION['output'] = $copiar;
			break;


		case 'ls':
			$_SESSION['output'] = llistat($arrEnter[1]);
			break;
		

		case 'cd':
			$_SESSION['output'] = cambio_directorio($arrEnter[1]);
		break;


		case 'clear':
            $_SESSION['output'] = " ";
        break;


		case 'find':
            $_SESSION['output'] = find_fitxer($arrEnter[1], $arrEnter[2]);
        break;


        case 'sha1':
            $_SESSION['output'] = sha1_fun($arrEnter[1]);
        break;

        case 'md5':
        $_SESSION['output'] = md5_fun($arrEnter[1]);
        break;


		default:
			echo "Hola";
			break;
	}
    header('Location: consola.php');

}

