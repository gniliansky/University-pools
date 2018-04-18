<?php
	session_start();
	if (isset($_POST["submit"]) && $_POST["submit"] === "DELETE ALL")
	{
		unset($_SESSION["prod"]);
		header("Location: cart.php");
	}
	else if (isset($_POST["submit"]) && $_POST["submit"] === "Delete") {
		foreach ($_SESSION["prod"] as $key => $value) {
			if ($value["art_id"] === $_POST["del_pos"]) {
				unset($_SESSION["prod"][$key]);
				if (empty($_SESSION["prod"])) {
					unset($_SESSION["prod"]);
				}
				header("Location: cart.php");
			} 
		}
	}
	else if (isset($_POST["submit"]) && $_POST["submit"] === "Back") {
		$_SESSION["error"] = "";
		header("Location: index.php");
	}
	else if (isset($_POST["submit"]) && $_POST["submit"] === "Buy") {
		if (!isset($_SESSION["login"]) || $_SESSION["login"] === "") {
			$_SESSION["error"] = "buy_error";
			header("Location: cart.php");
		}
		else if (!isset($_SESSION["prod"])) {
			$_SESSION["error"] = "empty_error";
			header("Location: cart.php");
		}
		else {
			$_SESSION["error"] = "thank_error";
			$array_data = unserialize(file_get_contents("private/order"));
			$array_data[] = ["login" => $_SESSION["login"], "user_name" => $_SESSION["user_name"], "user_mobile" => $_SESSION["user_mobile"], "prod" => $_SESSION["prod"]];
			file_put_contents("private/order", serialize($array_data));
			unset($_SESSION["prod"]);
			header("Location: cart.php");
		}
	}
?>
