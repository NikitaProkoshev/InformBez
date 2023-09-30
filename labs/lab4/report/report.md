---
## Front matter
title: "Отчёт Лабораторной работы №4"
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

Цель: Получение практических навыков работы в консоли с расширенными атрибутами файлов.

# Задание

1. Изучить теоретическую составляющую работы в консоли с расширенными атрибутами файлов.
2. Реализовать работу в консоли.

# Выполнение лабораторной работы

1. От имени пользователя guest определяем расширенные атрибуты файла /home/guest/dir1/file1 (Рис. @pic:001).

![Рис. 1. Определяем расширенные атрибуты файла.](image/pic1.png){#pic:001 width=70%}

2. Устанавливаем на файл file1 права, разрешающие чтение и запись для владельца файла (Рис. @pic:002).

![Рис. 2. Устанавливаем на файл file1 права.](image/pic2.png){#pic:002 width=70%}

3. Пробуем установить на файл /home/guest/dir1/file1 расширенный атрибут a от имени пользователя guest (Рис. @pic:003).

![Рис. 3. Пробуем установить на файл file1 расширенный атрибут a](image/pic3.png){#pic:003 width=70%}

4. Заходим на другую консоль с правами администратора или от имени суперпользователя и заново пробуем выполнить пункт 3 (Рис. @pic:004).

![Рис. 4. Заходим на другую консоль с правами администратора.](image/pic4.png){#pic:004 width=70%}

5. От пользователя guest проверяем правильность установления атрибута (Рис. @pic:005).

![Рис. 5. проверяем правильность установления атрибута.](image/pic5.png){#pic:005 width=70%}

6. Выполняем дозапись в файл file1 слова "test" и читаем файл (Рис. @pic:006).

![Рис. 6. Выполняем дозапись в файл file1 слова "test".](image/pic6.png){#pic:006 width=70%}

7. Пробуем удалить файл file1 либо стереть имеющуюся в нём информацию (Рис. @pic:007).

![Рис. 7. Пробуем удалить файл file1.](image/pic7.png){#pic:007 width=70%}

8. Пробуем установить на файл file1 права, запрещающие чтение и запись для владельца файла (Рис. @pic:008).

![Рис. 8. Пробуем установить на файл file1 права.](image/pic8.png){#pic:008 width=70%}

9. Снимаем расширенный а с файла /home/guest/dir1/file1 от имени суперпользователя (Рис. @pic:009).

![Рис. 9. Пробуем установить на файл file1 права.](image/pic9.png){#pic:009 width=70%}

10. Заново проделываем не удавшиеся действия (Рис. @pic:010).

![Рис. 10. Заново проделываем не удавшиеся действия.](image/pic10.png){#pic:010 width=70%}

# Выводы

В ходе данной лабораторной работы были получены практические навыки работы в консоли с расширенными атрибутами файлов.

# Список литературы{.unnumbered}

::: {#refs}
:::
