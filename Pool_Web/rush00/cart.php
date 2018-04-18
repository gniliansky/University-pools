<?php
	session_start();
?>
<!DOCTYPE html>
<html>
<head>
	<title>Cart</title>
	<link rel="stylesheet" type="text/css" href="cart.css">
</head>
<body>
	<div class="page">
	<h3> The CART</h3>
	<?php
		if (isset($_SESSION["prod"])) {
			echo '<table id="table" align="center">
			<tr>
				<td>
					<div class="char1"> ID </div>
				</td>
				<td>
					<div class="char2"> Description </div>
				</td>
				<td>
					<div class="char3"> Number </div>
				</td>
				<td>
					<div class="char4"> Price </div>
				</td>
				<td>
					<div class="char4"> Total </div>
				</td>
				<td>
					<div class="char4"> Delete </div>
				</td>
			</tr>';
		}
		if (!isset($_SESSION["prod"]) && ($_SESSION["error"] !== "thank_error")) {
			$_SESSION["error"] = "empty_error";
		}
	?>
		<?php
			$summ = 0;
			if (isset($_SESSION["prod"])) {
				foreach ($_SESSION["prod"] as $value) {
					$summ = $summ + $value['art_number'] * $value['art_price'];
					echo'<tr>
						<td>
							<div class="char1">'.$value['art_id'].'</div>
						</td>
						<td>
							<div class="char2">'.$value['art_name'].'</div>
						</td>
						<td>
							<div class="char4">'.$value['art_number'].'</div>
						</td>
						<td>
							<div class="char3">'.$value['art_price'].' UAH</div>
						</td>
						<td>
							<div class="char3">'.$value['art_number']*$value['art_price'].' UAH</div>
						</td>
						<td>
							<form  action="buy_cart.php" method="post">
								<input class="butten" type="submit" name="submit" value="Delete">
								<input type="hidden" name="del_pos" value="'.$value['art_id'].'">
							</form>
						</td>
					</tr>';
				}
				echo'<tr>
						<td colspan="4">
							<div class="chart">ALL TOTAL</div>
						</td>
						<td>
							<div class="chart">'.$summ.' UAH</div>
						</td>
						<td>
							<form  action="buy_cart.php" method="post">
								<input class="butten" type="submit" name="submit" value="DELETE ALL">	
							</form>
						</td>	
					</tr>';
			}
		?>
	</table>
	<br />
	<div class="error1">
		<?php 
			if ($_SESSION["error"] === "buy_error") {
				echo "If you want to buy, you need to login.";
			}
			else if ($_SESSION["error"] === "empty_error") {
				echo "The cart is empty.";
			}
		?>
	</div>
	<div class="thank">
		<?php 
			if ($_SESSION["error"] === "thank_error") {
				echo "Thanks for buying in our store!";
				$_SESSION["error"] = "";
			}
		?>
	</div>
	<br />
		<form  action="buy_cart.php" method="post">
			<input class="butten" type="submit" name="submit" value="Buy">
			<input class="butten" type="submit" name="submit" value="Back">
		</form>
	<br />
	</div>
</body>
</html>
