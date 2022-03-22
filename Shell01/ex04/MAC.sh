#!/bin/bash
ifconfig -a | grep -e inet6 -e ether | cut -d " "  -f2 | sed s/$/\/g
