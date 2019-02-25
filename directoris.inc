<?php

DEFINE('DS', DIRECTORY_SEPARATOR); 

function crea_directori($dir)
{

	$pwd = getcwd().DS.$dir

      if(!is_dir($pwd)){
         (mkdir($pwd,0755,true))
         return "Carpeta $dir creada correctament";
        } else {
         return "La carpeta $dir ja existeix";
        }

}

function esborra_directori($dir) {

  $pwd = getcwd().DS.$dir
  
  if (is_dir($pwd)) {
    $objects = scandir($pwd);
    foreach ($objects as $object) {
      if ($object != "." && $object != "..") {
        if (filetype($pwd."/".$object) == "dir") 
           esborra_directori($dir."/".$object); 
        else unlink   ($pwd."/".$object);
      }
    }
    reset($objects);
    rmdir($pwd);
  }
 }