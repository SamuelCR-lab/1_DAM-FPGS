#!/bin/bash

for fichero in $(ls); do
	    if [[ -f $fichero ]]; then
		            echo $fichero
			        fi
			done | wc -l  
			
