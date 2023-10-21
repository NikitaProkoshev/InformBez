---
## Front matter
title: "Отчёт Лабораторной работы №7"
subtitle: "По дисциплине Информационная безопасность"
author: "Прокошев Никита Евгеньевич"

## Generic otions
lang: ru-RU
toc-title: "Содержание"

## Bibliography
bibliography: bib/cite.bib
csl: pandoc/csl/gost-r-7-0-5-2008-numeric.csl

## Pdf output format
toc: true # Table of contents
toc-depth: 2
lof: true # List of figures
lot: true # List of tables
fontsize: 12pt
linestretch: 1.5
papersize: a4
documentclass: scrreprt
## I18n polyglossia
polyglossia-lang:
  name: russian
  options:
	- spelling=modern
	- babelshorthands=true
polyglossia-otherlangs:
  name: english
## I18n babel
babel-lang: russian
babel-otherlangs: english
## Fonts
mainfont: PT Serif
romanfont: PT Serif
sansfont: PT Sans
monofont: PT Mono
mainfontoptions: Ligatures=TeX
romanfontoptions: Ligatures=TeX
sansfontoptions: Ligatures=TeX,Scale=MatchLowercase
monofontoptions: Scale=MatchLowercase,Scale=0.9
## Biblatex
biblatex: true
biblio-style: "gost-numeric"
biblatexoptions:
  - parentracker=true
  - backend=biber
  - hyperref=auto
  - language=auto
  - autolang=other*
  - citestyle=gost-numeric
## Pandoc-crossref LaTeX customization
figureTitle: "Рис."
tableTitle: "Таблица"
listingTitle: "Листинг"
lofTitle: "Список иллюстраций"
lotTitle: "Список таблиц"
lolTitle: "Листинги"
## Misc options
indent: true
header-includes:
  - \usepackage{indentfirst}
  - \usepackage{float} # keep figures where there are in the text
  - \floatplacement{figure}{H} # keep figures where there are in the text
---

# Цель работы

Цель: Освоить на практике применение режима однократного гаммирования.

# Выполнение лабораторной работы

1. Создаём файл lab7.c (@pic:001).

![ Создаём файл lab7.c.](image/pic1.png){#pic:001 width=70%}

2. Пишем код для создания ключа, шифровки и дешифровки на языке с (@pic:002).

![ Код на языке С.](image/pic2.png){#pic:002 width=70%}

3. Компилируем и запускаем программу (@pic:003).

![ Запускаем программу.](image/pic3.png){#pic:003 width=70%}

# Выводы

В ходе данной лабораторной работы удалось освоить на практике применение режима однократного гаммирования.

# Список литературы{.unnumbered}

::: {#refs}
:::
