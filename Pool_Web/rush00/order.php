<?php
	session_start();
?>
<!DOCTYPE html>
<html>
<head>
	<title> Order</title>
	<link rel="stylesheet" type="text/css" href="cart.css">
</head>
<body>
	<div class="page">
		<h3> The last orders </h3>
		<?php
			if (file_exists("private/order")) {
				$array_data = unserialize(file_get_contents("private/order"));
				foreach ($array_data as $order) {
					echo 'Order by '.$order["user_name"].' (login '.$order["login"].') mobile phone '.$order["user_mobile"];
					echo
						'<table id="table" align="center">
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
							</tr>';
					$summ = 0;
					foreach ($order["prod"] as $prod) {	
						$summ = $summ + $prod['art_number'] * $prod['art_price'];
						echo
								'<tr>
									<td>
										<div class="char1">'.$prod['art_id'].'</div>
									</td>
									<td>
										<div class="char2">'.$prod['art_name'].'</div>
									</td>
									<td>
										<div class="char4">'.$prod['art_number'].'</div>
									</td>
									<td>
										<div class="char3">'.$prod['art_price'].' UAH</div>
									</td>
									<td>
										<div class="char3">'.$prod['art_number']*$prod['art_price'].' UAH</div>
									</td>
									</tr>';
					}
					echo
							'<tr>
								<td colspan="4">
									<div class="chart">ALL TOTAL</div>
								</td>
								<td>
									<div class="chart">'.$summ.' UAH</div>
								</td>
									
							</tr>
							</table><br /><br /><br />';
				}
			}
		?>
		<form  action="del_order.php" method="post">
			<input class="butten" type="submit" name="submit" value="DELETE ALL">
			<input class="butten" type="submit" name="submit" value="CANCEL">
		</form>	<br /><br />
	</div>
</body>
</html>