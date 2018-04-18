<?php
	session_start();
	if (!$_POST["user_name"] || !$_POST["user_mobile"] || !$_POST["login"] || !$_POST["submit"] || !$_POST["passwd"] || $_POST["submit"] !== "Registration") {
		$_SESSION["error"] = "field_error";
		echo "string";
		header("Location: user_register.php");
		return ;
	}
	if (!file_exists("private")) {
		mkdir("private");
	}
	if (file_exists("private/passwd")) {
		$array_data = unserialize(file_get_contents("private/passwd"));
		if (strlen($_POST["login"]) > 12) {
			$_SESSION["error"] = "long_error";
			header("Location: user_register.php");
			return;
		}
		foreach ($array_data as $value) {
			if ($value["login"] === $_POST["login"]) {
				$_SESSION["error"] = "login_error";
				header("Location: user_register.php");
				return;
			}
			if ($value["user_mobile"] === $_POST["user_mobile"]) {
				$_SESSION["error"] = "mobile_error";
				header("Location: user_register.php");
				return;
			} 
		}
	}
	$array_data[] = ["user_name" => $_POST["user_name"], "user_mobile" => $_POST["user_mobile"], "login" => $_POST["login"], "passwd" => hash('whirlpool', $_POST["passwd"])];
	file_put_contents("private/passwd", serialize($array_data));
	$_SESSION["error"] = "";
	header("Location: user_enter.php");
?>
