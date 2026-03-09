.PHONY: run

run:
	echo "" > DUMP
	pdflatex --shell-escape interpreted.tex > /dev/null
	tr -d '\n' < DUMP
	rm interpreted.aux interpreted.log interpreted.output
