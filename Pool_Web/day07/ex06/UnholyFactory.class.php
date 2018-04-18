<?php

class UnholyFactory {
	public static $army = array();
	function absorb($obg) {
		if (in_array($obg, self::$army)) {
			print("(Factory already absorbed a fighter of type " . $obg->name . ")" . PHP_EOL);
		}
		else {
			if ($obg->name) {
				printf("(Factory absorbed a fighter of type " . $obg->name . ")" . PHP_EOL);
				array_push(self::$army, $obg);
			}
			else {
				printf("(Factory can't absorb this, it's not a fighter)" . PHP_EOL);
			}
		}
	}
	function fabricate ($rf) {
		if ($rf === "llama") {
			printf("(Factory hasn't absorbed any fighter of type llama)". PHP_EOL);
		}
		else {
			printf("(Factory fabricates a fighter of type " . $rf . ")" . PHP_EOL);
			if ($rf === "foot soldier")
				return (new Footsoldier());
			else if ($rf === "archer")
				return (new Archer());
			else if ($rf === "assassin")
				return (new Assassin());
		}
	}
}
?>