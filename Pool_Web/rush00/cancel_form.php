<?php
	session_start();
	if ($_POST["submit"] && $_POST["submit"] === "Back") {
		header("Location: index.php");
		$_SESSION["error"] = "";
		return ;
	}
?>