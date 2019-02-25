<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="utf-8">
     <!-- Required meta tags -->
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
     <!-- Required meta tags -->

    <title>Consola - Eduardo</title>

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" type="text/css" href="estilos.css">
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css" integrity="sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T" crossorigin="anonymous">
    <!-- Bootstrap CSS -->

</head>
<body>

    <form action="executa.php" method="post">
        <main class="container-fluid">
            <!-- https://www.htmlcinco.com/nuevo-elemento-de-html5-main/ -->
            <h2>Consola - Eduardo</h2>
            <p>Bienvenido a la actividad de consola estas en el path <strong><?php echo HOME ?></strong></p>


            <div class="row">
            <span style="margin-left: 20px;" id="userpos"> MBP-de-Eduardo:~ userNameID$:</span>
            <input class="col-xs-10 col-xs-10 col-md-3" id="userpos" type="text" name="input_cmd" style="margin-left:8px ;border:1px solid grey;">
        </div>
        </main>
    </form>


<footer class="footer mt-auto py-3" style="position: absolute;bottom: 0; align-content: center;">
    <div class="container">
        <span class="text-muted"> Eduardo Mejía Cabello - eduardoernan.mejia@gracia.lasalle.cat</span>
    </div>
</footer>


</body>
</html>