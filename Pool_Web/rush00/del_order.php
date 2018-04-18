<?php
	session_start();
	if ($_POST["submit"] === "CANCEL")
		header("Location: admin_page.php");
	if ($_POST["submit"] === "DELETE ALL") {
		if (file_exists("private/order")) {
			unlink("private/order");
		}
		header("Location: order.php");
	}
?>