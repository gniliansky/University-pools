<?php
session_start();

?>
<!DOCTYPE html>
<html>
<head>
	<link rel="stylesheet" type="text/css" href="header.css">
	<link rel="stylesheet" type="text/css" href="articles.css">
	<title>Mystore</title>
</head>
<body>
	<div class="header">
		<div class="buyme">BUYME</div>

		<div class="right">
		<div class="cart">
			<a href="cart.php"><img src="http://www.pvhc.net/img215/vqnncjvuwxghydmcklvw.png" alt="To cart"></a>
		</div>
		<a href="cart.php"><p class="tocart">to cart</p></a>
	<div class="under_cart">
	<?php 
		if (!$_SESSION[login] && $_SESSION[login] === "")
			echo '
			<div class="login">
				<a href="user_enter.php" style="text-decoration: none";>Login</a>
			</div>
			<div class="register">
				<a href="user_register.php" style="text-decoration: none";>Register</a>
			</div>
			';
		else
			echo '
			<div class="username">Hello,'.$_SESSION['login'].'!</div>
			<div class="logout"><a href="logout.php" style="text-decoration: none";>Log out</a></div>
			';
	?>
	</div></div></div>
</body>
</html>