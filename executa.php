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

		}else {
			$eliminar = "Por favor utiliza parametros";
		}
		break;
	

		case 'mv':
		if ($arrEnter[1] == '-d') {
			$cambio = mou_directori($arrEnter[2], $arrEnter[3]);
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
		}else{
			$copiar = "Por favor ingresa cp carpeta y carpeta destino";
		}

		$_SESSION['output'] = $copiar;
			break;
		

		default:
			echo "Hola";
			break;
	}

}

