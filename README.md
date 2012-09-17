## About

![logo](https://raw.github.com/towerjoo/django_startpoint/master/startpoint/static/images/logo.png)

This project is to ease the start of a new django project which is called *start point* in this project.

And it should:

1. easy to start from
2. easy to customize
3. add some useful toolkits

## Features

Now the current project supports:

1. [django debug toolbar][debug_toolbar] supports - to ease development/bugfixing
2. [django evolution][evolution] - to migrate the models when fields changed. I prefer this to [south][south]
3. basic setup: admin, static files, etc.
4. a *reasonable* directories layout, at least for me.

## Usage

To use this tool, you can:

1. clone or download the source code
2. *cd* to the root directory of the source code, and run the *rename.py* to change the project name to what you want.
   *python rename.py -h* will show you the usage of that script
3. after *syncdb* and *runserver* you'll see your page in *http://localhost:8000/sample/* for the builtin sample app

## Change Log

1. 2012-09-12  Make the basic workable tool

## TODO

Check [To Do List][todo] here.


[debug_toolbar]:https://github.com/robhudson/django-debug-toolbar
[evolution]:http://code.google.com/p/django-evolution/
[south]: http://south.aeracode.org/
[todo]: https://github.com/towerjoo/django_startpoint/issues?labels=TODO&page=1&state=open
