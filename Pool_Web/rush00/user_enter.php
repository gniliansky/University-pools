<?php
	session_start();
?>
<!DOCTYPE html>
<html>
<head>
	<link rel="stylesheet" href="enter_style.css">
	<meta charset="utf-8">
	<title>Login user</title>

</head>
<body>

	<div class="enter_form">
		<div class="form_enter">
			<H3 class="header3">Login user</H3>
			<br />
			<form  action="check_enter.php" method="post">
				<input class="table" type="text" name="login" required placeholder="Enter login"/>
				<br /><br />
				<input  class="table"type="text" name="passwd" required placeholder="Enter password" />
				<br /><br /><br />
				<input class="butten" type="submit" name="submit" value="Enter">
				
			</form>
			<br />
			<form  action="cancel_form.php" method="post">
				<input class="butten" type="submit" name="submit" value="Back">
			</form>
			<div class="error">
				<?php 
				if (isset($_SESSION["error"]) && $_SESSION["error"] === "passwd_error") {
					echo "<p> * Incorrect login or password entered.<p>";
				}
				else if (isset($_SESSION["error"]) && $_SESSION["error"] === "field_error") {
					echo "<p> * All fields must be filled in.<p>";
				}
				?></div>
		</div>
	</div>
</body>
</html>