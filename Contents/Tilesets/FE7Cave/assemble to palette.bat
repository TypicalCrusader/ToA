@echo off

@rem call with palette output and compression
"%~dp0Png2Dmp" --palette-only  "%~1" -po "%~n1_pal.dmp

pause