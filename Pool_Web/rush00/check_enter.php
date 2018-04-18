<?php
	session_start();
	if (!$_POST["login"] || !$_POST["passwd"] || !$_POST["submit"] || $_POST["submit"] !== "Enter") {
		$_SESSION["error"] = "field_error";
		header("Location: user_enter.php");
		return ;
	}
	if (file_exists("private/passwd")) {
		$array_data = unserialize(file_get_contents("private/passwd"));
		foreach ($array_data as $value) {
			if ($value["login"] === $_POST["login"] && $value["passwd"] === hash('whirlpool', $_POST["passwd"])) {
				$_SESSION["error"] = "";
				$_SESSION["login"] = $_POST["login"];
				$_SESSION["user_name"] = $value["user_name"];
				$_SESSION["user_mobile"] = $value["user_mobile"];
				if ($_POST["login"] === "admin") {
					$_SESSION["admin"] = "admin";
					header("Location: admin_page.php");
					return;
				}
				else {
					$_SESSION["admin"] = "";
				}
				header("Location: index.php");
				return;
			} 
		}
	}
	$_SESSION["error"] = "passwd_error";
	header("Location: user_enter.php");
?>
