<?php
	session_start();
?>
<!DOCTYPE html>
<html>
<head>
	<link rel="stylesheet" href="enter_style.css">
	<meta charset="utf-8">
	<title>User registration</title>

</head>
<body>

	<div class="enter_form">
		<div class="form_register">
			<H3 class="header3">User registration</H3>
			<br />
			<form  action="check_register.php" method="post">
				<input class="table" type="text" name="user_name" required placeholder="Enter your name"/>
				<br /><br />
				<input class="table" type="text" name="user_mobile" required placeholder="Enter your number phone"/>
				<br /><br />
				<input class="table" type="text" name="login"  required placeholder="Enter login"/>
				<br /><br />
				<input  class="table"type="text" name="passwd" required placeholder="Enter password" />
				<br /><br /><br />
				<input class="butten" type="submit" name="submit" value="Registration">
			</form>
			<br />
			<form  action="cancel_form.php" method="post">
				<input class="butten" type="submit" name="submit" value="Back">
			</form>
			<div class="error">
				<?php 
				if (isset($_SESSION["error"]) && $_SESSION["error"] === "login_error") {
				 	echo "<p> * User with this login is already registered, choose another login.<p>";
				 }
				else if (isset($_SESSION["error"]) && $_SESSION["error"] === "mobile_error") {
					echo "<p> * A user with this phone number is already registered, enter another number.<p>";
				}
				else if (isset($_SESSION["error"]) && $_SESSION["error"] === "long_error") {
					echo "<p> * The login can contain no more than 12 characters, choose another login.<p>";
				}
				else if (isset($_SESSION["error"]) && $_SESSION["error"] === "field_error") {
					echo "<p> * All fields must be filled in.<p>";
				}
				?></div>
		</div>
	</div>
</body>
</html>