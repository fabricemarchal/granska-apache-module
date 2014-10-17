#!/bin/bash
curl http://localhost/ping.granska
curl  -X POST -H "Content-Type: application/x-www-form-urlencoded;charset=ISO-8859-1" --data-binary @sample.txt http://localhost/run.granska
curl http://localhost/stats.granska
