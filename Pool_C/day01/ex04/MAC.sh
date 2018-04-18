#!/bin/sh
ifconfig | grep "\tether" | cut -d ' ' -f 2
